#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 299
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 119
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 13

enum {
  anon_sym_SEMI = 1,
  anon_sym_syntax = 2,
  anon_sym_EQ = 3,
  anon_sym_DQUOTEproto3_DQUOTE = 4,
  anon_sym_import = 5,
  anon_sym_weak = 6,
  anon_sym_public = 7,
  anon_sym_package = 8,
  anon_sym_option = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_DOT = 12,
  anon_sym_enum = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_DASH = 16,
  anon_sym_LBRACK = 17,
  anon_sym_COMMA = 18,
  anon_sym_RBRACK = 19,
  anon_sym_message = 20,
  anon_sym_optional = 21,
  anon_sym_repeated = 22,
  anon_sym_oneof = 23,
  anon_sym_map = 24,
  anon_sym_LT = 25,
  anon_sym_GT = 26,
  anon_sym_int32 = 27,
  anon_sym_int64 = 28,
  anon_sym_uint32 = 29,
  anon_sym_uint64 = 30,
  anon_sym_sint32 = 31,
  anon_sym_sint64 = 32,
  anon_sym_fixed32 = 33,
  anon_sym_fixed64 = 34,
  anon_sym_sfixed32 = 35,
  anon_sym_sfixed64 = 36,
  anon_sym_bool = 37,
  anon_sym_string = 38,
  anon_sym_double = 39,
  anon_sym_float = 40,
  anon_sym_bytes = 41,
  anon_sym_reserved = 42,
  anon_sym_to = 43,
  anon_sym_max = 44,
  anon_sym_service = 45,
  anon_sym_rpc = 46,
  anon_sym_stream = 47,
  anon_sym_returns = 48,
  anon_sym_PLUS = 49,
  anon_sym_COLON = 50,
  sym_identifier = 51,
  sym_true = 52,
  sym_false = 53,
  sym_decimal_lit = 54,
  sym_octal_lit = 55,
  sym_hex_lit = 56,
  sym_float_lit = 57,
  anon_sym_DQUOTE = 58,
  aux_sym_string_token1 = 59,
  anon_sym_SQUOTE = 60,
  aux_sym_string_token2 = 61,
  sym_escape_sequence = 62,
  sym_comment = 63,
  sym_source_file = 64,
  sym_empty_statement = 65,
  sym_syntax = 66,
  sym_import = 67,
  sym_package = 68,
  sym_option = 69,
  sym__option_name = 70,
  sym_enum = 71,
  sym_enum_name = 72,
  sym_enum_body = 73,
  sym_enum_field = 74,
  sym_enum_value_option = 75,
  sym_message = 76,
  sym_message_body = 77,
  sym_message_name = 78,
  sym_field = 79,
  sym_field_options = 80,
  sym_field_option = 81,
  sym_oneof = 82,
  sym_oneof_field = 83,
  sym_map_field = 84,
  sym_key_type = 85,
  sym_type = 86,
  sym_reserved = 87,
  sym_ranges = 88,
  sym_range = 89,
  sym_field_names = 90,
  sym_message_or_enum_type = 91,
  sym_field_number = 92,
  sym_service = 93,
  sym_service_name = 94,
  sym_rpc = 95,
  sym_rpc_name = 96,
  sym_constant = 97,
  sym_block_lit = 98,
  sym_full_ident = 99,
  sym_bool = 100,
  sym_int_lit = 101,
  sym_string = 102,
  aux_sym_source_file_repeat1 = 103,
  aux_sym__option_name_repeat1 = 104,
  aux_sym_enum_body_repeat1 = 105,
  aux_sym_enum_field_repeat1 = 106,
  aux_sym_message_body_repeat1 = 107,
  aux_sym_field_options_repeat1 = 108,
  aux_sym_oneof_repeat1 = 109,
  aux_sym_ranges_repeat1 = 110,
  aux_sym_field_names_repeat1 = 111,
  aux_sym_message_or_enum_type_repeat1 = 112,
  aux_sym_service_repeat1 = 113,
  aux_sym_rpc_repeat1 = 114,
  aux_sym_block_lit_repeat1 = 115,
  aux_sym_block_lit_repeat2 = 116,
  aux_sym_string_repeat1 = 117,
  aux_sym_string_repeat2 = 118,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_syntax] = "syntax",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTEproto3_DQUOTE] = "\"proto3\"",
  [anon_sym_import] = "import",
  [anon_sym_weak] = "weak",
  [anon_sym_public] = "public",
  [anon_sym_package] = "package",
  [anon_sym_option] = "option",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
  [anon_sym_enum] = "enum",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH] = "-",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_message] = "message",
  [anon_sym_optional] = "optional",
  [anon_sym_repeated] = "repeated",
  [anon_sym_oneof] = "oneof",
  [anon_sym_map] = "map",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_uint32] = "uint32",
  [anon_sym_uint64] = "uint64",
  [anon_sym_sint32] = "sint32",
  [anon_sym_sint64] = "sint64",
  [anon_sym_fixed32] = "fixed32",
  [anon_sym_fixed64] = "fixed64",
  [anon_sym_sfixed32] = "sfixed32",
  [anon_sym_sfixed64] = "sfixed64",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_double] = "double",
  [anon_sym_float] = "float",
  [anon_sym_bytes] = "bytes",
  [anon_sym_reserved] = "reserved",
  [anon_sym_to] = "to",
  [anon_sym_max] = "max",
  [anon_sym_service] = "service",
  [anon_sym_rpc] = "rpc",
  [anon_sym_stream] = "stream",
  [anon_sym_returns] = "returns",
  [anon_sym_PLUS] = "+",
  [anon_sym_COLON] = ":",
  [sym_identifier] = "identifier",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_decimal_lit] = "decimal_lit",
  [sym_octal_lit] = "octal_lit",
  [sym_hex_lit] = "hex_lit",
  [sym_float_lit] = "float_lit",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_empty_statement] = "empty_statement",
  [sym_syntax] = "syntax",
  [sym_import] = "import",
  [sym_package] = "package",
  [sym_option] = "option",
  [sym__option_name] = "_option_name",
  [sym_enum] = "enum",
  [sym_enum_name] = "enum_name",
  [sym_enum_body] = "enum_body",
  [sym_enum_field] = "enum_field",
  [sym_enum_value_option] = "enum_value_option",
  [sym_message] = "message",
  [sym_message_body] = "message_body",
  [sym_message_name] = "message_name",
  [sym_field] = "field",
  [sym_field_options] = "field_options",
  [sym_field_option] = "field_option",
  [sym_oneof] = "oneof",
  [sym_oneof_field] = "oneof_field",
  [sym_map_field] = "map_field",
  [sym_key_type] = "key_type",
  [sym_type] = "type",
  [sym_reserved] = "reserved",
  [sym_ranges] = "ranges",
  [sym_range] = "range",
  [sym_field_names] = "field_names",
  [sym_message_or_enum_type] = "message_or_enum_type",
  [sym_field_number] = "field_number",
  [sym_service] = "service",
  [sym_service_name] = "service_name",
  [sym_rpc] = "rpc",
  [sym_rpc_name] = "rpc_name",
  [sym_constant] = "constant",
  [sym_block_lit] = "block_lit",
  [sym_full_ident] = "full_ident",
  [sym_bool] = "bool",
  [sym_int_lit] = "int_lit",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__option_name_repeat1] = "_option_name_repeat1",
  [aux_sym_enum_body_repeat1] = "enum_body_repeat1",
  [aux_sym_enum_field_repeat1] = "enum_field_repeat1",
  [aux_sym_message_body_repeat1] = "message_body_repeat1",
  [aux_sym_field_options_repeat1] = "field_options_repeat1",
  [aux_sym_oneof_repeat1] = "oneof_repeat1",
  [aux_sym_ranges_repeat1] = "ranges_repeat1",
  [aux_sym_field_names_repeat1] = "field_names_repeat1",
  [aux_sym_message_or_enum_type_repeat1] = "message_or_enum_type_repeat1",
  [aux_sym_service_repeat1] = "service_repeat1",
  [aux_sym_rpc_repeat1] = "rpc_repeat1",
  [aux_sym_block_lit_repeat1] = "block_lit_repeat1",
  [aux_sym_block_lit_repeat2] = "block_lit_repeat2",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_syntax] = anon_sym_syntax,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DQUOTEproto3_DQUOTE] = anon_sym_DQUOTEproto3_DQUOTE,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_weak] = anon_sym_weak,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_message] = anon_sym_message,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_repeated] = anon_sym_repeated,
  [anon_sym_oneof] = anon_sym_oneof,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_sint32] = anon_sym_sint32,
  [anon_sym_sint64] = anon_sym_sint64,
  [anon_sym_fixed32] = anon_sym_fixed32,
  [anon_sym_fixed64] = anon_sym_fixed64,
  [anon_sym_sfixed32] = anon_sym_sfixed32,
  [anon_sym_sfixed64] = anon_sym_sfixed64,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_reserved] = anon_sym_reserved,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_rpc] = anon_sym_rpc,
  [anon_sym_stream] = anon_sym_stream,
  [anon_sym_returns] = anon_sym_returns,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_identifier] = sym_identifier,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_decimal_lit] = sym_decimal_lit,
  [sym_octal_lit] = sym_octal_lit,
  [sym_hex_lit] = sym_hex_lit,
  [sym_float_lit] = sym_float_lit,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_empty_statement] = sym_empty_statement,
  [sym_syntax] = sym_syntax,
  [sym_import] = sym_import,
  [sym_package] = sym_package,
  [sym_option] = sym_option,
  [sym__option_name] = sym__option_name,
  [sym_enum] = sym_enum,
  [sym_enum_name] = sym_enum_name,
  [sym_enum_body] = sym_enum_body,
  [sym_enum_field] = sym_enum_field,
  [sym_enum_value_option] = sym_enum_value_option,
  [sym_message] = sym_message,
  [sym_message_body] = sym_message_body,
  [sym_message_name] = sym_message_name,
  [sym_field] = sym_field,
  [sym_field_options] = sym_field_options,
  [sym_field_option] = sym_field_option,
  [sym_oneof] = sym_oneof,
  [sym_oneof_field] = sym_oneof_field,
  [sym_map_field] = sym_map_field,
  [sym_key_type] = sym_key_type,
  [sym_type] = sym_type,
  [sym_reserved] = sym_reserved,
  [sym_ranges] = sym_ranges,
  [sym_range] = sym_range,
  [sym_field_names] = sym_field_names,
  [sym_message_or_enum_type] = sym_message_or_enum_type,
  [sym_field_number] = sym_field_number,
  [sym_service] = sym_service,
  [sym_service_name] = sym_service_name,
  [sym_rpc] = sym_rpc,
  [sym_rpc_name] = sym_rpc_name,
  [sym_constant] = sym_constant,
  [sym_block_lit] = sym_block_lit,
  [sym_full_ident] = sym_full_ident,
  [sym_bool] = sym_bool,
  [sym_int_lit] = sym_int_lit,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__option_name_repeat1] = aux_sym__option_name_repeat1,
  [aux_sym_enum_body_repeat1] = aux_sym_enum_body_repeat1,
  [aux_sym_enum_field_repeat1] = aux_sym_enum_field_repeat1,
  [aux_sym_message_body_repeat1] = aux_sym_message_body_repeat1,
  [aux_sym_field_options_repeat1] = aux_sym_field_options_repeat1,
  [aux_sym_oneof_repeat1] = aux_sym_oneof_repeat1,
  [aux_sym_ranges_repeat1] = aux_sym_ranges_repeat1,
  [aux_sym_field_names_repeat1] = aux_sym_field_names_repeat1,
  [aux_sym_message_or_enum_type_repeat1] = aux_sym_message_or_enum_type_repeat1,
  [aux_sym_service_repeat1] = aux_sym_service_repeat1,
  [aux_sym_rpc_repeat1] = aux_sym_rpc_repeat1,
  [aux_sym_block_lit_repeat1] = aux_sym_block_lit_repeat1,
  [aux_sym_block_lit_repeat2] = aux_sym_block_lit_repeat2,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_syntax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEproto3_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weak] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_message] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oneof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixed32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixed64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sfixed32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sfixed64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reserved] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_service] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rpc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stream] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_returns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_octal_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_float_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_syntax] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_package] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym__option_name] = {
    .visible = false,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_name] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_body] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_field] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_value_option] = {
    .visible = true,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_message_body] = {
    .visible = true,
    .named = true,
  },
  [sym_message_name] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_field_options] = {
    .visible = true,
    .named = true,
  },
  [sym_field_option] = {
    .visible = true,
    .named = true,
  },
  [sym_oneof] = {
    .visible = true,
    .named = true,
  },
  [sym_oneof_field] = {
    .visible = true,
    .named = true,
  },
  [sym_map_field] = {
    .visible = true,
    .named = true,
  },
  [sym_key_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_reserved] = {
    .visible = true,
    .named = true,
  },
  [sym_ranges] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_field_names] = {
    .visible = true,
    .named = true,
  },
  [sym_message_or_enum_type] = {
    .visible = true,
    .named = true,
  },
  [sym_field_number] = {
    .visible = true,
    .named = true,
  },
  [sym_service] = {
    .visible = true,
    .named = true,
  },
  [sym_service_name] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc_name] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_block_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_full_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_int_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__option_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_field_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_oneof_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ranges_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_names_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_or_enum_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_service_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rpc_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_lit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_lit_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_enum_member_name = 1,
  field_field_name = 2,
  field_modifier = 3,
  field_package_name = 4,
  field_path = 5,
  field_request_type = 6,
  field_response_type = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_enum_member_name] = "enum_member_name",
  [field_field_name] = "field_name",
  [field_modifier] = "modifier",
  [field_package_name] = "package_name",
  [field_path] = "path",
  [field_request_type] = "request_type",
  [field_response_type] = "response_type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 1},
  [9] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 2},
  [12] = {.index = 15, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 1},
  [1] =
    {field_package_name, 1},
  [2] =
    {field_modifier, 1},
    {field_path, 2},
  [4] =
    {field_enum_member_name, 0},
  [5] =
    {field_field_name, 1},
  [6] =
    {field_field_name, 2},
  [7] =
    {field_field_name, 3},
  [8] =
    {field_field_name, 6},
  [9] =
    {field_request_type, 3},
    {field_response_type, 7},
  [11] =
    {field_request_type, 4},
    {field_response_type, 8},
  [13] =
    {field_request_type, 3},
    {field_response_type, 8},
  [15] =
    {field_request_type, 4},
    {field_response_type, 9},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(172);
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '(') ADVANCE(185);
      if (lookahead == ')') ADVANCE(186);
      if (lookahead == '+') ADVANCE(248);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(360);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == '<') ADVANCE(207);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '>') ADVANCE(208);
      if (lookahead == '[') ADVANCE(194);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == ']') ADVANCE(196);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(88);
      if (lookahead == 'w') ADVANCE(68);
      if (lookahead == '{') ADVANCE(191);
      if (lookahead == '}') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(170)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '+') ADVANCE(248);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(360);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '[') ADVANCE(194);
      if (lookahead == 'f') ADVANCE(350);
      if (lookahead == 'i') ADVANCE(311);
      if (lookahead == 'n') ADVANCE(351);
      if (lookahead == 't') ADVANCE(325);
      if (lookahead == '{') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '/') ADVANCE(370);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(373);
      if (lookahead != 0) ADVANCE(374);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(176);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(124);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(362);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == 'b') ADVANCE(269);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == 'm') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(268);
      if (lookahead == 'r') ADVANCE(276);
      if (lookahead == 's') ADVANCE(265);
      if (lookahead == 'u') ADVANCE(298);
      if (lookahead == '}') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '/') ADVANCE(377);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(380);
      if (lookahead != 0) ADVANCE(381);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(185);
      if (lookahead == ')') ADVANCE(186);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(362);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '>') ADVANCE(208);
      if (lookahead == ']') ADVANCE(196);
      if (lookahead == '}') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(386);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(385);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == '[') ADVANCE(194);
      if (lookahead == 'b') ADVANCE(269);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == 's') ADVANCE(265);
      if (lookahead == 'u') ADVANCE(298);
      if (lookahead == '}') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(269);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == 'r') ADVANCE(284);
      if (lookahead == 's') ADVANCE(265);
      if (lookahead == 'u') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(269);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == 's') ADVANCE(265);
      if (lookahead == 'u') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 's') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(362);
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(359);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == '}') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(209);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(217);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(213);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(221);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(225);
      END_STATE();
    case 22:
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == '3') ADVANCE(3);
      END_STATE();
    case 24:
      if (lookahead == '3') ADVANCE(18);
      if (lookahead == '6') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == '6') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == '3') ADVANCE(21);
      if (lookahead == '6') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == '4') ADVANCE(211);
      END_STATE();
    case 29:
      if (lookahead == '4') ADVANCE(219);
      END_STATE();
    case 30:
      if (lookahead == '4') ADVANCE(215);
      END_STATE();
    case 31:
      if (lookahead == '4') ADVANCE(223);
      END_STATE();
    case 32:
      if (lookahead == '4') ADVANCE(227);
      END_STATE();
    case 33:
      if (lookahead == 'U') ADVANCE(169);
      if (lookahead == 'u') ADVANCE(165);
      if (lookahead == 'x') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(384);
      if (lookahead != 0) ADVANCE(382);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(94);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(95);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(239);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 77:
      if (lookahead == 'f') ADVANCE(365);
      END_STATE();
    case 78:
      if (lookahead == 'f') ADVANCE(365);
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(203);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(231);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 89:
      if (lookahead == 'k') ADVANCE(178);
      END_STATE();
    case 90:
      if (lookahead == 'k') ADVANCE(46);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(245);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(365);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(205);
      if (lookahead == 'x') ADVANCE(242);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 125:
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 152:
      if (lookahead == 'v') ADVANCE(84);
      END_STATE();
    case 153:
      if (lookahead == 'v') ADVANCE(70);
      END_STATE();
    case 154:
      if (lookahead == 'x') ADVANCE(242);
      END_STATE();
    case 155:
      if (lookahead == 'x') ADVANCE(174);
      END_STATE();
    case 156:
      if (lookahead == 'x') ADVANCE(61);
      END_STATE();
    case 157:
      if (lookahead == 'x') ADVANCE(76);
      END_STATE();
    case 158:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 170:
      if (eof) ADVANCE(172);
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '(') ADVANCE(185);
      if (lookahead == ')') ADVANCE(186);
      if (lookahead == '+') ADVANCE(248);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(360);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == '<') ADVANCE(207);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '>') ADVANCE(208);
      if (lookahead == '[') ADVANCE(194);
      if (lookahead == ']') ADVANCE(196);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(88);
      if (lookahead == 'w') ADVANCE(68);
      if (lookahead == '{') ADVANCE(191);
      if (lookahead == '}') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(170)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 171:
      if (eof) ADVANCE(172);
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(360);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == '}') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(171)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_syntax);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DQUOTEproto3_DQUOTE);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_weak);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'a') ADVANCE(301);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_message);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_message);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_optional);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_repeated);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_repeated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_oneof);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_oneof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_sint32);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_sint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_sint64);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_sint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_fixed32);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_fixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_fixed64);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_fixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_reserved);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_reserved);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_rpc);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_stream);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_stream);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(250);
      if (lookahead == '6') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(251);
      if (lookahead == '6') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(252);
      if (lookahead == '6') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(253);
      if (lookahead == '6') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(254);
      if (lookahead == '6') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          lookahead == 'g' ||
          lookahead == 'h' ||
          ('j' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'f') ADVANCE(299);
      if (lookahead == 'i') ADVANCE(313);
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          lookahead == 'j' ||
          lookahead == 'k' ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == 'l') ADVANCE(317);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          lookahead == 'o' ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == 'p') ADVANCE(335);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(353);
      if (lookahead == 'o') ADVANCE(316);
      if (lookahead == 'y') ADVANCE(334);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          lookahead == 'q' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'p') ADVANCE(286);
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'b') ADVANCE(303);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'd') ADVANCE(258);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'd') ADVANCE(259);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'f') ADVANCE(353);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'f') ADVANCE(204);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'g') ADVANCE(232);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'g') ADVANCE(279);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'l') ADVANCE(230);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'l') ADVANCE(331);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'm') ADVANCE(190);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'm') ADVANCE(246);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(353);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(342);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'p') ADVANCE(206);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'p') ADVANCE(286);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'p') ADVANCE(339);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 's') ADVANCE(347);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'u') ADVANCE(304);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'u') ||
          ('w' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'v') ADVANCE(287);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(353);
      if (lookahead == 'x') ADVANCE(277);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(353);
      if (lookahead == 'x') ADVANCE(290);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'a') ADVANCE(333);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'a') ADVANCE(337);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(162);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(361);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(363);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_octal_lit);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_hex_lit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_float_lit);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_float_lit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_float_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(372);
      if (lookahead == '/') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(374);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(371);
      if (lookahead == '/') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(372);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(374);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(379);
      if (lookahead == '/') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(381);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(378);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(379);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(381);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(386);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 171},
  [51] = {.lex_state = 171},
  [52] = {.lex_state = 171},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 171},
  [55] = {.lex_state = 171},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 171},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 171},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 171},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 171},
  [65] = {.lex_state = 171},
  [66] = {.lex_state = 171},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 171},
  [69] = {.lex_state = 171},
  [70] = {.lex_state = 171},
  [71] = {.lex_state = 171},
  [72] = {.lex_state = 171},
  [73] = {.lex_state = 171},
  [74] = {.lex_state = 171},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 171},
  [77] = {.lex_state = 171},
  [78] = {.lex_state = 16},
  [79] = {.lex_state = 16},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 171},
  [82] = {.lex_state = 171},
  [83] = {.lex_state = 171},
  [84] = {.lex_state = 171},
  [85] = {.lex_state = 171},
  [86] = {.lex_state = 171},
  [87] = {.lex_state = 171},
  [88] = {.lex_state = 171},
  [89] = {.lex_state = 171},
  [90] = {.lex_state = 171},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 14},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 14},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 14},
  [114] = {.lex_state = 15},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 171},
  [117] = {.lex_state = 16},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 16},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 16},
  [125] = {.lex_state = 171},
  [126] = {.lex_state = 171},
  [127] = {.lex_state = 171},
  [128] = {.lex_state = 171},
  [129] = {.lex_state = 171},
  [130] = {.lex_state = 171},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 171},
  [134] = {.lex_state = 16},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 171},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 171},
  [140] = {.lex_state = 171},
  [141] = {.lex_state = 171},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 171},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 16},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 16},
  [156] = {.lex_state = 16},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 6},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 6},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 6},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 6},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 6},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 6},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 6},
  [215] = {.lex_state = 6},
  [216] = {.lex_state = 6},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 6},
  [223] = {.lex_state = 6},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 6},
  [233] = {.lex_state = 6},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 6},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 6},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 6},
  [251] = {.lex_state = 6},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 4},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 6},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 6},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 4},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 6},
  [298] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_syntax] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_weak] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_message] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_repeated] = ACTIONS(1),
    [anon_sym_oneof] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_sint32] = ACTIONS(1),
    [anon_sym_sint64] = ACTIONS(1),
    [anon_sym_fixed32] = ACTIONS(1),
    [anon_sym_fixed64] = ACTIONS(1),
    [anon_sym_sfixed32] = ACTIONS(1),
    [anon_sym_sfixed64] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_reserved] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_rpc] = ACTIONS(1),
    [anon_sym_stream] = ACTIONS(1),
    [anon_sym_returns] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_decimal_lit] = ACTIONS(1),
    [sym_octal_lit] = ACTIONS(1),
    [sym_hex_lit] = ACTIONS(1),
    [sym_float_lit] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(292),
    [sym_syntax] = STATE(52),
    [anon_sym_syntax] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_option,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_enum,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      anon_sym_message,
    ACTIONS(19), 1,
      anon_sym_optional,
    ACTIONS(21), 1,
      anon_sym_repeated,
    ACTIONS(23), 1,
      anon_sym_oneof,
    ACTIONS(25), 1,
      anon_sym_map,
    ACTIONS(29), 1,
      anon_sym_reserved,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(205), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(216), 1,
      sym_message_or_enum_type,
    STATE(266), 1,
      sym_type,
    STATE(4), 9,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      aux_sym_message_body_repeat1,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [77] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_option,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_message,
    ACTIONS(19), 1,
      anon_sym_optional,
    ACTIONS(21), 1,
      anon_sym_repeated,
    ACTIONS(23), 1,
      anon_sym_oneof,
    ACTIONS(25), 1,
      anon_sym_map,
    ACTIONS(29), 1,
      anon_sym_reserved,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(205), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(216), 1,
      sym_message_or_enum_type,
    STATE(266), 1,
      sym_type,
    STATE(4), 9,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      aux_sym_message_body_repeat1,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [154] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_SEMI,
    ACTIONS(38), 1,
      anon_sym_option,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(44), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      anon_sym_message,
    ACTIONS(52), 1,
      anon_sym_optional,
    ACTIONS(55), 1,
      anon_sym_repeated,
    ACTIONS(58), 1,
      anon_sym_oneof,
    ACTIONS(61), 1,
      anon_sym_map,
    ACTIONS(67), 1,
      anon_sym_reserved,
    ACTIONS(70), 1,
      sym_identifier,
    STATE(205), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(216), 1,
      sym_message_or_enum_type,
    STATE(266), 1,
      sym_type,
    STATE(4), 9,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      aux_sym_message_body_repeat1,
    ACTIONS(64), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [231] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_option,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_message,
    ACTIONS(19), 1,
      anon_sym_optional,
    ACTIONS(21), 1,
      anon_sym_repeated,
    ACTIONS(23), 1,
      anon_sym_oneof,
    ACTIONS(25), 1,
      anon_sym_map,
    ACTIONS(29), 1,
      anon_sym_reserved,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(205), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(216), 1,
      sym_message_or_enum_type,
    STATE(266), 1,
      sym_type,
    STATE(2), 9,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      aux_sym_message_body_repeat1,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [308] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_option,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_message,
    ACTIONS(19), 1,
      anon_sym_optional,
    ACTIONS(21), 1,
      anon_sym_repeated,
    ACTIONS(23), 1,
      anon_sym_oneof,
    ACTIONS(25), 1,
      anon_sym_map,
    ACTIONS(29), 1,
      anon_sym_reserved,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(205), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(216), 1,
      sym_message_or_enum_type,
    STATE(266), 1,
      sym_type,
    STATE(3), 9,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      aux_sym_message_body_repeat1,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(79), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(83), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(87), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(91), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(95), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(99), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [595] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(103), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [630] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_SEMI,
    ACTIONS(108), 1,
      anon_sym_option,
    ACTIONS(111), 1,
      anon_sym_DOT,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 1,
      sym_identifier,
    STATE(205), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(216), 1,
      sym_message_or_enum_type,
    STATE(250), 1,
      sym_type,
    STATE(14), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_repeat1,
    ACTIONS(116), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(124), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(128), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [751] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_SEMI,
    ACTIONS(132), 1,
      anon_sym_option,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(205), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(216), 1,
      sym_message_or_enum_type,
    STATE(250), 1,
      sym_type,
    STATE(14), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_repeat1,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(138), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(142), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(146), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(150), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(154), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(158), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [1012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(162), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [1047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(166), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [1082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(170), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [1117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(174), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [1152] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_SEMI,
    ACTIONS(132), 1,
      anon_sym_option,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    STATE(205), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(216), 1,
      sym_message_or_enum_type,
    STATE(250), 1,
      sym_type,
    STATE(17), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_repeat1,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1203] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_repeated,
    STATE(205), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(216), 1,
      sym_message_or_enum_type,
    STATE(241), 1,
      sym_type,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(182), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(188), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(192), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(128), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1359] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(205), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(216), 1,
      sym_message_or_enum_type,
    STATE(276), 1,
      sym_type,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(196), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1423] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_COLON,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(212), 1,
      sym_hex_lit,
    ACTIONS(214), 1,
      sym_float_lit,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(138), 1,
      sym_constant,
    ACTIONS(200), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(208), 2,
      sym_true,
      sym_false,
    ACTIONS(210), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(94), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1473] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(205), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(216), 1,
      sym_message_or_enum_type,
    STATE(277), 1,
      sym_type,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1509] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(205), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(216), 1,
      sym_message_or_enum_type,
    STATE(241), 1,
      sym_type,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(83), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1573] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(212), 1,
      sym_hex_lit,
    ACTIONS(214), 1,
      sym_float_lit,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    STATE(131), 1,
      sym_constant,
    ACTIONS(200), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(208), 2,
      sym_true,
      sym_false,
    ACTIONS(210), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(94), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1620] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(214), 1,
      sym_float_lit,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(240), 1,
      sym_constant,
    ACTIONS(208), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(94), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1664] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(214), 1,
      sym_float_lit,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(174), 1,
      sym_constant,
    ACTIONS(208), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(94), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1708] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(214), 1,
      sym_float_lit,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(211), 1,
      sym_constant,
    ACTIONS(208), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(94), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1752] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(214), 1,
      sym_float_lit,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(162), 1,
      sym_constant,
    ACTIONS(208), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(94), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1796] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(214), 1,
      sym_float_lit,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(287), 1,
      sym_constant,
    ACTIONS(208), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(94), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1840] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(214), 1,
      sym_float_lit,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(217), 1,
      sym_constant,
    ACTIONS(208), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(94), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1884] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(214), 1,
      sym_float_lit,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(283), 1,
      sym_constant,
    ACTIONS(208), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(94), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1928] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(214), 1,
      sym_float_lit,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(286), 1,
      sym_constant,
    ACTIONS(208), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(94), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1972] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(214), 1,
      sym_float_lit,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(191), 1,
      sym_constant,
    ACTIONS(208), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(94), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2016] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(232), 1,
      anon_sym_import,
    ACTIONS(234), 1,
      anon_sym_package,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(238), 1,
      anon_sym_enum,
    ACTIONS(240), 1,
      anon_sym_message,
    ACTIONS(242), 1,
      anon_sym_service,
    STATE(51), 8,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_service,
      aux_sym_source_file_repeat1,
  [2054] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 1,
      anon_sym_SEMI,
    ACTIONS(249), 1,
      anon_sym_import,
    ACTIONS(252), 1,
      anon_sym_package,
    ACTIONS(255), 1,
      anon_sym_option,
    ACTIONS(258), 1,
      anon_sym_enum,
    ACTIONS(261), 1,
      anon_sym_message,
    ACTIONS(264), 1,
      anon_sym_service,
    STATE(51), 8,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_service,
      aux_sym_source_file_repeat1,
  [2092] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(232), 1,
      anon_sym_import,
    ACTIONS(234), 1,
      anon_sym_package,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(238), 1,
      anon_sym_enum,
    ACTIONS(240), 1,
      anon_sym_message,
    ACTIONS(242), 1,
      anon_sym_service,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    STATE(50), 8,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_service,
      aux_sym_source_file_repeat1,
  [2130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(267), 1,
      sym_key_type,
    ACTIONS(269), 12,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
  [2151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_message,
      anon_sym_service,
      anon_sym_rpc,
  [2167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_message,
      anon_sym_service,
      anon_sym_rpc,
  [2183] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DOT,
    STATE(56), 1,
      aux_sym__option_name_repeat1,
    ACTIONS(271), 7,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2216] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    ACTIONS(278), 1,
      sym_identifier,
    STATE(159), 1,
      sym_range,
    STATE(169), 1,
      sym_int_lit,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
    STATE(256), 2,
      sym_ranges,
      sym_field_names,
  [2240] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SEMI,
    ACTIONS(282), 1,
      anon_sym_option,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    ACTIONS(286), 1,
      sym_identifier,
    STATE(63), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [2262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2304] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SEMI,
    ACTIONS(282), 1,
      anon_sym_option,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    STATE(78), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [2326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2354] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    ACTIONS(292), 1,
      anon_sym_rpc,
    STATE(73), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [2376] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_DOT,
    STATE(56), 1,
      aux_sym__option_name_repeat1,
    ACTIONS(294), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2436] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_SEMI,
    ACTIONS(305), 1,
      anon_sym_option,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    ACTIONS(310), 1,
      anon_sym_rpc,
    STATE(71), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [2458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2472] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(292), 1,
      anon_sym_rpc,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    STATE(71), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [2494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2508] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_DOT,
    STATE(67), 1,
      aux_sym__option_name_repeat1,
    ACTIONS(319), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2554] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_SEMI,
    ACTIONS(326), 1,
      anon_sym_option,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    ACTIONS(331), 1,
      sym_identifier,
    STATE(78), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [2576] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SEMI,
    ACTIONS(282), 1,
      anon_sym_option,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    STATE(80), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [2598] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SEMI,
    ACTIONS(282), 1,
      anon_sym_option,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    STATE(78), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [2620] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_SEMI,
    ACTIONS(341), 1,
      anon_sym_option,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    STATE(81), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2638] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
    STATE(87), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2656] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    STATE(81), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2674] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(81), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2692] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    STATE(81), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2710] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    STATE(83), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2728] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
    STATE(81), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2746] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
    STATE(84), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2764] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
    STATE(85), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2782] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_hex_lit,
    ACTIONS(362), 1,
      sym_float_lit,
    STATE(101), 1,
      sym_int_lit,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [2799] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(189), 1,
      sym_field_option,
    STATE(237), 1,
      sym_field_options,
    STATE(296), 1,
      sym__option_name,
  [2818] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(189), 1,
      sym_field_option,
    STATE(290), 1,
      sym_field_options,
    STATE(296), 1,
      sym__option_name,
  [2837] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(274), 1,
      sym_string,
    ACTIONS(368), 2,
      anon_sym_weak,
      anon_sym_public,
  [2854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 5,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_to,
  [2876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2887] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    STATE(31), 1,
      sym_int_lit,
    STATE(224), 1,
      sym_field_number,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [2904] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym_octal_lit,
    STATE(30), 1,
      sym_field_number,
    STATE(31), 1,
      sym_int_lit,
    ACTIONS(374), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [2921] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(189), 1,
      sym_field_option,
    STATE(244), 1,
      sym_field_options,
    STATE(296), 1,
      sym__option_name,
  [2940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2973] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(384), 1,
      anon_sym_stream,
    STATE(205), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(238), 1,
      sym_message_or_enum_type,
  [2992] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(189), 1,
      sym_field_option,
    STATE(281), 1,
      sym_field_options,
    STATE(296), 1,
      sym__option_name,
  [3011] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    STATE(31), 1,
      sym_int_lit,
    STATE(227), 1,
      sym_field_number,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3039] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(189), 1,
      sym_field_option,
    STATE(254), 1,
      sym_field_options,
    STATE(296), 1,
      sym__option_name,
  [3058] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    ACTIONS(388), 1,
      anon_sym_DASH,
    STATE(207), 1,
      sym_int_lit,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3075] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    STATE(31), 1,
      sym_int_lit,
    STATE(193), 1,
      sym_field_number,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3103] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(392), 1,
      anon_sym_stream,
    STATE(205), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(234), 1,
      sym_message_or_enum_type,
  [3122] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    STATE(169), 1,
      sym_int_lit,
    STATE(230), 1,
      sym_range,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3139] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(394), 1,
      anon_sym_stream,
    STATE(205), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(260), 1,
      sym_message_or_enum_type,
  [3158] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    ACTIONS(396), 1,
      anon_sym_max,
    STATE(228), 1,
      sym_int_lit,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3175] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    STATE(31), 1,
      sym_int_lit,
    STATE(221), 1,
      sym_field_number,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3192] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym_hex_lit,
    ACTIONS(362), 1,
      sym_float_lit,
    STATE(101), 1,
      sym_int_lit,
    ACTIONS(210), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [3209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(400), 2,
      anon_sym_option,
      sym_identifier,
  [3221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(404), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3233] = 4,
    ACTIONS(406), 1,
      anon_sym_DQUOTE,
    ACTIONS(410), 1,
      sym_comment,
    STATE(132), 1,
      aux_sym_string_repeat1,
    ACTIONS(408), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [3247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(412), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [3259] = 4,
    ACTIONS(406), 1,
      anon_sym_SQUOTE,
    ACTIONS(410), 1,
      sym_comment,
    STATE(136), 1,
      aux_sym_string_repeat2,
    ACTIONS(416), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [3273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(128), 2,
      anon_sym_option,
      sym_identifier,
  [3285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_identifier,
  [3295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(83), 2,
      anon_sym_option,
      sym_identifier,
  [3307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(432), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3379] = 4,
    ACTIONS(410), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_DQUOTE,
    STATE(142), 1,
      aux_sym_string_repeat1,
    ACTIONS(436), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [3393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(442), 2,
      anon_sym_option,
      sym_identifier,
  [3415] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(165), 1,
      sym_enum_value_option,
    STATE(298), 1,
      sym__option_name,
  [3431] = 4,
    ACTIONS(410), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_SQUOTE,
    STATE(144), 1,
      aux_sym_string_repeat2,
    ACTIONS(444), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [3445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(450), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3497] = 4,
    ACTIONS(410), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_DQUOTE,
    STATE(142), 1,
      aux_sym_string_repeat1,
    ACTIONS(460), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [3511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3521] = 4,
    ACTIONS(410), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_SQUOTE,
    STATE(144), 1,
      aux_sym_string_repeat2,
    ACTIONS(467), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [3535] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(205), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(242), 1,
      sym_message_or_enum_type,
  [3551] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(205), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(239), 1,
      sym_message_or_enum_type,
  [3567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(472), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [3579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(476), 2,
      anon_sym_option,
      sym_identifier,
  [3591] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(205), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(263), 1,
      sym_message_or_enum_type,
  [3607] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(219), 1,
      sym_field_option,
    STATE(296), 1,
      sym__option_name,
  [3623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(478), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [3635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(482), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(486), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3659] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(201), 1,
      sym_enum_value_option,
    STATE(298), 1,
      sym__option_name,
  [3675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(490), 2,
      anon_sym_option,
      sym_identifier,
  [3687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(494), 2,
      anon_sym_option,
      sym_identifier,
  [3699] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(179), 1,
      sym_enum_value_option,
    STATE(298), 1,
      sym__option_name,
  [3715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    STATE(213), 1,
      sym_int_lit,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_SEMI,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym_ranges_repeat1,
  [3742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_COMMA,
    ACTIONS(503), 1,
      anon_sym_RBRACK,
    STATE(160), 1,
      aux_sym_enum_field_repeat1,
  [3755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(507), 1,
      anon_sym_RBRACK,
    STATE(177), 1,
      aux_sym_block_lit_repeat1,
  [3768] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(507), 1,
      anon_sym_RBRACK,
    STATE(178), 1,
      aux_sym_block_lit_repeat1,
  [3781] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(295), 1,
      sym__option_name,
  [3794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(294), 1,
      sym__option_name,
  [3807] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(511), 1,
      anon_sym_RBRACK,
    STATE(182), 1,
      aux_sym_enum_field_repeat1,
  [3820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(293), 1,
      sym__option_name,
  [3833] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(269), 1,
      sym__option_name,
  [3846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(255), 1,
      sym_string,
  [3859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_to,
    ACTIONS(513), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_DOT,
    ACTIONS(517), 1,
      anon_sym_EQ,
    STATE(176), 1,
      aux_sym__option_name_repeat1,
  [3883] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_SEMI,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_field_names_repeat1,
  [3896] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    ACTIONS(523), 1,
      anon_sym_SEMI,
    STATE(171), 1,
      aux_sym_field_names_repeat1,
  [3909] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    ACTIONS(525), 1,
      anon_sym_SEMI,
    STATE(181), 1,
      aux_sym_ranges_repeat1,
  [3922] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(527), 1,
      anon_sym_RBRACK,
    STATE(161), 1,
      aux_sym_block_lit_repeat1,
  [3935] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
    ACTIONS(529), 1,
      sym_identifier,
    STATE(175), 1,
      aux_sym_block_lit_repeat2,
  [3948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_DOT,
    ACTIONS(532), 1,
      anon_sym_EQ,
    STATE(56), 1,
      aux_sym__option_name_repeat1,
  [3961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(537), 1,
      anon_sym_RBRACK,
    STATE(177), 1,
      aux_sym_block_lit_repeat1,
  [3974] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(539), 1,
      anon_sym_RBRACK,
    STATE(177), 1,
      aux_sym_block_lit_repeat1,
  [3987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(541), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      aux_sym_enum_field_repeat1,
  [4000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_SEMI,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_field_names_repeat1,
  [4013] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_SEMI,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym_ranges_repeat1,
  [4026] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(541), 1,
      anon_sym_RBRACK,
    STATE(160), 1,
      aux_sym_enum_field_repeat1,
  [4039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_DOT,
    ACTIONS(553), 1,
      anon_sym_EQ,
    STATE(186), 1,
      aux_sym__option_name_repeat1,
  [4052] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
    ACTIONS(557), 1,
      sym_identifier,
    STATE(185), 1,
      aux_sym_block_lit_repeat2,
  [4065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      sym_identifier,
    ACTIONS(559), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      aux_sym_block_lit_repeat2,
  [4078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_DOT,
    ACTIONS(561), 1,
      anon_sym_EQ,
    STATE(56), 1,
      aux_sym__option_name_repeat1,
  [4091] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(563), 1,
      anon_sym_RBRACK,
    STATE(160), 1,
      aux_sym_enum_field_repeat1,
  [4104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    ACTIONS(567), 1,
      anon_sym_RBRACK,
    STATE(190), 1,
      aux_sym_field_options_repeat1,
  [4117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    ACTIONS(569), 1,
      anon_sym_RBRACK,
    STATE(188), 1,
      aux_sym_field_options_repeat1,
  [4130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(574), 1,
      anon_sym_RBRACK,
    STATE(190), 1,
      aux_sym_field_options_repeat1,
  [4143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_SEMI,
    ACTIONS(580), 1,
      anon_sym_LBRACE,
  [4161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_SEMI,
    ACTIONS(584), 1,
      anon_sym_LBRACK,
  [4171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym_identifier,
    STATE(273), 1,
      sym_full_ident,
  [4181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      sym_identifier,
    STATE(202), 1,
      sym_message_name,
  [4191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      sym_identifier,
    STATE(204), 1,
      sym_enum_name,
  [4201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      sym_identifier,
    STATE(208), 1,
      sym_enum_name,
  [4211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      sym_identifier,
    STATE(209), 1,
      sym_message_name,
  [4229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      sym_identifier,
    STATE(257), 1,
      sym_service_name,
  [4239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_message_body,
  [4257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      sym_identifier,
    STATE(247), 1,
      sym_rpc_name,
  [4267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_enum_body,
  [4277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      sym_identifier,
    STATE(215), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym_identifier,
    STATE(246), 1,
      sym_full_ident,
  [4297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_SEMI,
    ACTIONS(604), 1,
      anon_sym_LBRACK,
  [4307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_enum_body,
  [4317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_message_body,
  [4327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_SEMI,
    ACTIONS(614), 1,
      anon_sym_LBRACK,
  [4361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(215), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 2,
      anon_sym_GT,
      sym_identifier,
  [4387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_SEMI,
    ACTIONS(625), 1,
      anon_sym_LBRACK,
  [4429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym_identifier,
    STATE(215), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      sym_identifier,
    STATE(222), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_SEMI,
    ACTIONS(631), 1,
      anon_sym_LBRACK,
  [4459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_SEMI,
    ACTIONS(635), 1,
      anon_sym_LBRACE,
  [4469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_SEMI,
    ACTIONS(639), 1,
      anon_sym_LBRACE,
  [4479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_SEMI,
    ACTIONS(643), 1,
      anon_sym_LBRACK,
  [4489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_SEMI,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
  [4507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_LBRACE,
  [4522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      sym_identifier,
  [4529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      sym_identifier,
  [4536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
  [4543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_SEMI,
  [4550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_EQ,
  [4557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_RBRACK,
  [4564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_RPAREN,
  [4571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_RPAREN,
  [4578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_SEMI,
  [4585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      sym_identifier,
  [4592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_RPAREN,
  [4599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_SEMI,
  [4606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_RBRACK,
  [4613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_LPAREN,
  [4620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_RPAREN,
  [4627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_LPAREN,
  [4634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      sym_identifier,
  [4641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_SEMI,
  [4648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      sym_identifier,
  [4655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      sym_identifier,
  [4662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_EQ,
  [4669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_SEMI,
  [4676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_RBRACK,
  [4683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_SEMI,
  [4690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_SEMI,
  [4697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_LBRACE,
  [4704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_LBRACE,
  [4711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_SEMI,
  [4718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_RPAREN,
  [4725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_DOT,
  [4732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_returns,
  [4739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_RPAREN,
  [4746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_LT,
  [4753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_LBRACE,
  [4760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      sym_identifier,
  [4767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_COMMA,
  [4774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_LBRACE,
  [4781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_EQ,
  [4788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_COMMA,
  [4795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_EQ,
  [4802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_LPAREN,
  [4809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_SEMI,
  [4816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_SEMI,
  [4823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_EQ,
  [4830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      sym_identifier,
  [4837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_GT,
  [4844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_SEMI,
  [4851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_EQ,
  [4858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_SEMI,
  [4865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_RBRACK,
  [4872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_EQ,
  [4879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_SEMI,
  [4886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_SEMI,
  [4893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_EQ,
  [4900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_SEMI,
  [4907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_SEMI,
  [4914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_LPAREN,
  [4921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_returns,
  [4928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_RBRACK,
  [4935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_DQUOTEproto3_DQUOTE,
  [4942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      ts_builtin_sym_end,
  [4949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_EQ,
  [4956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_EQ,
  [4963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_EQ,
  [4970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_EQ,
  [4977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      sym_identifier,
  [4984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 231,
  [SMALL_STATE(6)] = 308,
  [SMALL_STATE(7)] = 385,
  [SMALL_STATE(8)] = 420,
  [SMALL_STATE(9)] = 455,
  [SMALL_STATE(10)] = 490,
  [SMALL_STATE(11)] = 525,
  [SMALL_STATE(12)] = 560,
  [SMALL_STATE(13)] = 595,
  [SMALL_STATE(14)] = 630,
  [SMALL_STATE(15)] = 681,
  [SMALL_STATE(16)] = 716,
  [SMALL_STATE(17)] = 751,
  [SMALL_STATE(18)] = 802,
  [SMALL_STATE(19)] = 837,
  [SMALL_STATE(20)] = 872,
  [SMALL_STATE(21)] = 907,
  [SMALL_STATE(22)] = 942,
  [SMALL_STATE(23)] = 977,
  [SMALL_STATE(24)] = 1012,
  [SMALL_STATE(25)] = 1047,
  [SMALL_STATE(26)] = 1082,
  [SMALL_STATE(27)] = 1117,
  [SMALL_STATE(28)] = 1152,
  [SMALL_STATE(29)] = 1203,
  [SMALL_STATE(30)] = 1242,
  [SMALL_STATE(31)] = 1273,
  [SMALL_STATE(32)] = 1302,
  [SMALL_STATE(33)] = 1331,
  [SMALL_STATE(34)] = 1359,
  [SMALL_STATE(35)] = 1395,
  [SMALL_STATE(36)] = 1423,
  [SMALL_STATE(37)] = 1473,
  [SMALL_STATE(38)] = 1509,
  [SMALL_STATE(39)] = 1545,
  [SMALL_STATE(40)] = 1573,
  [SMALL_STATE(41)] = 1620,
  [SMALL_STATE(42)] = 1664,
  [SMALL_STATE(43)] = 1708,
  [SMALL_STATE(44)] = 1752,
  [SMALL_STATE(45)] = 1796,
  [SMALL_STATE(46)] = 1840,
  [SMALL_STATE(47)] = 1884,
  [SMALL_STATE(48)] = 1928,
  [SMALL_STATE(49)] = 1972,
  [SMALL_STATE(50)] = 2016,
  [SMALL_STATE(51)] = 2054,
  [SMALL_STATE(52)] = 2092,
  [SMALL_STATE(53)] = 2130,
  [SMALL_STATE(54)] = 2151,
  [SMALL_STATE(55)] = 2167,
  [SMALL_STATE(56)] = 2183,
  [SMALL_STATE(57)] = 2202,
  [SMALL_STATE(58)] = 2216,
  [SMALL_STATE(59)] = 2240,
  [SMALL_STATE(60)] = 2262,
  [SMALL_STATE(61)] = 2276,
  [SMALL_STATE(62)] = 2290,
  [SMALL_STATE(63)] = 2304,
  [SMALL_STATE(64)] = 2326,
  [SMALL_STATE(65)] = 2340,
  [SMALL_STATE(66)] = 2354,
  [SMALL_STATE(67)] = 2376,
  [SMALL_STATE(68)] = 2394,
  [SMALL_STATE(69)] = 2408,
  [SMALL_STATE(70)] = 2422,
  [SMALL_STATE(71)] = 2436,
  [SMALL_STATE(72)] = 2458,
  [SMALL_STATE(73)] = 2472,
  [SMALL_STATE(74)] = 2494,
  [SMALL_STATE(75)] = 2508,
  [SMALL_STATE(76)] = 2526,
  [SMALL_STATE(77)] = 2540,
  [SMALL_STATE(78)] = 2554,
  [SMALL_STATE(79)] = 2576,
  [SMALL_STATE(80)] = 2598,
  [SMALL_STATE(81)] = 2620,
  [SMALL_STATE(82)] = 2638,
  [SMALL_STATE(83)] = 2656,
  [SMALL_STATE(84)] = 2674,
  [SMALL_STATE(85)] = 2692,
  [SMALL_STATE(86)] = 2710,
  [SMALL_STATE(87)] = 2728,
  [SMALL_STATE(88)] = 2746,
  [SMALL_STATE(89)] = 2764,
  [SMALL_STATE(90)] = 2782,
  [SMALL_STATE(91)] = 2799,
  [SMALL_STATE(92)] = 2818,
  [SMALL_STATE(93)] = 2837,
  [SMALL_STATE(94)] = 2854,
  [SMALL_STATE(95)] = 2865,
  [SMALL_STATE(96)] = 2876,
  [SMALL_STATE(97)] = 2887,
  [SMALL_STATE(98)] = 2904,
  [SMALL_STATE(99)] = 2921,
  [SMALL_STATE(100)] = 2940,
  [SMALL_STATE(101)] = 2951,
  [SMALL_STATE(102)] = 2962,
  [SMALL_STATE(103)] = 2973,
  [SMALL_STATE(104)] = 2992,
  [SMALL_STATE(105)] = 3011,
  [SMALL_STATE(106)] = 3028,
  [SMALL_STATE(107)] = 3039,
  [SMALL_STATE(108)] = 3058,
  [SMALL_STATE(109)] = 3075,
  [SMALL_STATE(110)] = 3092,
  [SMALL_STATE(111)] = 3103,
  [SMALL_STATE(112)] = 3122,
  [SMALL_STATE(113)] = 3139,
  [SMALL_STATE(114)] = 3158,
  [SMALL_STATE(115)] = 3175,
  [SMALL_STATE(116)] = 3192,
  [SMALL_STATE(117)] = 3209,
  [SMALL_STATE(118)] = 3221,
  [SMALL_STATE(119)] = 3233,
  [SMALL_STATE(120)] = 3247,
  [SMALL_STATE(121)] = 3259,
  [SMALL_STATE(122)] = 3273,
  [SMALL_STATE(123)] = 3285,
  [SMALL_STATE(124)] = 3295,
  [SMALL_STATE(125)] = 3307,
  [SMALL_STATE(126)] = 3317,
  [SMALL_STATE(127)] = 3327,
  [SMALL_STATE(128)] = 3337,
  [SMALL_STATE(129)] = 3347,
  [SMALL_STATE(130)] = 3357,
  [SMALL_STATE(131)] = 3367,
  [SMALL_STATE(132)] = 3379,
  [SMALL_STATE(133)] = 3393,
  [SMALL_STATE(134)] = 3403,
  [SMALL_STATE(135)] = 3415,
  [SMALL_STATE(136)] = 3431,
  [SMALL_STATE(137)] = 3445,
  [SMALL_STATE(138)] = 3455,
  [SMALL_STATE(139)] = 3467,
  [SMALL_STATE(140)] = 3477,
  [SMALL_STATE(141)] = 3487,
  [SMALL_STATE(142)] = 3497,
  [SMALL_STATE(143)] = 3511,
  [SMALL_STATE(144)] = 3521,
  [SMALL_STATE(145)] = 3535,
  [SMALL_STATE(146)] = 3551,
  [SMALL_STATE(147)] = 3567,
  [SMALL_STATE(148)] = 3579,
  [SMALL_STATE(149)] = 3591,
  [SMALL_STATE(150)] = 3607,
  [SMALL_STATE(151)] = 3623,
  [SMALL_STATE(152)] = 3635,
  [SMALL_STATE(153)] = 3647,
  [SMALL_STATE(154)] = 3659,
  [SMALL_STATE(155)] = 3675,
  [SMALL_STATE(156)] = 3687,
  [SMALL_STATE(157)] = 3699,
  [SMALL_STATE(158)] = 3715,
  [SMALL_STATE(159)] = 3729,
  [SMALL_STATE(160)] = 3742,
  [SMALL_STATE(161)] = 3755,
  [SMALL_STATE(162)] = 3768,
  [SMALL_STATE(163)] = 3781,
  [SMALL_STATE(164)] = 3794,
  [SMALL_STATE(165)] = 3807,
  [SMALL_STATE(166)] = 3820,
  [SMALL_STATE(167)] = 3833,
  [SMALL_STATE(168)] = 3846,
  [SMALL_STATE(169)] = 3859,
  [SMALL_STATE(170)] = 3870,
  [SMALL_STATE(171)] = 3883,
  [SMALL_STATE(172)] = 3896,
  [SMALL_STATE(173)] = 3909,
  [SMALL_STATE(174)] = 3922,
  [SMALL_STATE(175)] = 3935,
  [SMALL_STATE(176)] = 3948,
  [SMALL_STATE(177)] = 3961,
  [SMALL_STATE(178)] = 3974,
  [SMALL_STATE(179)] = 3987,
  [SMALL_STATE(180)] = 4000,
  [SMALL_STATE(181)] = 4013,
  [SMALL_STATE(182)] = 4026,
  [SMALL_STATE(183)] = 4039,
  [SMALL_STATE(184)] = 4052,
  [SMALL_STATE(185)] = 4065,
  [SMALL_STATE(186)] = 4078,
  [SMALL_STATE(187)] = 4091,
  [SMALL_STATE(188)] = 4104,
  [SMALL_STATE(189)] = 4117,
  [SMALL_STATE(190)] = 4130,
  [SMALL_STATE(191)] = 4143,
  [SMALL_STATE(192)] = 4151,
  [SMALL_STATE(193)] = 4161,
  [SMALL_STATE(194)] = 4171,
  [SMALL_STATE(195)] = 4181,
  [SMALL_STATE(196)] = 4191,
  [SMALL_STATE(197)] = 4201,
  [SMALL_STATE(198)] = 4211,
  [SMALL_STATE(199)] = 4219,
  [SMALL_STATE(200)] = 4229,
  [SMALL_STATE(201)] = 4239,
  [SMALL_STATE(202)] = 4247,
  [SMALL_STATE(203)] = 4257,
  [SMALL_STATE(204)] = 4267,
  [SMALL_STATE(205)] = 4277,
  [SMALL_STATE(206)] = 4287,
  [SMALL_STATE(207)] = 4297,
  [SMALL_STATE(208)] = 4307,
  [SMALL_STATE(209)] = 4317,
  [SMALL_STATE(210)] = 4327,
  [SMALL_STATE(211)] = 4335,
  [SMALL_STATE(212)] = 4343,
  [SMALL_STATE(213)] = 4351,
  [SMALL_STATE(214)] = 4361,
  [SMALL_STATE(215)] = 4369,
  [SMALL_STATE(216)] = 4379,
  [SMALL_STATE(217)] = 4387,
  [SMALL_STATE(218)] = 4395,
  [SMALL_STATE(219)] = 4403,
  [SMALL_STATE(220)] = 4411,
  [SMALL_STATE(221)] = 4419,
  [SMALL_STATE(222)] = 4429,
  [SMALL_STATE(223)] = 4439,
  [SMALL_STATE(224)] = 4449,
  [SMALL_STATE(225)] = 4459,
  [SMALL_STATE(226)] = 4469,
  [SMALL_STATE(227)] = 4479,
  [SMALL_STATE(228)] = 4489,
  [SMALL_STATE(229)] = 4497,
  [SMALL_STATE(230)] = 4507,
  [SMALL_STATE(231)] = 4515,
  [SMALL_STATE(232)] = 4522,
  [SMALL_STATE(233)] = 4529,
  [SMALL_STATE(234)] = 4536,
  [SMALL_STATE(235)] = 4543,
  [SMALL_STATE(236)] = 4550,
  [SMALL_STATE(237)] = 4557,
  [SMALL_STATE(238)] = 4564,
  [SMALL_STATE(239)] = 4571,
  [SMALL_STATE(240)] = 4578,
  [SMALL_STATE(241)] = 4585,
  [SMALL_STATE(242)] = 4592,
  [SMALL_STATE(243)] = 4599,
  [SMALL_STATE(244)] = 4606,
  [SMALL_STATE(245)] = 4613,
  [SMALL_STATE(246)] = 4620,
  [SMALL_STATE(247)] = 4627,
  [SMALL_STATE(248)] = 4634,
  [SMALL_STATE(249)] = 4641,
  [SMALL_STATE(250)] = 4648,
  [SMALL_STATE(251)] = 4655,
  [SMALL_STATE(252)] = 4662,
  [SMALL_STATE(253)] = 4669,
  [SMALL_STATE(254)] = 4676,
  [SMALL_STATE(255)] = 4683,
  [SMALL_STATE(256)] = 4690,
  [SMALL_STATE(257)] = 4697,
  [SMALL_STATE(258)] = 4704,
  [SMALL_STATE(259)] = 4711,
  [SMALL_STATE(260)] = 4718,
  [SMALL_STATE(261)] = 4725,
  [SMALL_STATE(262)] = 4732,
  [SMALL_STATE(263)] = 4739,
  [SMALL_STATE(264)] = 4746,
  [SMALL_STATE(265)] = 4753,
  [SMALL_STATE(266)] = 4760,
  [SMALL_STATE(267)] = 4767,
  [SMALL_STATE(268)] = 4774,
  [SMALL_STATE(269)] = 4781,
  [SMALL_STATE(270)] = 4788,
  [SMALL_STATE(271)] = 4795,
  [SMALL_STATE(272)] = 4802,
  [SMALL_STATE(273)] = 4809,
  [SMALL_STATE(274)] = 4816,
  [SMALL_STATE(275)] = 4823,
  [SMALL_STATE(276)] = 4830,
  [SMALL_STATE(277)] = 4837,
  [SMALL_STATE(278)] = 4844,
  [SMALL_STATE(279)] = 4851,
  [SMALL_STATE(280)] = 4858,
  [SMALL_STATE(281)] = 4865,
  [SMALL_STATE(282)] = 4872,
  [SMALL_STATE(283)] = 4879,
  [SMALL_STATE(284)] = 4886,
  [SMALL_STATE(285)] = 4893,
  [SMALL_STATE(286)] = 4900,
  [SMALL_STATE(287)] = 4907,
  [SMALL_STATE(288)] = 4914,
  [SMALL_STATE(289)] = 4921,
  [SMALL_STATE(290)] = 4928,
  [SMALL_STATE(291)] = 4935,
  [SMALL_STATE(292)] = 4942,
  [SMALL_STATE(293)] = 4949,
  [SMALL_STATE(294)] = 4956,
  [SMALL_STATE(295)] = 4963,
  [SMALL_STATE(296)] = 4970,
  [SMALL_STATE(297)] = 4977,
  [SMALL_STATE(298)] = 4984,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(8),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(164),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(223),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(196),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(195),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(29),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(38),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(233),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(264),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(216),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(58),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(147),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 9, .production_id = 6),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 9, .production_id = 6),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_statement, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, .production_id = 6),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6, .production_id = 6),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reserved, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field, 10, .production_id = 8),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field, 10, .production_id = 8),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 10, .production_id = 7),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 10, .production_id = 7),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof, 5, .production_id = 5),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof, 5, .production_id = 5),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(39),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(163),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(223),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(216),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(147),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 8, .production_id = 5),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 8, .production_id = 5),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 5),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7, .production_id = 7),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 7, .production_id = 7),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof, 4, .production_id = 5),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof, 4, .production_id = 5),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field, 13, .production_id = 8),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field, 13, .production_id = 8),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_field, 4, .production_id = 5),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_field, 4, .production_id = 5),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_number, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_number, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_field, 7, .production_id = 5),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_field, 7, .production_id = 5),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(194),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(167),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(197),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(199),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(200),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__option_name_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__option_name_repeat1, 2), SHIFT_REPEAT(248),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 3, .production_id = 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, .production_id = 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 5),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(54),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(167),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(203),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 3),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(124),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(166),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(236),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2), SHIFT_REPEAT(54),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2), SHIFT_REPEAT(167),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_lit, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_lit, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 9, .production_id = 4),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 9, .production_id = 4),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 6),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 14, .production_id = 12),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 13, .production_id = 11),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 13, .production_id = 10),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 13, .production_id = 12),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 12, .production_id = 9),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 12, .production_id = 11),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 3),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 12, .production_id = 10),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 4, .production_id = 4),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 4, .production_id = 4),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 12, .production_id = 12),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 11, .production_id = 9),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 11, .production_id = 11),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 11, .production_id = 10),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(142),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 10, .production_id = 9),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(144),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 1),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 8, .production_id = 4),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 8, .production_id = 4),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 4),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 5),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 7, .production_id = 4),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 7, .production_id = 4),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 5, .production_id = 4),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 5, .production_id = 4),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2), SHIFT_REPEAT(154),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_names, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_names, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 2), SHIFT_REPEAT(36),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 2),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 2), SHIFT_REPEAT(43),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 2),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_names_repeat1, 2),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_names_repeat1, 2), SHIFT_REPEAT(232),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2), SHIFT_REPEAT(112),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 3),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 4),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_options, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_options, 1),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_options_repeat1, 2), SHIFT_REPEAT(150),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_options_repeat1, 2),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_value_option, 3),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 7),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_or_enum_type_repeat1, 2), SHIFT_REPEAT(261),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_option, 3),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_name, 1),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_name, 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_name, 1),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_name, 1),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_type, 1),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [771] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_or_enum_type_repeat1, 2),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_proto(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
