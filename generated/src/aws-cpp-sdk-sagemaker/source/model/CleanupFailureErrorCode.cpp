/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/CleanupFailureErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace CleanupFailureErrorCodeMapper {

static const int ClientError_HASH = HashingUtils::HashString("ClientError");
static const int InternalFailure_HASH = HashingUtils::HashString("InternalFailure");

CleanupFailureErrorCode GetCleanupFailureErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ClientError_HASH) {
    return CleanupFailureErrorCode::ClientError;
  } else if (hashCode == InternalFailure_HASH) {
    return CleanupFailureErrorCode::InternalFailure;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CleanupFailureErrorCode>(hashCode);
  }

  return CleanupFailureErrorCode::NOT_SET;
}

Aws::String GetNameForCleanupFailureErrorCode(CleanupFailureErrorCode enumValue) {
  switch (enumValue) {
    case CleanupFailureErrorCode::NOT_SET:
      return {};
    case CleanupFailureErrorCode::ClientError:
      return "ClientError";
    case CleanupFailureErrorCode::InternalFailure:
      return "InternalFailure";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CleanupFailureErrorCodeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
