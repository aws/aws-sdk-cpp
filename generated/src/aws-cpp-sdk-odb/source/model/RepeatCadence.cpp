/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/RepeatCadence.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace RepeatCadenceMapper {

static const int ONE_TIME_HASH = HashingUtils::HashString("ONE_TIME");
static const int WEEKLY_HASH = HashingUtils::HashString("WEEKLY");
static const int MONTHLY_HASH = HashingUtils::HashString("MONTHLY");
static const int YEARLY_HASH = HashingUtils::HashString("YEARLY");

RepeatCadence GetRepeatCadenceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ONE_TIME_HASH) {
    return RepeatCadence::ONE_TIME;
  } else if (hashCode == WEEKLY_HASH) {
    return RepeatCadence::WEEKLY;
  } else if (hashCode == MONTHLY_HASH) {
    return RepeatCadence::MONTHLY;
  } else if (hashCode == YEARLY_HASH) {
    return RepeatCadence::YEARLY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RepeatCadence>(hashCode);
  }

  return RepeatCadence::NOT_SET;
}

Aws::String GetNameForRepeatCadence(RepeatCadence enumValue) {
  switch (enumValue) {
    case RepeatCadence::NOT_SET:
      return {};
    case RepeatCadence::ONE_TIME:
      return "ONE_TIME";
    case RepeatCadence::WEEKLY:
      return "WEEKLY";
    case RepeatCadence::MONTHLY:
      return "MONTHLY";
    case RepeatCadence::YEARLY:
      return "YEARLY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RepeatCadenceMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
