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
enum class CoverageStatus { NOT_SET, IN_EFFECT, SUPERSEDED };

namespace CoverageStatusMapper {
AWS_NETWORKSECURITYMANAGER_API CoverageStatus GetCoverageStatusForName(const Aws::String& name);

AWS_NETWORKSECURITYMANAGER_API Aws::String GetNameForCoverageStatus(CoverageStatus value);
}  // namespace CoverageStatusMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
