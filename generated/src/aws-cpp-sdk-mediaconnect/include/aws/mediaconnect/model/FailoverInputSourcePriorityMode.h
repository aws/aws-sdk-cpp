/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

namespace Aws {
namespace MediaConnect {
namespace Model {
enum class FailoverInputSourcePriorityMode { NOT_SET, NO_PRIORITY, PRIMARY_SECONDARY };

namespace FailoverInputSourcePriorityModeMapper {
AWS_MEDIACONNECT_API FailoverInputSourcePriorityMode GetFailoverInputSourcePriorityModeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForFailoverInputSourcePriorityMode(FailoverInputSourcePriorityMode value);
}  // namespace FailoverInputSourcePriorityModeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
