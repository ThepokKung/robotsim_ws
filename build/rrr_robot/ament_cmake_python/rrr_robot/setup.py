from setuptools import find_packages
from setuptools import setup

setup(
    name='rrr_robot',
    version='0.0.0',
    packages=find_packages(
        include=('rrr_robot', 'rrr_robot.*')),
)
