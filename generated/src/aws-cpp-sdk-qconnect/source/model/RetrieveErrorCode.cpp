/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qconnect/model/RetrieveErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {
namespace RetrieveErrorCodeMapper {

static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
static const int RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("RESOURCE_NOT_FOUND");
static const int VALIDATION_ERROR_HASH = HashingUtils::HashString("VALIDATION_ERROR");
static const int THROTTLED_HASH = HashingUtils::HashString("THROTTLED");
static const int DEPENDENCY_FAILED_HASH = HashingUtils::HashString("DEPENDENCY_FAILED");
static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("INTERNAL_SERVER_ERROR");

RetrieveErrorCode GetRetrieveErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACCESS_DENIED_HASH) {
    return RetrieveErrorCode::ACCESS_DENIED;
  } else if (hashCode == RESOURCE_NOT_FOUND_HASH) {
    return RetrieveErrorCode::RESOURCE_NOT_FOUND;
  } else if (hashCode == VALIDATION_ERROR_HASH) {
    return RetrieveErrorCode::VALIDATION_ERROR;
  } else if (hashCode == THROTTLED_HASH) {
    return RetrieveErrorCode::THROTTLED;
  } else if (hashCode == DEPENDENCY_FAILED_HASH) {
    return RetrieveErrorCode::DEPENDENCY_FAILED;
  } else if (hashCode == INTERNAL_SERVER_ERROR_HASH) {
    return RetrieveErrorCode::INTERNAL_SERVER_ERROR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RetrieveErrorCode>(hashCode);
  }

  return RetrieveErrorCode::NOT_SET;
}

Aws::String GetNameForRetrieveErrorCode(RetrieveErrorCode enumValue) {
  switch (enumValue) {
    case RetrieveErrorCode::NOT_SET:
      return {};
    case RetrieveErrorCode::ACCESS_DENIED:
      return "ACCESS_DENIED";
    case RetrieveErrorCode::RESOURCE_NOT_FOUND:
      return "RESOURCE_NOT_FOUND";
    case RetrieveErrorCode::VALIDATION_ERROR:
      return "VALIDATION_ERROR";
    case RetrieveErrorCode::THROTTLED:
      return "THROTTLED";
    case RetrieveErrorCode::DEPENDENCY_FAILED:
      return "DEPENDENCY_FAILED";
    case RetrieveErrorCode::INTERNAL_SERVER_ERROR:
      return "INTERNAL_SERVER_ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RetrieveErrorCodeMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
