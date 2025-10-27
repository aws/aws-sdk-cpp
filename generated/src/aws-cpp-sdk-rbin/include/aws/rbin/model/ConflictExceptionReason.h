/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rbin/RecycleBin_EXPORTS.h>

namespace Aws {
namespace RecycleBin {
namespace Model {
enum class ConflictExceptionReason { NOT_SET, INVALID_RULE_STATE };

namespace ConflictExceptionReasonMapper {
AWS_RECYCLEBIN_API ConflictExceptionReason GetConflictExceptionReasonForName(const Aws::String& name);

AWS_RECYCLEBIN_API Aws::String GetNameForConflictExceptionReason(ConflictExceptionReason value);
}  // namespace ConflictExceptionReasonMapper
}  // namespace Model
}  // namespace RecycleBin
}  // namespace Aws
