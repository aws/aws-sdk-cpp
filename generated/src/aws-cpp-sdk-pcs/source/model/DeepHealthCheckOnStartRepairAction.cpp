/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pcs/model/DeepHealthCheckOnStartRepairAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace PCS {
namespace Model {
namespace DeepHealthCheckOnStartRepairActionMapper {

static const int AUTO_HASH = HashingUtils::HashString("AUTO");
static const int REPLACE_HASH = HashingUtils::HashString("REPLACE");
static const int ISOLATE_HASH = HashingUtils::HashString("ISOLATE");
static const int NONE_HASH = HashingUtils::HashString("NONE");

DeepHealthCheckOnStartRepairAction GetDeepHealthCheckOnStartRepairActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AUTO_HASH) {
    return DeepHealthCheckOnStartRepairAction::AUTO;
  } else if (hashCode == REPLACE_HASH) {
    return DeepHealthCheckOnStartRepairAction::REPLACE;
  } else if (hashCode == ISOLATE_HASH) {
    return DeepHealthCheckOnStartRepairAction::ISOLATE;
  } else if (hashCode == NONE_HASH) {
    return DeepHealthCheckOnStartRepairAction::NONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeepHealthCheckOnStartRepairAction>(hashCode);
  }

  return DeepHealthCheckOnStartRepairAction::NOT_SET;
}

Aws::String GetNameForDeepHealthCheckOnStartRepairAction(DeepHealthCheckOnStartRepairAction enumValue) {
  switch (enumValue) {
    case DeepHealthCheckOnStartRepairAction::NOT_SET:
      return {};
    case DeepHealthCheckOnStartRepairAction::AUTO:
      return "AUTO";
    case DeepHealthCheckOnStartRepairAction::REPLACE:
      return "REPLACE";
    case DeepHealthCheckOnStartRepairAction::ISOLATE:
      return "ISOLATE";
    case DeepHealthCheckOnStartRepairAction::NONE:
      return "NONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeepHealthCheckOnStartRepairActionMapper
}  // namespace Model
}  // namespace PCS
}  // namespace Aws
