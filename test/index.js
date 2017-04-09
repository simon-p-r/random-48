'use strict';

const Code = require('code');
const Lab = require('lab');

const Native = require('../lib');


// Set-up lab
const lab = exports.lab = Lab.script();
const describe = lab.describe;
const it = lab.it;
const expect = Code.expect;

describe('rand', () => {


    it('should generate a random number', (done) => {

        const result = Native.random();
        expect(result).to.be.a.number();
        expect(result < Number.MAX_SAFE_INTEGER).to.be.true();
        done();

    });

    it('should generate 100 random number', (done) => {

        for (let i = 0; i < 100; ++i) {
            const result = Native.random();
            expect(result).to.be.a.number();
            expect(result < Number.MAX_SAFE_INTEGER).to.be.true();
        }

        done();

    });

});
