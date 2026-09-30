/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/SlurmHealthReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace SlurmHealthReasonMapper {

static const int DaemonDown_HASH = HashingUtils::HashString("DaemonDown");
static const int DaemonDisabled_HASH = HashingUtils::HashString("DaemonDisabled");
static const int DbUnreachable_HASH = HashingUtils::HashString("DbUnreachable");

SlurmHealthReason GetSlurmHealthReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DaemonDown_HASH) {
    return SlurmHealthReason::DaemonDown;
  } else if (hashCode == DaemonDisabled_HASH) {
    return SlurmHealthReason::DaemonDisabled;
  } else if (hashCode == DbUnreachable_HASH) {
    return SlurmHealthReason::DbUnreachable;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SlurmHealthReason>(hashCode);
  }

  return SlurmHealthReason::NOT_SET;
}

Aws::String GetNameForSlurmHealthReason(SlurmHealthReason enumValue) {
  switch (enumValue) {
    case SlurmHealthReason::NOT_SET:
      return {};
    case SlurmHealthReason::DaemonDown:
      return "DaemonDown";
    case SlurmHealthReason::DaemonDisabled:
      return "DaemonDisabled";
    case SlurmHealthReason::DbUnreachable:
      return "DbUnreachable";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SlurmHealthReasonMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
