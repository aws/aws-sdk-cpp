/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/ContainerMonitoringType.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace ContainerMonitoringTypeMapper {

static const int ECS_HASH = HashingUtils::HashString("ECS");
static const int EKS_HASH = HashingUtils::HashString("EKS");

ContainerMonitoringType GetContainerMonitoringTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ECS_HASH) {
    return ContainerMonitoringType::ECS;
  } else if (hashCode == EKS_HASH) {
    return ContainerMonitoringType::EKS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContainerMonitoringType>(hashCode);
  }

  return ContainerMonitoringType::NOT_SET;
}

Aws::String GetNameForContainerMonitoringType(ContainerMonitoringType enumValue) {
  switch (enumValue) {
    case ContainerMonitoringType::NOT_SET:
      return {};
    case ContainerMonitoringType::ECS:
      return "ECS";
    case ContainerMonitoringType::EKS:
      return "EKS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContainerMonitoringTypeMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
