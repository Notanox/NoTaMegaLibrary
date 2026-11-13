# NoTaMegaLibrary

**A reusable utility library for Geometry Dash Geode mods.**

NoTaMegaLibrary (NML) is a library designed to make developing Geometry Dash mods with Geode easier by providing reusable functions and utilities.

The goal is to simplify common tasks and provide developers with convenient tools they can use across their own projects.

## Features

### UI

- `NML::UI::showPopup()` — Displays a simple popup with a title, message, and OK button.

More utilities and features will be added as development continues.

## Requirements

- Geometry Dash
- [Geode](https://geode-sdk.org/)
- Geode SDK 5.11.2 or compatible

## Using NoTaMegaLibrary

To use NML in your own Geode mod, add it as a dependency in your `mod.json`:


"dependencies": {
    "notameganox.notamegalibrary": "*"
}


Include the required NML header in your source file:


#include <notameganox.notamegalibrary/include/NML/UI.hpp>


### Example: Showing a popup


#include <notameganox.notamegalibrary/include/NML/UI.hpp>

$on_game(Loaded) {
    NML::UI::showPopup(
        "Hello!",
        "This popup was created using NoTaMegaLibrary!"
    );
}
S

## Development Status

NoTaMegaLibrary is currently in early development.

Features, functions, and APIs may change between versions.

## Repository

**GitHub:** [https://github.com/Notanox/NoTaMegaLibrary](https://github.com/Notanox/NoTaMegaLibrary)

## Developer

Created and maintained by **NoTaMegaNox**.
