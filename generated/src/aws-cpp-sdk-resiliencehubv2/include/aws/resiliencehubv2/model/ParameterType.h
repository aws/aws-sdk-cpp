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
enum class ParameterType { NOT_SET, STRING, STRING_LIST, INTEGER };

namespace ParameterTypeMapper {
AWS_RESILIENCEHUBV2_API ParameterType GetParameterTypeForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForParameterType(ParameterType value);
}  // namespace ParameterTypeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
