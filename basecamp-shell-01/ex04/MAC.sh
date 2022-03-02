#!/bin/sh

ifconfig | grep ether | sed 's/\s*ether\s*//'