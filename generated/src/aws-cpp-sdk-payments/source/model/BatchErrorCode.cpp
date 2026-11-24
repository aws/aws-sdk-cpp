/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/payments/model/BatchErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {
namespace BatchErrorCodeMapper {

static const int NOT_FOUND_HASH = HashingUtils::HashString("NOT_FOUND");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");

BatchErrorCode GetBatchErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NOT_FOUND_HASH) {
    return BatchErrorCode::NOT_FOUND;
  } else if (hashCode == INTERNAL_ERROR_HASH) {
    return BatchErrorCode::INTERNAL_ERROR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BatchErrorCode>(hashCode);
  }

  return BatchErrorCode::NOT_SET;
}

Aws::String GetNameForBatchErrorCode(BatchErrorCode enumValue) {
  switch (enumValue) {
    case BatchErrorCode::NOT_SET:
      return {};
    case BatchErrorCode::NOT_FOUND:
      return "NOT_FOUND";
    case BatchErrorCode::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BatchErrorCodeMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
