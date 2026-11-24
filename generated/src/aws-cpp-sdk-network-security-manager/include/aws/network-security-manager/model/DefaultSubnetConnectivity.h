/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
enum class DefaultSubnetConnectivity { NOT_SET, flexible, bidirectional, outbound_only };

namespace DefaultSubnetConnectivityMapper {
AWS_NETWORKSECURITYMANAGER_API DefaultSubnetConnectivity GetDefaultSubnetConnectivityForName(const Aws::String& name);

AWS_NETWORKSECURITYMANAGER_API Aws::String GetNameForDefaultSubnetConnectivity(DefaultSubnetConnectivity value);
}  // namespace DefaultSubnetConnectivityMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
