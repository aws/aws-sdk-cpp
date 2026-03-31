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
enum class TargetDomainStatus { NOT_SET, PENDING, VERIFIED, FAILED, UNREACHABLE };

namespace TargetDomainStatusMapper {
AWS_SECURITYAGENT_API TargetDomainStatus GetTargetDomainStatusForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForTargetDomainStatus(TargetDomainStatus value);
}  // namespace TargetDomainStatusMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
