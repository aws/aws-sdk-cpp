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
enum class RequesterGatewayStatus {
  NOT_SET,
  PENDING_CREATION,
  ACTIVE,
  PENDING_DELETION,
  DELETED,
  ERROR_,
  PENDING_UPDATE,
  ISOLATED,
  PENDING_ISOLATION,
  PENDING_RESTORATION
};

namespace RequesterGatewayStatusMapper {
AWS_RTBFABRIC_API RequesterGatewayStatus GetRequesterGatewayStatusForName(const Aws::String& name);

AWS_RTBFABRIC_API Aws::String GetNameForRequesterGatewayStatus(RequesterGatewayStatus value);
}  // namespace RequesterGatewayStatusMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
