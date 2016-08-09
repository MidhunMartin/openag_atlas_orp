openag\_atlas\_orp
==================

This repository contains an OpenAg firmware module for reading from the [Atlas
Scientific EZO ORP
Circuit](http://www.atlas-scientific.com/product_pages/circuits/ezo_orp.html).
The module defines 1 output, "water\_oxidation\_reduction\_potential" on which
water ORP readings are sent a a rate of no more than 0.5 Hz. The module will
enter an ERROR state whenever it fails to read form a sensor and will have a
state of OK otherwise.
