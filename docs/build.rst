Workflow
=================================================

Dependencies
-------------

This example combines ``Doxygen`` and ``Sphinx`` with the help
of ``Breathe``. Please make sure that they are available on
your system.

``Sphinx`` and ``Breathe`` are written in Python, thus it is possible
to install them from ``PyPi``.

.. code-block:: console

    pip install -U sphinx
    pip install breathe


Moreover, the building and deploying of this documentation is based on ``CMake``,
it is also should be available before the execution of this example.

Building Documentation
-----------------------

1. Get the repository from Github

.. code-block:: console 

    git clone https://github.com/brunowu/doxygen_sphinx_example.git

2. Build the documentation with ``CMake``

.. code-block::  console
    
    cd doxygen_sphinx_example & mkdir build
    cd build
    cmake ..
    make Doxygen #build doxygen files into ./build/doxygen/
    make Sphinx  #build sphinx html into ./build/sphinx/html/

.. note::
    It is also possible to build Doxygen and Sphinx in one shot by
    the command ``make`` following the command ``cmake ..``.


Deploying Documentation on Github Pages
---------------------------------------

The upgrade of the modified ``sphinx`` HTML files into branch ``gh-pages``
of this repository can also be done by ``CMake``.

This operation should be done explicitly after building ``Doxygen`` and ``sphinx``.
Thus the workflow is:

.. code-block::  console

    make
    make Deploy

    

