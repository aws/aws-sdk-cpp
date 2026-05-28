/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
enum class InputSourceType { NOT_SET, CFN_STACK, TAGS, EKS, TERRAFORM, DESIGN_FILE, MONITORING };

namespace InputSourceTypeMapper {
AWS_RESILIENCEHUBV2_API InputSourceType GetInputSourceTypeForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForInputSourceType(InputSourceType value);
}  // namespace InputSourceTypeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
