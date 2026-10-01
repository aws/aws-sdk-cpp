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
enum class RemediationStatus { NOT_SET, New, Updated, Resolved };

namespace RemediationStatusMapper {
AWS_SECURITYHUB_API RemediationStatus GetRemediationStatusForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForRemediationStatus(RemediationStatus value);
}  // namespace RemediationStatusMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
