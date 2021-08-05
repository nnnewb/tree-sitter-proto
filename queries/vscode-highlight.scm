[
  "syntax"
  "package"
  "option"
  "import"
  "service"
  "rpc"
  "returns"
  "message"
  "enum"
  "oneof"
  "repeated"
  "reserved"
  "to"
] @keyword

[
  (key_type)
  (type)
  (message_name)
] @type

(enum_name) @enum
(service_name) @class
(rpc_name) @function
(string) @string

[
  (int_lit)
  (float_lit)
] @number
 
(field
  field_name: (identifier) @property)

(rpc
  request_type: (message_or_enum_type) @type)

(rpc
  response_type: (message_or_enum_type) @type)

(option
  ("(" (full_ident) @parameter ")"))

(option
  (identifier) @parameter)

(option
  (_)
  (identifier) @parameter)

(block_lit (identifier) @property)

[
  (true)
  (false)
] @constant.builtin

(comment) @comment

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
]  @punctuation.bracket
