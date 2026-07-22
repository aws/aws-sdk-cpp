/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pcs/PCS_EXPORTS.h>

namespace Aws {
namespace PCS {
namespace Model {
enum class ExecutionPolicy { NOT_SET, FIRST_BOOT_ONLY, EVERY_BOOT };

namespace ExecutionPolicyMapper {
AWS_PCS_API ExecutionPolicy GetExecutionPolicyForName(const Aws::String& name);

AWS_PCS_API Aws::String GetNameForExecutionPolicy(ExecutionPolicy value);
}  // namespace ExecutionPolicyMapper
}  // namespace Model
}  // namespace PCS
}  // namespace Aws
