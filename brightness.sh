#!/bin/sh
brightness=$(xbacklight -get)
printf " %s %s \\n" "$brightness"

