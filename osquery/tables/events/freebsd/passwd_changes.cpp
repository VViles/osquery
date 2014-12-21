/*
 *  Copyright (c) 2014, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant 
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
 
#include <osquery/core.h>
#include <osquery/database.h>
#include "osquery/events/freebsd/fsevents.h"

namespace osquery {
namespace tables {

class PasswdChangesEventSubscriber {
 public:
  QueryData genTable() {
    QueryData results;

    throw std::domain_error("Table not implemented for FreeBSD");

    return results;
  }
};
}
}
