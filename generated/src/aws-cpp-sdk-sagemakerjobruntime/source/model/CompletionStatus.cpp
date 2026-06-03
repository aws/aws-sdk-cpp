/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemakerjobruntime/model/CompletionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SagemakerJobRuntime {
namespace Model {
namespace CompletionStatusMapper {

static const int ready_HASH = HashingUtils::HashString("ready");
static const int failed_HASH = HashingUtils::HashString("failed");

CompletionStatus GetCompletionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ready_HASH) {
    return CompletionStatus::ready;
  } else if (hashCode == failed_HASH) {
    return CompletionStatus::failed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CompletionStatus>(hashCode);
  }

  return CompletionStatus::NOT_SET;
}

Aws::String GetNameForCompletionStatus(CompletionStatus enumValue) {
  switch (enumValue) {
    case CompletionStatus::NOT_SET:
      return {};
    case CompletionStatus::ready:
      return "ready";
    case CompletionStatus::failed:
      return "failed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CompletionStatusMapper
}  // namespace Model
}  // namespace SagemakerJobRuntime
}  // namespace Aws
