#!/bin/sh
find . | wc -l | sed -e 's/ *//'
