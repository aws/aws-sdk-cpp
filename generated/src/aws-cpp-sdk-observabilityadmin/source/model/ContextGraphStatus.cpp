/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/observabilityadmin/model/ContextGraphStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
namespace ContextGraphStatusMapper {

static const int Healthy_HASH = HashingUtils::HashString("Healthy");
static const int Unhealthy_HASH = HashingUtils::HashString("Unhealthy");
static const int Provisioning_HASH = HashingUtils::HashString("Provisioning");

ContextGraphStatus GetContextGraphStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Healthy_HASH) {
    return ContextGraphStatus::Healthy;
  } else if (hashCode == Unhealthy_HASH) {
    return ContextGraphStatus::Unhealthy;
  } else if (hashCode == Provisioning_HASH) {
    return ContextGraphStatus::Provisioning;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContextGraphStatus>(hashCode);
  }

  return ContextGraphStatus::NOT_SET;
}

Aws::String GetNameForContextGraphStatus(ContextGraphStatus enumValue) {
  switch (enumValue) {
    case ContextGraphStatus::NOT_SET:
      return {};
    case ContextGraphStatus::Healthy:
      return "Healthy";
    case ContextGraphStatus::Unhealthy:
      return "Unhealthy";
    case ContextGraphStatus::Provisioning:
      return "Provisioning";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContextGraphStatusMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
