# tree-sitter-proto

[tree-sitter](https://github.com/tree-sitter/tree-sitter) grammar for protocol buffer files (proto3 only).

this repo is a fork of [mitchellh/tree-sitter-proto](https://github.com/mitchellh/tree-sitter-proto), intend be integrated with [nnnewb/vscode-protobuf](https://github.com/nnnewb/vscode-protobuf).

## Note

WASM with [web-tree-sitter(0.19.4)](https://www.npmjs.com/package/web-tree-sitter) requires [emsdk(v2.0.24)](https://github.com/emscripten-core/emsdk). version mismatch cause `Parser.Language.load(...)` raise `Assertion failed: undefined`.
