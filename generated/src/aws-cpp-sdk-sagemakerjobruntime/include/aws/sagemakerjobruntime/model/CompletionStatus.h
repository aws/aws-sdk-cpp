/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemakerjobruntime/SagemakerJobRuntime_EXPORTS.h>

namespace Aws {
namespace SagemakerJobRuntime {
namespace Model {
enum class CompletionStatus { NOT_SET, ready, failed };

namespace CompletionStatusMapper {
AWS_SAGEMAKERJOBRUNTIME_API CompletionStatus GetCompletionStatusForName(const Aws::String& name);

AWS_SAGEMAKERJOBRUNTIME_API Aws::String GetNameForCompletionStatus(CompletionStatus value);
}  // namespace CompletionStatusMapper
}  // namespace Model
}  // namespace SagemakerJobRuntime
}  // namespace Aws
