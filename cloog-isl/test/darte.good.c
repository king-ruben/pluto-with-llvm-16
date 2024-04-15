/* Generated from ../../../git/cloog/test/darte.cloog by CLooG 0.14.0-72-gefe2fc2 gmp bits in 0.27s. */
extern void hash(int);

/* Useful macros. */
#define floord(n,d) (((n)<0) ? -((-(n)+(d)-1)/(d)) : (n)/(d))
#define ceild(n,d)  (((n)<0) ? -((-(n))/(d)) : ((n)+(d)-1)/(d))
#define max(x,y)    ((x) > (y) ? (x) : (y))
#define min(x,y)    ((x) < (y) ? (x) : (y))

#define S1(i,j,k) { hash(1); hash(i); hash(j); hash(k); }
#define S2(i,j,k) { hash(2); hash(i); hash(j); hash(k); }

void test(int n)
{
  /* Scattering iterators. */
  int t1, t2, t3;
  /* Original iterators. */
  int i, j, k;
  if (n >= 1) {
    t1 = -n+1 ;
    t2 = n+1 ;
    for (t3=n+3;t3<=3*n+1;t3++) {
      if ((t3+n+1)%2 == 0) {
        k = (t3-n-1)/2 ;
        S1(1,n,(t3-n-1)/2) ;
      }
    }
  }
  if ((n >= 2) && (n <= 2)) {
    t1 = -n+2 ;
    for (t2=-n+4;t2<=3*n-2;t2++) {
      for (t3=t2+2;t3<=t2+2*n;t3++) {
        if ((t2+n)%2 == 0) {
          i = (t2-n+2)/2 ;
          j = (t2+n-2)/2 ;
          if ((t3+n)%2 == 0) {
            k = (-t2+t3)/2 ;
            S1((t2-n+2)/2,(t2+n-2)/2,(-t2+t3)/2) ;
          }
        }
      }
    }
    t2 = n+3 ;
    for (t3=1;t3<=n;t3++) {
      S2(1,n,t3) ;
    }
  }
  if (n >= 3) {
    t1 = -n+2 ;
    for (t2=n;t2<=n+2;t2++) {
      for (t3=t2+2;t3<=t2+2*n;t3++) {
        if ((t2+n)%2 == 0) {
          i = (t2-n+2)/2 ;
          j = (t2+n-2)/2 ;
          if ((t3+n)%2 == 0) {
            k = (-t2+t3)/2 ;
            S1((t2-n+2)/2,(t2+n-2)/2,(-t2+t3)/2) ;
          }
        }
      }
    }
    t2 = n+3 ;
    for (t3=1;t3<=n;t3++) {
      S2(1,n,t3) ;
    }
  }
  for (t1=ceild(-2*n+5,2);t1<=min(-n+6,-1);t1++) {
    for (t2=-t1+2;t2<=-t1+4;t2++) {
      for (t3=t2+2;t3<=t2+2*n;t3++) {
        if ((t1+t2)%2 == 0) {
          i = (t1+t2)/2 ;
          j = (-t1+t2)/2 ;
          if ((t1+t3)%2 == 0) {
            k = (-t2+t3)/2 ;
            S1((t1+t2)/2,(-t1+t2)/2,(-t2+t3)/2) ;
          }
        }
      }
    }
    for (t2=-t1+5;t2<=t1+2*n;t2++) {
      for (t3=1;t3<=n;t3++) {
        if ((t1+t2+1)%2 == 0) {
          i = (t1+t2-3)/2 ;
          j = (-t1+t2-1)/2 ;
          S2((t1+t2-3)/2,(-t1+t2-1)/2,t3) ;
        }
      }
      for (t3=t2+2;t3<=t2+2*n;t3++) {
        if ((t1+t2)%2 == 0) {
          i = (t1+t2)/2 ;
          j = (-t1+t2)/2 ;
          if ((t1+t3)%2 == 0) {
            k = (-t2+t3)/2 ;
            S1((t1+t2)/2,(-t1+t2)/2,(-t2+t3)/2) ;
          }
        }
      }
    }
    t2 = t1+2*n+1 ;
    for (t3=1;t3<=n;t3++) {
      i = t1+n-1 ;
      S2(t1+n-1,n,t3) ;
    }
  }
  if (n == 2) {
    for (t3=5;t3<=7;t3++) {
      if ((t3+1)%2 == 0) {
        k = (t3-3)/2 ;
        S1(2,1,(t3-3)/2) ;
      }
    }
    for (t2=4;t2<=6;t2++) {
      for (t3=1;t3<=2;t3++) {
        if (t2%2 == 0) {
          i = (t2-2)/2 ;
          j = (t2-2)/2 ;
          S2((t2-2)/2,(t2-2)/2,t3) ;
        }
      }
    }
  }
  for (t1=-n+7;t1<=-1;t1++) {
    for (t2=-t1+2;t2<=-t1+4;t2++) {
      for (t3=t2+2;t3<=t2+2*n;t3++) {
        if ((t1+t2)%2 == 0) {
          i = (t1+t2)/2 ;
          j = (-t1+t2)/2 ;
          if ((t1+t3)%2 == 0) {
            k = (-t2+t3)/2 ;
            S1((t1+t2)/2,(-t1+t2)/2,(-t2+t3)/2) ;
          }
        }
      }
    }
    for (t2=-t1+5;t2<=n-2;t2++) {
      for (t3=1;t3<=t2+1;t3++) {
        if ((t1+t2+1)%2 == 0) {
          i = (t1+t2-3)/2 ;
          j = (-t1+t2-1)/2 ;
          S2((t1+t2-3)/2,(-t1+t2-1)/2,t3) ;
        }
      }
      for (t3=t2+2;t3<=n;t3++) {
        if ((t1+t2+1)%2 == 0) {
          i = (t1+t2-3)/2 ;
          j = (-t1+t2-1)/2 ;
          S2((t1+t2-3)/2,(-t1+t2-1)/2,t3) ;
        }
        if ((t1+t2)%2 == 0) {
          i = (t1+t2)/2 ;
          j = (-t1+t2)/2 ;
          if ((t1+t3)%2 == 0) {
            k = (-t2+t3)/2 ;
            S1((t1+t2)/2,(-t1+t2)/2,(-t2+t3)/2) ;
          }
        }
      }
      for (t3=n+1;t3<=t2+2*n;t3++) {
        if ((t1+t2)%2 == 0) {
          i = (t1+t2)/2 ;
          j = (-t1+t2)/2 ;
          if ((t1+t3)%2 == 0) {
            k = (-t2+t3)/2 ;
            S1((t1+t2)/2,(-t1+t2)/2,(-t2+t3)/2) ;
          }
        }
      }
    }
    for (t2=n-1;t2<=t1+2*n;t2++) {
      for (t3=1;t3<=n;t3++) {
        if ((t1+t2+1)%2 == 0) {
          i = (t1+t2-3)/2 ;
          j = (-t1+t2-1)/2 ;
          S2((t1+t2-3)/2,(-t1+t2-1)/2,t3) ;
        }
      }
      for (t3=t2+2;t3<=t2+2*n;t3++) {
        if ((t1+t2)%2 == 0) {
          i = (t1+t2)/2 ;
          j = (-t1+t2)/2 ;
          if ((t1+t3)%2 == 0) {
            k = (-t2+t3)/2 ;
            S1((t1+t2)/2,(-t1+t2)/2,(-t2+t3)/2) ;
          }
        }
      }
    }
    t2 = t1+2*n+1 ;
    for (t3=1;t3<=n;t3++) {
      i = t1+n-1 ;
      S2(t1+n-1,n,t3) ;
    }
  }
  if (n >= 3) {
    for (t1=0;t1<=min(1,-n+6);t1++) {
      for (t2=t1+2;t2<=-t1+4;t2++) {
        for (t3=t2+2;t3<=t2+2*n;t3++) {
          if ((t1+t2)%2 == 0) {
            i = (t1+t2)/2 ;
            j = (-t1+t2)/2 ;
            if ((t1+t3)%2 == 0) {
              k = (-t2+t3)/2 ;
              S1((t1+t2)/2,(-t1+t2)/2,(-t2+t3)/2) ;
            }
          }
        }
      }
      for (t2=-t1+5;t2<=-t1+2*n;t2++) {
        for (t3=1;t3<=n;t3++) {
          if ((t1+t2+1)%2 == 0) {
            i = (t1+t2-3)/2 ;
            j = (-t1+t2-1)/2 ;
            S2((t1+t2-3)/2,(-t1+t2-1)/2,t3) ;
          }
        }
        for (t3=t2+2;t3<=t2+2*n;t3++) {
          if ((t1+t2)%2 == 0) {
            i = (t1+t2)/2 ;
            j = (-t1+t2)/2 ;
            if ((t1+t3)%2 == 0) {
              k = (-t2+t3)/2 ;
              S1((t1+t2)/2,(-t1+t2)/2,(-t2+t3)/2) ;
            }
          }
        }
      }
      for (t2=-t1+2*n+1;t2<=t1+2*n+1;t2++) {
        for (t3=1;t3<=n;t3++) {
          if ((t1+t2+1)%2 == 0) {
            i = (t1+t2-3)/2 ;
            j = (-t1+t2-1)/2 ;
            S2((t1+t2-3)/2,(-t1+t2-1)/2,t3) ;
          }
        }
      }
    }
  }
  for (t1=max(-n+7,0);t1<=1;t1++) {
    for (t2=t1+2;t2<=-t1+4;t2++) {
      for (t3=t2+2;t3<=t2+2*n;t3++) {
        if ((t1+t2)%2 == 0) {
          i = (t1+t2)/2 ;
          j = (-t1+t2)/2 ;
          if ((t1+t3)%2 == 0) {
            k = (-t2+t3)/2 ;
            S1((t1+t2)/2,(-t1+t2)/2,(-t2+t3)/2) ;
          }
        }
      }
    }
    for (t2=-t1+5;t2<=n-2;t2++) {
      for (t3=1;t3<=t2+1;t3++) {
        if ((t1+t2+1)%2 == 0) {
          i = (t1+t2-3)/2 ;
          j = (-t1+t2-1)/2 ;
          S2((t1+t2-3)/2,(-t1+t2-1)/2,t3) ;
        }
      }
      for (t3=t2+2;t3<=n;t3++) {
        if ((t1+t2+1)%2 == 0) {
          i = (t1+t2-3)/2 ;
          j = (-t1+t2-1)/2 ;
          S2((t1+t2-3)/2,(-t1+t2-1)/2,t3) ;
        }
        if ((t1+t2)%2 == 0) {
          i = (t1+t2)/2 ;
          j = (-t1+t2)/2 ;
          if ((t1+t3)%2 == 0) {
            k = (-t2+t3)/2 ;
            S1((t1+t2)/2,(-t1+t2)/2,(-t2+t3)/2) ;
          }
        }
      }
      for (t3=n+1;t3<=t2+2*n;t3++) {
        if ((t1+t2)%2 == 0) {
          i = (t1+t2)/2 ;
          j = (-t1+t2)/2 ;
          if ((t1+t3)%2 == 0) {
            k = (-t2+t3)/2 ;
            S1((t1+t2)/2,(-t1+t2)/2,(-t2+t3)/2) ;
          }
        }
      }
    }
    for (t2=n-1;t2<=-t1+2*n;t2++) {
      for (t3=1;t3<=n;t3++) {
        if ((t1+t2+1)%2 == 0) {
          i = (t1+t2-3)/2 ;
          j = (-t1+t2-1)/2 ;
          S2((t1+t2-3)/2,(-t1+t2-1)/2,t3) ;
        }
      }
      for (t3=t2+2;t3<=t2+2*n;t3++) {
        if ((t1+t2)%2 == 0) {
          i = (t1+t2)/2 ;
          j = (-t1+t2)/2 ;
          if ((t1+t3)%2 == 0) {
            k = (-t2+t3)/2 ;
            S1((t1+t2)/2,(-t1+t2)/2,(-t2+t3)/2) ;
          }
        }
      }
    }
    for (t2=-t1+2*n+1;t2<=t1+2*n+1;t2++) {
      for (t3=1;t3<=n;t3++) {
        if ((t1+t2+1)%2 == 0) {
          i = (t1+t2-3)/2 ;
          j = (-t1+t2-1)/2 ;
          S2((t1+t2-3)/2,(-t1+t2-1)/2,t3) ;
        }
      }
    }
  }
  for (t1=2;t1<=n-5;t1++) {
    t2 = t1+2 ;
    for (t3=t1+4;t3<=t1+2*n+2;t3++) {
      i = t1+1 ;
      if ((t1+t3)%2 == 0) {
        k = (-t1+t3-2)/2 ;
        S1(t1+1,1,(-t1+t3-2)/2) ;
      }
    }
    for (t2=t1+3;t2<=n-2;t2++) {
      for (t3=1;t3<=t2+1;t3++) {
        if ((t1+t2+1)%2 == 0) {
          i = (t1+t2-3)/2 ;
          j = (-t1+t2-1)/2 ;
          S2((t1+t2-3)/2,(-t1+t2-1)/2,t3) ;
        }
      }
      for (t3=t2+2;t3<=n;t3++) {
        if ((t1+t2+1)%2 == 0) {
          i = (t1+t2-3)/2 ;
          j = (-t1+t2-1)/2 ;
          S2((t1+t2-3)/2,(-t1+t2-1)/2,t3) ;
        }
        if ((t1+t2)%2 == 0) {
          i = (t1+t2)/2 ;
          j = (-t1+t2)/2 ;
          if ((t1+t3)%2 == 0) {
            k = (-t2+t3)/2 ;
            S1((t1+t2)/2,(-t1+t2)/2,(-t2+t3)/2) ;
          }
        }
      }
      for (t3=n+1;t3<=t2+2*n;t3++) {
        if ((t1+t2)%2 == 0) {
          i = (t1+t2)/2 ;
          j = (-t1+t2)/2 ;
          if ((t1+t3)%2 == 0) {
            k = (-t2+t3)/2 ;
            S1((t1+t2)/2,(-t1+t2)/2,(-t2+t3)/2) ;
          }
        }
      }
    }
    for (t2=n-1;t2<=-t1+2*n;t2++) {
      for (t3=1;t3<=n;t3++) {
        if ((t1+t2+1)%2 == 0) {
          i = (t1+t2-3)/2 ;
          j = (-t1+t2-1)/2 ;
          S2((t1+t2-3)/2,(-t1+t2-1)/2,t3) ;
        }
      }
      for (t3=t2+2;t3<=t2+2*n;t3++) {
        if ((t1+t2)%2 == 0) {
          i = (t1+t2)/2 ;
          j = (-t1+t2)/2 ;
          if ((t1+t3)%2 == 0) {
            k = (-t2+t3)/2 ;
            S1((t1+t2)/2,(-t1+t2)/2,(-t2+t3)/2) ;
          }
        }
      }
    }
    for (t2=-t1+2*n+1;t2<=-t1+2*n+3;t2++) {
      for (t3=1;t3<=n;t3++) {
        if ((t1+t2+1)%2 == 0) {
          i = (t1+t2-3)/2 ;
          j = (-t1+t2-1)/2 ;
          S2((t1+t2-3)/2,(-t1+t2-1)/2,t3) ;
        }
      }
    }
  }
  for (t1=max(2,n-4);t1<=floord(2*n-3,2);t1++) {
    t2 = t1+2 ;
    for (t3=t1+4;t3<=t1+2*n+2;t3++) {
      i = t1+1 ;
      if ((t1+t3)%2 == 0) {
        k = (-t1+t3-2)/2 ;
        S1(t1+1,1,(-t1+t3-2)/2) ;
      }
    }
    for (t2=t1+3;t2<=-t1+2*n;t2++) {
      for (t3=1;t3<=n;t3++) {
        if ((t1+t2+1)%2 == 0) {
          i = (t1+t2-3)/2 ;
          j = (-t1+t2-1)/2 ;
          S2((t1+t2-3)/2,(-t1+t2-1)/2,t3) ;
        }
      }
      for (t3=t2+2;t3<=t2+2*n;t3++) {
        if ((t1+t2)%2 == 0) {
          i = (t1+t2)/2 ;
          j = (-t1+t2)/2 ;
          if ((t1+t3)%2 == 0) {
            k = (-t2+t3)/2 ;
            S1((t1+t2)/2,(-t1+t2)/2,(-t2+t3)/2) ;
          }
        }
      }
    }
    for (t2=-t1+2*n+1;t2<=-t1+2*n+3;t2++) {
      for (t3=1;t3<=n;t3++) {
        if ((t1+t2+1)%2 == 0) {
          i = (t1+t2-3)/2 ;
          j = (-t1+t2-1)/2 ;
          S2((t1+t2-3)/2,(-t1+t2-1)/2,t3) ;
        }
      }
    }
  }
  if (n >= 3) {
    t1 = n-1 ;
    t2 = n+1 ;
    for (t3=n+3;t3<=3*n+1;t3++) {
      if ((t3+n+1)%2 == 0) {
        k = (t3-n-1)/2 ;
        S1(n,1,(t3-n-1)/2) ;
      }
    }
    for (t2=n+2;t2<=n+4;t2++) {
      for (t3=1;t3<=n;t3++) {
        if ((t2+n)%2 == 0) {
          i = (t2+n-4)/2 ;
          j = (t2-n)/2 ;
          S2((t2+n-4)/2,(t2-n)/2,t3) ;
        }
      }
    }
  }
  if (n >= 1) {
    t2 = n+3 ;
    for (t3=1;t3<=n;t3++) {
      S2(n,1,t3) ;
    }
  }
}
