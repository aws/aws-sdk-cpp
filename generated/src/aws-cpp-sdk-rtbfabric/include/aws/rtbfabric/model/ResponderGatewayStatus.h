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
enum class ResponderGatewayStatus {
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

namespace ResponderGatewayStatusMapper {
AWS_RTBFABRIC_API ResponderGatewayStatus GetResponderGatewayStatusForName(const Aws::String& name);

AWS_RTBFABRIC_API Aws::String GetNameForResponderGatewayStatus(ResponderGatewayStatus value);
}  // namespace ResponderGatewayStatusMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
