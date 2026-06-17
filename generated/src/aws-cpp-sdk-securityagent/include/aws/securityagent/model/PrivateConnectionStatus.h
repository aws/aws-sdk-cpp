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
enum class PrivateConnectionStatus { NOT_SET, ACTIVE, CREATE_IN_PROGRESS, CREATE_FAILED, DELETE_IN_PROGRESS, DELETE_FAILED };

namespace PrivateConnectionStatusMapper {
AWS_SECURITYAGENT_API PrivateConnectionStatus GetPrivateConnectionStatusForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForPrivateConnectionStatus(PrivateConnectionStatus value);
}  // namespace PrivateConnectionStatusMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
