


    // !!! This file is generated using emlearn !!!

    #include <eml_trees.h>
    

EmlTreesNode clf_nodes[56] = {
  { 3, 1.6500000357627869, 1, 6 },
  { 3, 0.75, 2, 3 },
  { -1, 0, -1, -1 },
  { 2, 4.950000047683716, 4, 5 },
  { -1, 1, -1, -1 },
  { 3, 1.550000011920929, 6, 4 },
  { -1, 2, -1, -1 },
  { 0, 5.549999952316284, 8, 10 },
  { 2, 2.599999964237213, 2, 9 },
  { 0, 4.950000047683716, 6, 4 },
  { 3, 1.699999988079071, 11, 6 },
  { 3, 0.6000000014901161, 2, 12 },
  { 2, 4.950000047683716, 4, 13 },
  { 3, 1.550000011920929, 6, 4 },
  { 2, 2.599999964237213, 2, 15 },
  { 2, 4.799999952316284, 4, 16 },
  { 3, 1.699999988079071, 17, 6 },
  { 0, 6.150000095367432, 4, 18 },
  { 1, 3.049999952316284, 6, 4 },
  { 2, 2.699999988079071, 2, 20 },
  { 2, 4.799999952316284, 4, 6 },
  { 3, 0.7000000029802322, 2, 22 },
  { 3, 1.6500000357627869, 23, 6 },
  { 3, 1.449999988079071, 4, 24 },
  { 1, 3.049999952316284, 25, 4 },
  { 0, 6.25, 26, 6 },
  { 3, 1.550000011920929, 27, 4 },
  { 2, 4.75, 4, 6 },
  { 3, 1.6500000357627869, 29, 6 },
  { 3, 0.7000000029802322, 2, 30 },
  { 3, 1.449999988079071, 4, 31 },
  { 2, 4.8999998569488525, 4, 6 },
  { 2, 2.699999988079071, 2, 33 },
  { 2, 4.950000047683716, 34, 36 },
  { 2, 4.450000047683716, 4, 35 },
  { 0, 6.049999952316284, 6, 4 },
  { 0, 6.150000095367432, 37, 6 },
  { 2, 5.049999952316284, 6, 38 },
  { 1, 2.850000023841858, 4, 6 },
  { 2, 2.599999964237213, 2, 40 },
  { 2, 4.950000047683716, 41, 43 },
  { 2, 4.799999952316284, 4, 42 },
  { 0, 6.5, 6, 4 },
  { 3, 1.699999988079071, 44, 6 },
  { 1, 2.850000023841858, 45, 6 },
  { 1, 2.450000047683716, 6, 4 },
  { 2, 2.599999964237213, 2, 47 },
  { 0, 6.25, 48, 49 },
  { 3, 1.699999988079071, 4, 6 },
  { 3, 1.550000011920929, 4, 6 },
  { 3, 0.75, 2, 51 },
  { 3, 1.6500000357627869, 52, 6 },
  { 3, 1.449999988079071, 4, 53 },
  { 2, 4.75, 4, 54 },
  { 0, 6.150000095367432, 55, 6 },
  { 1, 2.450000047683716, 6, 4 } 
};

int32_t clf_tree_roots[10] = { 0, 7, 14, 19, 21, 28, 32, 39, 46, 50 };

EmlTrees clf = {
        56,
        clf_nodes,	  
        10,
        clf_tree_roots,
    };

static inline int32_t clf_tree_0(const float *features, int32_t features_length) {
          if (features[3] < 1.650000f) {
              if (features[3] < 0.750000f) {
                  return 0;
              } else {
                  if (features[2] < 4.950000f) {
                      return 1;
                  } else {
                      if (features[3] < 1.550000f) {
                          return 2;
                      } else {
                          return 1;
                      }
                  }
              }
          } else {
              return 2;
          }
        }
        

static inline int32_t clf_tree_1(const float *features, int32_t features_length) {
          if (features[0] < 5.550000f) {
              if (features[2] < 2.600000f) {
                  return 0;
              } else {
                  if (features[0] < 4.950000f) {
                      return 2;
                  } else {
                      return 1;
                  }
              }
          } else {
              if (features[3] < 1.700000f) {
                  if (features[3] < 0.600000f) {
                      return 0;
                  } else {
                      if (features[2] < 4.950000f) {
                          return 1;
                      } else {
                          if (features[3] < 1.550000f) {
                              return 2;
                          } else {
                              return 1;
                          }
                      }
                  }
              } else {
                  return 2;
              }
          }
        }
        

static inline int32_t clf_tree_2(const float *features, int32_t features_length) {
          if (features[2] < 2.600000f) {
              return 0;
          } else {
              if (features[2] < 4.800000f) {
                  return 1;
              } else {
                  if (features[3] < 1.700000f) {
                      if (features[0] < 6.150000f) {
                          return 1;
                      } else {
                          if (features[1] < 3.050000f) {
                              return 2;
                          } else {
                              return 1;
                          }
                      }
                  } else {
                      return 2;
                  }
              }
          }
        }
        

static inline int32_t clf_tree_3(const float *features, int32_t features_length) {
          if (features[2] < 2.700000f) {
              return 0;
          } else {
              if (features[2] < 4.800000f) {
                  return 1;
              } else {
                  return 2;
              }
          }
        }
        

static inline int32_t clf_tree_4(const float *features, int32_t features_length) {
          if (features[3] < 0.700000f) {
              return 0;
          } else {
              if (features[3] < 1.650000f) {
                  if (features[3] < 1.450000f) {
                      return 1;
                  } else {
                      if (features[1] < 3.050000f) {
                          if (features[0] < 6.250000f) {
                              if (features[3] < 1.550000f) {
                                  if (features[2] < 4.750000f) {
                                      return 1;
                                  } else {
                                      return 2;
                                  }
                              } else {
                                  return 1;
                              }
                          } else {
                              return 2;
                          }
                      } else {
                          return 1;
                      }
                  }
              } else {
                  return 2;
              }
          }
        }
        

static inline int32_t clf_tree_5(const float *features, int32_t features_length) {
          if (features[3] < 1.650000f) {
              if (features[3] < 0.700000f) {
                  return 0;
              } else {
                  if (features[3] < 1.450000f) {
                      return 1;
                  } else {
                      if (features[2] < 4.900000f) {
                          return 1;
                      } else {
                          return 2;
                      }
                  }
              }
          } else {
              return 2;
          }
        }
        

static inline int32_t clf_tree_6(const float *features, int32_t features_length) {
          if (features[2] < 2.700000f) {
              return 0;
          } else {
              if (features[2] < 4.950000f) {
                  if (features[2] < 4.450000f) {
                      return 1;
                  } else {
                      if (features[0] < 6.050000f) {
                          return 2;
                      } else {
                          return 1;
                      }
                  }
              } else {
                  if (features[0] < 6.150000f) {
                      if (features[2] < 5.050000f) {
                          return 2;
                      } else {
                          if (features[1] < 2.850000f) {
                              return 1;
                          } else {
                              return 2;
                          }
                      }
                  } else {
                      return 2;
                  }
              }
          }
        }
        

static inline int32_t clf_tree_7(const float *features, int32_t features_length) {
          if (features[2] < 2.600000f) {
              return 0;
          } else {
              if (features[2] < 4.950000f) {
                  if (features[2] < 4.800000f) {
                      return 1;
                  } else {
                      if (features[0] < 6.500000f) {
                          return 2;
                      } else {
                          return 1;
                      }
                  }
              } else {
                  if (features[3] < 1.700000f) {
                      if (features[1] < 2.850000f) {
                          if (features[1] < 2.450000f) {
                              return 2;
                          } else {
                              return 1;
                          }
                      } else {
                          return 2;
                      }
                  } else {
                      return 2;
                  }
              }
          }
        }
        

static inline int32_t clf_tree_8(const float *features, int32_t features_length) {
          if (features[2] < 2.600000f) {
              return 0;
          } else {
              if (features[0] < 6.250000f) {
                  if (features[3] < 1.700000f) {
                      return 1;
                  } else {
                      return 2;
                  }
              } else {
                  if (features[3] < 1.550000f) {
                      return 1;
                  } else {
                      return 2;
                  }
              }
          }
        }
        

static inline int32_t clf_tree_9(const float *features, int32_t features_length) {
          if (features[3] < 0.750000f) {
              return 0;
          } else {
              if (features[3] < 1.650000f) {
                  if (features[3] < 1.450000f) {
                      return 1;
                  } else {
                      if (features[2] < 4.750000f) {
                          return 1;
                      } else {
                          if (features[0] < 6.150000f) {
                              if (features[1] < 2.450000f) {
                                  return 2;
                              } else {
                                  return 1;
                              }
                          } else {
                              return 2;
                          }
                      }
                  }
              } else {
                  return 2;
              }
          }
        }
        

int32_t clf_predict(const float *features, int32_t features_length) {

        int32_t votes[3] = {0,};
        int32_t _class = -1;

        _class = clf_tree_0(features, features_length); votes[_class] += 1;
    _class = clf_tree_1(features, features_length); votes[_class] += 1;
    _class = clf_tree_2(features, features_length); votes[_class] += 1;
    _class = clf_tree_3(features, features_length); votes[_class] += 1;
    _class = clf_tree_4(features, features_length); votes[_class] += 1;
    _class = clf_tree_5(features, features_length); votes[_class] += 1;
    _class = clf_tree_6(features, features_length); votes[_class] += 1;
    _class = clf_tree_7(features, features_length); votes[_class] += 1;
    _class = clf_tree_8(features, features_length); votes[_class] += 1;
    _class = clf_tree_9(features, features_length); votes[_class] += 1;
    
        int32_t most_voted_class = -1;
        int32_t most_voted_votes = 0;
        for (int32_t i=0; i<3; i++) {

            if (votes[i] > most_voted_votes) {
                most_voted_class = i;
                most_voted_votes = votes[i];
            }
        }
        return most_voted_class;
    }
    