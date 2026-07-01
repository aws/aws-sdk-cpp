/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

namespace Aws {
namespace NetworkFirewall {
namespace Model {
enum class ContainerAssociationStatus { NOT_SET, ACTIVE, CREATING, DELETING };

namespace ContainerAssociationStatusMapper {
AWS_NETWORKFIREWALL_API ContainerAssociationStatus GetContainerAssociationStatusForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForContainerAssociationStatus(ContainerAssociationStatus value);
}  // namespace ContainerAssociationStatusMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
