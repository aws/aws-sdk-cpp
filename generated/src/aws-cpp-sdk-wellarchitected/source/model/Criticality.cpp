/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wellarchitected/model/Criticality.h>

using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {
namespace CriticalityMapper {

static const int MISSION_CRITICAL_HASH = HashingUtils::HashString("MISSION_CRITICAL");
static const int BUSINESS_CRITICAL_HASH = HashingUtils::HashString("BUSINESS_CRITICAL");
static const int NON_CRITICAL_HASH = HashingUtils::HashString("NON_CRITICAL");
static const int TEST_DEVELOPMENT_HASH = HashingUtils::HashString("TEST_DEVELOPMENT");

Criticality GetCriticalityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MISSION_CRITICAL_HASH) {
    return Criticality::MISSION_CRITICAL;
  } else if (hashCode == BUSINESS_CRITICAL_HASH) {
    return Criticality::BUSINESS_CRITICAL;
  } else if (hashCode == NON_CRITICAL_HASH) {
    return Criticality::NON_CRITICAL;
  } else if (hashCode == TEST_DEVELOPMENT_HASH) {
    return Criticality::TEST_DEVELOPMENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Criticality>(hashCode);
  }

  return Criticality::NOT_SET;
}

Aws::String GetNameForCriticality(Criticality enumValue) {
  switch (enumValue) {
    case Criticality::NOT_SET:
      return {};
    case Criticality::MISSION_CRITICAL:
      return "MISSION_CRITICAL";
    case Criticality::BUSINESS_CRITICAL:
      return "BUSINESS_CRITICAL";
    case Criticality::NON_CRITICAL:
      return "NON_CRITICAL";
    case Criticality::TEST_DEVELOPMENT:
      return "TEST_DEVELOPMENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CriticalityMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
