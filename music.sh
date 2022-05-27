#!/bin/bash
vol=$(pamixer --get-volume-human)
printf " %s %s \\n" "$vol"
