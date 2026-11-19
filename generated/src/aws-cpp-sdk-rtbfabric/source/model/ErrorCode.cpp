/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rtbfabric/model/ErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {
namespace ErrorCodeMapper {

static const int VPC_NOT_FOUND_HASH = HashingUtils::HashString("VPC_NOT_FOUND");
static const int EC2_SUBNET_NOT_FOUND_HASH = HashingUtils::HashString("EC2_SUBNET_NOT_FOUND");
static const int EC2_SECURITY_GROUP_NOT_FOUND_HASH = HashingUtils::HashString("EC2_SECURITY_GROUP_NOT_FOUND");
static const int EC2_SUBNET_IP_EXHAUSTION_HASH = HashingUtils::HashString("EC2_SUBNET_IP_EXHAUSTION");
static const int IAM_ASSUME_ROLE_ACCESS_DENIED_HASH = HashingUtils::HashString("IAM_ASSUME_ROLE_ACCESS_DENIED");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");

ErrorCode GetErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VPC_NOT_FOUND_HASH) {
    return ErrorCode::VPC_NOT_FOUND;
  } else if (hashCode == EC2_SUBNET_NOT_FOUND_HASH) {
    return ErrorCode::EC2_SUBNET_NOT_FOUND;
  } else if (hashCode == EC2_SECURITY_GROUP_NOT_FOUND_HASH) {
    return ErrorCode::EC2_SECURITY_GROUP_NOT_FOUND;
  } else if (hashCode == EC2_SUBNET_IP_EXHAUSTION_HASH) {
    return ErrorCode::EC2_SUBNET_IP_EXHAUSTION;
  } else if (hashCode == IAM_ASSUME_ROLE_ACCESS_DENIED_HASH) {
    return ErrorCode::IAM_ASSUME_ROLE_ACCESS_DENIED;
  } else if (hashCode == INTERNAL_ERROR_HASH) {
    return ErrorCode::INTERNAL_ERROR;
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
    case ErrorCode::VPC_NOT_FOUND:
      return "VPC_NOT_FOUND";
    case ErrorCode::EC2_SUBNET_NOT_FOUND:
      return "EC2_SUBNET_NOT_FOUND";
    case ErrorCode::EC2_SECURITY_GROUP_NOT_FOUND:
      return "EC2_SECURITY_GROUP_NOT_FOUND";
    case ErrorCode::EC2_SUBNET_IP_EXHAUSTION:
      return "EC2_SUBNET_IP_EXHAUSTION";
    case ErrorCode::IAM_ASSUME_ROLE_ACCESS_DENIED:
      return "IAM_ASSUME_ROLE_ACCESS_DENIED";
    case ErrorCode::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
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
}  // namespace RTBFabric
}  // namespace Aws
