/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

namespace Aws {
namespace WellArchitected {
namespace Model {
enum class DiscoveryIntegrationStatus { NOT_SET, ENABLED, DISABLED };

namespace DiscoveryIntegrationStatusMapper {
AWS_WELLARCHITECTED_API DiscoveryIntegrationStatus GetDiscoveryIntegrationStatusForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForDiscoveryIntegrationStatus(DiscoveryIntegrationStatus value);
}  // namespace DiscoveryIntegrationStatusMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
