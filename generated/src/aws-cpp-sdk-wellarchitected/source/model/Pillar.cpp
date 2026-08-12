/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wellarchitected/model/Pillar.h>

using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {
namespace PillarMapper {

static const int COST_OPTIMIZATION_HASH = HashingUtils::HashString("COST_OPTIMIZATION");
static const int SECURITY_HASH = HashingUtils::HashString("SECURITY");
static const int RESILIENCE_HASH = HashingUtils::HashString("RESILIENCE");
static const int PERFORMANCE_HASH = HashingUtils::HashString("PERFORMANCE");
static const int OPERATIONAL_EXCELLENCE_HASH = HashingUtils::HashString("OPERATIONAL_EXCELLENCE");

Pillar GetPillarForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COST_OPTIMIZATION_HASH) {
    return Pillar::COST_OPTIMIZATION;
  } else if (hashCode == SECURITY_HASH) {
    return Pillar::SECURITY;
  } else if (hashCode == RESILIENCE_HASH) {
    return Pillar::RESILIENCE;
  } else if (hashCode == PERFORMANCE_HASH) {
    return Pillar::PERFORMANCE;
  } else if (hashCode == OPERATIONAL_EXCELLENCE_HASH) {
    return Pillar::OPERATIONAL_EXCELLENCE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Pillar>(hashCode);
  }

  return Pillar::NOT_SET;
}

Aws::String GetNameForPillar(Pillar enumValue) {
  switch (enumValue) {
    case Pillar::NOT_SET:
      return {};
    case Pillar::COST_OPTIMIZATION:
      return "COST_OPTIMIZATION";
    case Pillar::SECURITY:
      return "SECURITY";
    case Pillar::RESILIENCE:
      return "RESILIENCE";
    case Pillar::PERFORMANCE:
      return "PERFORMANCE";
    case Pillar::OPERATIONAL_EXCELLENCE:
      return "OPERATIONAL_EXCELLENCE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PillarMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
