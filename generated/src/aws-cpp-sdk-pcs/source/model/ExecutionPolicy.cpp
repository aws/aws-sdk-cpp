/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pcs/model/ExecutionPolicy.h>

using namespace Aws::Utils;

namespace Aws {
namespace PCS {
namespace Model {
namespace ExecutionPolicyMapper {

static const int FIRST_BOOT_ONLY_HASH = HashingUtils::HashString("FIRST_BOOT_ONLY");
static const int EVERY_BOOT_HASH = HashingUtils::HashString("EVERY_BOOT");

ExecutionPolicy GetExecutionPolicyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FIRST_BOOT_ONLY_HASH) {
    return ExecutionPolicy::FIRST_BOOT_ONLY;
  } else if (hashCode == EVERY_BOOT_HASH) {
    return ExecutionPolicy::EVERY_BOOT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExecutionPolicy>(hashCode);
  }

  return ExecutionPolicy::NOT_SET;
}

Aws::String GetNameForExecutionPolicy(ExecutionPolicy enumValue) {
  switch (enumValue) {
    case ExecutionPolicy::NOT_SET:
      return {};
    case ExecutionPolicy::FIRST_BOOT_ONLY:
      return "FIRST_BOOT_ONLY";
    case ExecutionPolicy::EVERY_BOOT:
      return "EVERY_BOOT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExecutionPolicyMapper
}  // namespace Model
}  // namespace PCS
}  // namespace Aws
