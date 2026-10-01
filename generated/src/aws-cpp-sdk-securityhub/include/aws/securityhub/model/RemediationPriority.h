/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

namespace Aws {
namespace SecurityHub {
namespace Model {
enum class RemediationPriority { NOT_SET, Critical, High, Medium, Low };

namespace RemediationPriorityMapper {
AWS_SECURITYHUB_API RemediationPriority GetRemediationPriorityForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForRemediationPriority(RemediationPriority value);
}  // namespace RemediationPriorityMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
