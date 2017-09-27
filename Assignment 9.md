{\rtf1\ansi\ansicpg1252\cocoartf1504\cocoasubrtf830
{\fonttbl\f0\froman\fcharset0 TimesNewRomanPSMT;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\margl1440\margr1440\vieww16600\viewh18120\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 1. Prove by induction that
\b  \ul 1 + 5 + 9 + \'85 + (4n - 3) = n(2n - 1)
\b0 \ulnone .\ul \

\b \ulnone BASE CASE:
\b0  \
1 = 1(2(1) - 1)\
1 = 1(2 - 1)\
1 = 1(1)\
1 = 1\
\

\b INDUCTIVE HYPOTHESIS:\

\b0 [1 + 5 + 9 + \'85 + (4k - 3)] + (4(k + 1) - 3) = k + 1(2(k+1) - 1)\
[k(2k - 1)] + [4(k+1) - 3] = (k+1)(2k+1)\
[2k^2 - k] + [4k + 1] = [2k^2 + k + 2k + 1]\
[2k^2 + 3k + 1] = [2k^2 + 3k + 1]\
\
2. Prove that any positive integer number n, n^3 + 2n is divisible by 3.\

\b BASE CASE:\

\b0 1^3 + 2(1) = 3\
1 + 2 = 3\
3 = 3\
\

\b INDUCTIVE HYPOTHESIS:
\b0 \
\ul n^3 = 3m - 2n\ulnone \
(n + 1)^3 + 2(n+1) = 3m\
[n^2 + 2n + 1][n + 1] + (2n + 2) = 3m\
n^3 + n^2 + 2n^2 + 2n + n + 1 + (2n + 2) = 3m\
n^3 + 3n^2 + 5n + 3 = 3m\
(3m - 2n) + 3n^2 + 5n + 3 = 3m\
3m + 3n^2 + 3n + 3 = 3m\
3(m + n^2 + n + 1) \
\ul p = (m + n^2 + n + 1)\ulnone \
3p\
\
3. Prove that for n >= 1, 9^n - 1 is divisible by 8 for all non-negative integers.\

\b INDUCTIVE CASE:
\b0 \
9^n - 1 = 8(m+1)\
9^(n +1) - 1 = 8(m+1)\
\ul 9^(n+1) = 8m + 9\ulnone \
8m + 9 = 8m + 9\
8m + 9 = 8m + 9 if n>= 1}