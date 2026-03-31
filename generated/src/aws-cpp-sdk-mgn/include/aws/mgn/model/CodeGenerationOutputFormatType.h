/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>

namespace Aws {
namespace mgn {
namespace Model {
enum class CodeGenerationOutputFormatType { NOT_SET, CDK_L1, CDK_L2, TERRAFORM, LZA };

namespace CodeGenerationOutputFormatTypeMapper {
AWS_MGN_API CodeGenerationOutputFormatType GetCodeGenerationOutputFormatTypeForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForCodeGenerationOutputFormatType(CodeGenerationOutputFormatType value);
}  // namespace CodeGenerationOutputFormatTypeMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
