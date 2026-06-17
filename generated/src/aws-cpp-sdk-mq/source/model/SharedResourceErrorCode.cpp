/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mq/model/SharedResourceErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace MQ {
namespace Model {
namespace SharedResourceErrorCodeMapper {

static const int QUOTA_EXCEEDED_HASH = HashingUtils::HashString("QUOTA_EXCEEDED");
static const int SHARE_NOT_FOUND_HASH = HashingUtils::HashString("SHARE_NOT_FOUND");
static const int INVITE_FAILED_HASH = HashingUtils::HashString("INVITE_FAILED");
static const int SETUP_INCOMPLETE_HASH = HashingUtils::HashString("SETUP_INCOMPLETE");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
static const int AZ_MISMATCH_HASH = HashingUtils::HashString("AZ_MISMATCH");
static const int RESOURCE_CONFIGURATION_NOT_FOUND_HASH = HashingUtils::HashString("RESOURCE_CONFIGURATION_NOT_FOUND");

SharedResourceErrorCode GetSharedResourceErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == QUOTA_EXCEEDED_HASH) {
    return SharedResourceErrorCode::QUOTA_EXCEEDED;
  } else if (hashCode == SHARE_NOT_FOUND_HASH) {
    return SharedResourceErrorCode::SHARE_NOT_FOUND;
  } else if (hashCode == INVITE_FAILED_HASH) {
    return SharedResourceErrorCode::INVITE_FAILED;
  } else if (hashCode == SETUP_INCOMPLETE_HASH) {
    return SharedResourceErrorCode::SETUP_INCOMPLETE;
  } else if (hashCode == INTERNAL_ERROR_HASH) {
    return SharedResourceErrorCode::INTERNAL_ERROR;
  } else if (hashCode == AZ_MISMATCH_HASH) {
    return SharedResourceErrorCode::AZ_MISMATCH;
  } else if (hashCode == RESOURCE_CONFIGURATION_NOT_FOUND_HASH) {
    return SharedResourceErrorCode::RESOURCE_CONFIGURATION_NOT_FOUND;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SharedResourceErrorCode>(hashCode);
  }

  return SharedResourceErrorCode::NOT_SET;
}

Aws::String GetNameForSharedResourceErrorCode(SharedResourceErrorCode enumValue) {
  switch (enumValue) {
    case SharedResourceErrorCode::NOT_SET:
      return {};
    case SharedResourceErrorCode::QUOTA_EXCEEDED:
      return "QUOTA_EXCEEDED";
    case SharedResourceErrorCode::SHARE_NOT_FOUND:
      return "SHARE_NOT_FOUND";
    case SharedResourceErrorCode::INVITE_FAILED:
      return "INVITE_FAILED";
    case SharedResourceErrorCode::SETUP_INCOMPLETE:
      return "SETUP_INCOMPLETE";
    case SharedResourceErrorCode::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    case SharedResourceErrorCode::AZ_MISMATCH:
      return "AZ_MISMATCH";
    case SharedResourceErrorCode::RESOURCE_CONFIGURATION_NOT_FOUND:
      return "RESOURCE_CONFIGURATION_NOT_FOUND";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SharedResourceErrorCodeMapper
}  // namespace Model
}  // namespace MQ
}  // namespace Aws
