# random-48

[![Windows Build Status](https://img.shields.io/appveyor/ci/simon-p-r/random-48/master.svg?label=windows&style=flat-square&maxAge=2592000)](https://ci.appveyor.com/project/simon-p-r/random-48)
[![Current Version](https://img.shields.io/npm/v/random-48.svg?maxAge=1000)](https://www.npmjs.org/package/random-48)
[![dependency Status](https://img.shields.io/david/simon-p-r/random-48.svg?maxAge=1000)](https://david-dm.org/simon-p-r/random-48)
[![devDependency Status](https://img.shields.io/david/dev/simon-p-r/random-48.svg?maxAge=1000)](https://david-dm.org/simon-p-r/random-48)

*random-48* is a Node.js binding for Windows CryptGenRandom function

## Installing
You can install *random-48* as a dependency of your project using NPM like
so, provided you have met the dependencies listed below.
```
> npm install --save random-48
```

### Dependencies
* Node.JS >= 4.0.0
* CMake >= 3.2
* A C++ compatible compiler
  - [Visual Studio 2015](https://www.visualstudio.com/products/vs-2015-product-editions) 
    OR [Visual C++ Build Tools](http://landinghub.visualstudio.com/visual-cpp-build-tools)


## API
### random(void)


```javascript
const Generate = require('random-48');
const random = Generate.random();
// random now contains a random 48 bit integer

```

## Todo
* Make cross-platform
* Allow user options?
* Improve tests


## License
*rand* is licensed under
[BSD-3-Clause](https://www.w3.org/Consortium/Legal/2008/03-bsd-license.html).