/* Build a parser 'Adjective' to recognize descriptions */
mpc_parser_t* Adjective = mpc_or(4,
    mpc_sym("wow"), mpc_sym("many"),
    mpc_sym("so"),  mpc_sym("such")
  );
  
  /* Build a parser 'Noun' to recognize things */
  mpc_parser_t* Noun = mpc_or(5,
    mpc_sym("lisp"), mpc_sym("language"),
    mpc_sym("book"),mpc_sym("build"),
    mpc_sym("c")
  );
  

// for phrase
// We need to use the function mpc_and, that specifies one thing is required then another. As input we pass it Adjective and Noun, our previously defined parsers. This function also takes the arguments mpcf_strfold and free, which say how to join or delete the results of these parsers. Ignore these arguments for now.

mpc_parser_t* Phrase = mpc_and(2, mpcf_strfold,
    Adjective, Noun, free);


// To define Doge we must specify that zero or more of some parser is required. For this we need to use the function mpc_many

mpc_parser_t* Doge = mpc_many(mpcf_strfold, Phrase);


// our doge parser accepts inputs of any length. this means its language is infinite.
"wow book such language many lisp"
"so c such build such language"
"many build wow c"
""
"wow lisp wow c many language"
"so c"


Here is how we would recreate the previous examples using this method.

mpc_parser_t* Adjective = mpc_new("adjective");
mpc_parser_t* Noun      = mpc_new("noun");
mpc_parser_t* Phrase    = mpc_new("phrase");
mpc_parser_t* Doge      = mpc_new("doge");

mpca_lang(MPCA_LANG_DEFAULT,
  "                                           \
    adjective : \"wow\" | \"many\"            \
              |  \"so\" | \"such\";           \
    noun      : \"lisp\" | \"language\"       \
              | \"book\" | \"build\" | \"c\"; \
    phrase    : <adjective> <noun>;           \
    doge      : <phrase>*;                    \
  ",
  Adjective, Noun, Phrase, Doge);

/* Do some parsing here... */

mpc_cleanup(4, Adjective, Noun, Phrase, Doge);


The special symbols used to define the rules on the right hand side work as follows.

"ab"	The string ab is required.
'a'	The character a is required.
'a' 'b'	First 'a' is required, then 'b' is required.
'a' | 'b'	Either 'a' is required, or 'b' is required.
'a'*	Zero or more 'a' are required.
'a'+	One or more 'a' are required.
<abba>	The rule called abba is required.