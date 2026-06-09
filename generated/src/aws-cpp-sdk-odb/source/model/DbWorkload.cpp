/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/DbWorkload.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace DbWorkloadMapper {

static const int OLTP_HASH = HashingUtils::HashString("OLTP");
static const int AJD_HASH = HashingUtils::HashString("AJD");
static const int APEX_HASH = HashingUtils::HashString("APEX");
static const int LH_HASH = HashingUtils::HashString("LH");

DbWorkload GetDbWorkloadForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OLTP_HASH) {
    return DbWorkload::OLTP;
  } else if (hashCode == AJD_HASH) {
    return DbWorkload::AJD;
  } else if (hashCode == APEX_HASH) {
    return DbWorkload::APEX;
  } else if (hashCode == LH_HASH) {
    return DbWorkload::LH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DbWorkload>(hashCode);
  }

  return DbWorkload::NOT_SET;
}

Aws::String GetNameForDbWorkload(DbWorkload enumValue) {
  switch (enumValue) {
    case DbWorkload::NOT_SET:
      return {};
    case DbWorkload::OLTP:
      return "OLTP";
    case DbWorkload::AJD:
      return "AJD";
    case DbWorkload::APEX:
      return "APEX";
    case DbWorkload::LH:
      return "LH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DbWorkloadMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
