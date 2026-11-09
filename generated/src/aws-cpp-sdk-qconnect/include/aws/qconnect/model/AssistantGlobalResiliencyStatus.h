/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>

namespace Aws {
namespace QConnect {
namespace Model {
enum class AssistantGlobalResiliencyStatus { NOT_SET, ENABLED, DISABLED };

namespace AssistantGlobalResiliencyStatusMapper {
AWS_QCONNECT_API AssistantGlobalResiliencyStatus GetAssistantGlobalResiliencyStatusForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForAssistantGlobalResiliencyStatus(AssistantGlobalResiliencyStatus value);
}  // namespace AssistantGlobalResiliencyStatusMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
