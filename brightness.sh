#!/bin/sh
brightness=$(brightnessctl get)
printf " %s %s \\n" "$brightness"

