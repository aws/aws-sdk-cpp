/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>

namespace Aws {
namespace OpenSearchServerless {
namespace Model {
enum class AutoscalingStatus { NOT_SET, ACTION_SCALING_UP, ACTION_SCALING_DOWN, NO_ACTION };

namespace AutoscalingStatusMapper {
AWS_OPENSEARCHSERVERLESS_API AutoscalingStatus GetAutoscalingStatusForName(const Aws::String& name);

AWS_OPENSEARCHSERVERLESS_API Aws::String GetNameForAutoscalingStatus(AutoscalingStatus value);
}  // namespace AutoscalingStatusMapper
}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
