# UMC-Downloader
A simple plugin that loads and precached files and directories based on UMC groups and map names.

### Setting up
In order to set up this plugin on your server follow these steps:
1. Download [the plugin](https://github.com/Pheubel/UMC-Downloader/releases/tag/1.0.0) and put it in your plugins folder.
2. Set up your `umc_mapcycle.txt` file with the groups you want.
3. Create a file named `umc_downloader.json` in your game's root folder.
4. Set up your `umc_downloader.json` file. Bellow is an example

```json
{
    "always": {
        "sounds": [
            "sound/exampleSound.mp3",
        ],
        "models": [
            "models/exampleModels"
        ]
    },
    "groups": {
        "example group": {
            "files": [
                "exampleFile.txt"
            ]
        }
    },
    "maps": {
        "ctf_2fort": {
            "generic": [
                "genericCachedFile.txt"
            ],
            "decals": [
                "exampleDecals.vtf"
            ]
        }
    }
}
```
The structure works as follows:  
In the top level you have 3 different categories: `always`, `groups` and `maps`.  
  
`always` - Files and directories assigned here will be put in the downloads table no matter which map is selected.  
`groups` - divides files and folders over UMC groups, for example "Dodgeball" or "prophunt", each would require their own set of files.  
`maps` - With this category you can specify files to be put in the downloads table on a map by map basis.  
  
There are 5 different categories your files can belong to:
1. `files`
2. `generic`
3. `decals`
4. `sounds`
5. `models`

When files are listed under `files` they will not be precached.

# Contributing
To contribute code to this project I recommend using [Visual Studio Code](https://code.visualstudio.com/) with [Sarrus's SourcePawn extension](https://marketplace.visualstudio.com/items?itemName=Sarrus.sourcepawn-vscode&ssr=false#overview).
### Dependencies:
* [sm-json](https://github.com/clugg/sm-json)
* [Updater](https://forums.alliedmods.net/showthread.php?t=169095) (optional)

### Style guide
* functions: PascalCase
* variables: camelCase
* macros: ALL_CAPS
* enums: ALL_CAPS prefixed by `UMCD_`

Code scopes should be started on the same line opening them.  
Only declare a single buffer per line.  
Preprocessor conditions should not have any leading whitespace.

Pull requests should describe the issue they are trying to solve or the feature they are implementing by either writing a detailed description or referencing to a pre existing issue.

### Issues
If you encounter any bugs or would like to request features, you can report them in the [Issues tab](https://github.com/Pheubel/UMC-Downloader/issues). Please prefix them by \[bug\] and \[feature request\] respectively.
