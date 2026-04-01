/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/ErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace ErrorCodeMapper {

static const int CLIENT_ERROR_HASH = HashingUtils::HashString("CLIENT_ERROR");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
static const int STOPPED_BY_USER_HASH = HashingUtils::HashString("STOPPED_BY_USER");

ErrorCode GetErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CLIENT_ERROR_HASH) {
    return ErrorCode::CLIENT_ERROR;
  } else if (hashCode == INTERNAL_ERROR_HASH) {
    return ErrorCode::INTERNAL_ERROR;
  } else if (hashCode == STOPPED_BY_USER_HASH) {
    return ErrorCode::STOPPED_BY_USER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ErrorCode>(hashCode);
  }

  return ErrorCode::NOT_SET;
}

Aws::String GetNameForErrorCode(ErrorCode enumValue) {
  switch (enumValue) {
    case ErrorCode::NOT_SET:
      return {};
    case ErrorCode::CLIENT_ERROR:
      return "CLIENT_ERROR";
    case ErrorCode::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    case ErrorCode::STOPPED_BY_USER:
      return "STOPPED_BY_USER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ErrorCodeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
