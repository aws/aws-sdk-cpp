/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/CodeGenerationOutputFormatType.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace CodeGenerationOutputFormatTypeMapper {

static const int CDK_L1_HASH = HashingUtils::HashString("CDK_L1");
static const int CDK_L2_HASH = HashingUtils::HashString("CDK_L2");
static const int TERRAFORM_HASH = HashingUtils::HashString("TERRAFORM");
static const int LZA_HASH = HashingUtils::HashString("LZA");

CodeGenerationOutputFormatType GetCodeGenerationOutputFormatTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CDK_L1_HASH) {
    return CodeGenerationOutputFormatType::CDK_L1;
  } else if (hashCode == CDK_L2_HASH) {
    return CodeGenerationOutputFormatType::CDK_L2;
  } else if (hashCode == TERRAFORM_HASH) {
    return CodeGenerationOutputFormatType::TERRAFORM;
  } else if (hashCode == LZA_HASH) {
    return CodeGenerationOutputFormatType::LZA;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CodeGenerationOutputFormatType>(hashCode);
  }

  return CodeGenerationOutputFormatType::NOT_SET;
}

Aws::String GetNameForCodeGenerationOutputFormatType(CodeGenerationOutputFormatType enumValue) {
  switch (enumValue) {
    case CodeGenerationOutputFormatType::NOT_SET:
      return {};
    case CodeGenerationOutputFormatType::CDK_L1:
      return "CDK_L1";
    case CodeGenerationOutputFormatType::CDK_L2:
      return "CDK_L2";
    case CodeGenerationOutputFormatType::TERRAFORM:
      return "TERRAFORM";
    case CodeGenerationOutputFormatType::LZA:
      return "LZA";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CodeGenerationOutputFormatTypeMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
