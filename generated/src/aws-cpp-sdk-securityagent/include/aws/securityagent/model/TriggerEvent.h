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
enum class TriggerEvent { NOT_SET, PULL_REQUEST_READY_FOR_REVIEW, PULL_REQUEST_DRAFT, PULL_REQUEST_LABEL_ADDED };

namespace TriggerEventMapper {
AWS_SECURITYAGENT_API TriggerEvent GetTriggerEventForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForTriggerEvent(TriggerEvent value);
}  // namespace TriggerEventMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
