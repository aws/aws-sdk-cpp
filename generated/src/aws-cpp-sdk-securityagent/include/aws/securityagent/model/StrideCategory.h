/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

namespace Aws {
namespace SecurityAgent {
namespace Model {
enum class StrideCategory { NOT_SET, SPOOFING, TAMPERING, REPUDIATION, INFORMATION_DISCLOSURE, DENIAL_OF_SERVICE, ELEVATION_OF_PRIVILEGE };

namespace StrideCategoryMapper {
AWS_SECURITYAGENT_API StrideCategory GetStrideCategoryForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForStrideCategory(StrideCategory value);
}  // namespace StrideCategoryMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
