/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/redshift-data/model/ExecutionMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace RedshiftDataAPIService {
namespace Model {
namespace ExecutionModeMapper {

static const int TRANSACTION_HASH = HashingUtils::HashString("TRANSACTION");
static const int AUTO_COMMIT_HASH = HashingUtils::HashString("AUTO_COMMIT");

ExecutionMode GetExecutionModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TRANSACTION_HASH) {
    return ExecutionMode::TRANSACTION;
  } else if (hashCode == AUTO_COMMIT_HASH) {
    return ExecutionMode::AUTO_COMMIT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExecutionMode>(hashCode);
  }

  return ExecutionMode::NOT_SET;
}

Aws::String GetNameForExecutionMode(ExecutionMode enumValue) {
  switch (enumValue) {
    case ExecutionMode::NOT_SET:
      return {};
    case ExecutionMode::TRANSACTION:
      return "TRANSACTION";
    case ExecutionMode::AUTO_COMMIT:
      return "AUTO_COMMIT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExecutionModeMapper
}  // namespace Model
}  // namespace RedshiftDataAPIService
}  // namespace Aws
