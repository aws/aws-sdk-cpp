/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

namespace Aws {
namespace SecurityHub {
namespace Model {
enum class EnablementStatus {
  NOT_SET,
  ENABLED,
  PENDING_ENABLEMENT,
  FAILED_TO_ENABLE,
  PENDING_UPDATE,
  FAILED_TO_UPDATE,
  PENDING_DELETION,
  FAILED_TO_DELETE
};

namespace EnablementStatusMapper {
AWS_SECURITYHUB_API EnablementStatus GetEnablementStatusForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForEnablementStatus(EnablementStatus value);
}  // namespace EnablementStatusMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
