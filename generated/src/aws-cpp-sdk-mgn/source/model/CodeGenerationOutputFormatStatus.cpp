/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/CodeGenerationOutputFormatStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace CodeGenerationOutputFormatStatusMapper {

static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

CodeGenerationOutputFormatStatus GetCodeGenerationOutputFormatStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SUCCEEDED_HASH) {
    return CodeGenerationOutputFormatStatus::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return CodeGenerationOutputFormatStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CodeGenerationOutputFormatStatus>(hashCode);
  }

  return CodeGenerationOutputFormatStatus::NOT_SET;
}

Aws::String GetNameForCodeGenerationOutputFormatStatus(CodeGenerationOutputFormatStatus enumValue) {
  switch (enumValue) {
    case CodeGenerationOutputFormatStatus::NOT_SET:
      return {};
    case CodeGenerationOutputFormatStatus::SUCCEEDED:
      return "SUCCEEDED";
    case CodeGenerationOutputFormatStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CodeGenerationOutputFormatStatusMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
