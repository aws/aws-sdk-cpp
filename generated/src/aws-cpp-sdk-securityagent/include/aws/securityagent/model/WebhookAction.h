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
enum class WebhookAction { NOT_SET, CREATE_IF_ABSENT, ROTATE };

namespace WebhookActionMapper {
AWS_SECURITYAGENT_API WebhookAction GetWebhookActionForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForWebhookAction(WebhookAction value);
}  // namespace WebhookActionMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
