/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>

namespace Aws {
namespace RTBFabric {
namespace Model {
enum class ErrorCode {
  NOT_SET,
  VPC_NOT_FOUND,
  EC2_SUBNET_NOT_FOUND,
  EC2_SECURITY_GROUP_NOT_FOUND,
  EC2_SUBNET_IP_EXHAUSTION,
  IAM_ASSUME_ROLE_ACCESS_DENIED,
  INTERNAL_ERROR
};

namespace ErrorCodeMapper {
AWS_RTBFABRIC_API ErrorCode GetErrorCodeForName(const Aws::String& name);

AWS_RTBFABRIC_API Aws::String GetNameForErrorCode(ErrorCode value);
}  // namespace ErrorCodeMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
