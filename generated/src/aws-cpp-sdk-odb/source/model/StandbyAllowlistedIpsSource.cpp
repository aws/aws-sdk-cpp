/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/StandbyAllowlistedIpsSource.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace StandbyAllowlistedIpsSourceMapper {

static const int PRIMARY_HASH = HashingUtils::HashString("PRIMARY");
static const int SEPARATE_HASH = HashingUtils::HashString("SEPARATE");
static const int NOT_APPLICABLE_HASH = HashingUtils::HashString("NOT_APPLICABLE");

StandbyAllowlistedIpsSource GetStandbyAllowlistedIpsSourceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PRIMARY_HASH) {
    return StandbyAllowlistedIpsSource::PRIMARY;
  } else if (hashCode == SEPARATE_HASH) {
    return StandbyAllowlistedIpsSource::SEPARATE;
  } else if (hashCode == NOT_APPLICABLE_HASH) {
    return StandbyAllowlistedIpsSource::NOT_APPLICABLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StandbyAllowlistedIpsSource>(hashCode);
  }

  return StandbyAllowlistedIpsSource::NOT_SET;
}

Aws::String GetNameForStandbyAllowlistedIpsSource(StandbyAllowlistedIpsSource enumValue) {
  switch (enumValue) {
    case StandbyAllowlistedIpsSource::NOT_SET:
      return {};
    case StandbyAllowlistedIpsSource::PRIMARY:
      return "PRIMARY";
    case StandbyAllowlistedIpsSource::SEPARATE:
      return "SEPARATE";
    case StandbyAllowlistedIpsSource::NOT_APPLICABLE:
      return "NOT_APPLICABLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StandbyAllowlistedIpsSourceMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
