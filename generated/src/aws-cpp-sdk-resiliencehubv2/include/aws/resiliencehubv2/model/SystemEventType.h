/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
enum class SystemEventType {
  NOT_SET,
  SYSTEM_CREATED,
  SYSTEM_DELETED,
  SYSTEM_USER_JOURNEY_CREATED,
  SYSTEM_USER_JOURNEY_UPDATED,
  SYSTEM_USER_JOURNEY_DELETED,
  SYSTEM_SERVICE_ASSOCIATED,
  SYSTEM_SERVICE_DISASSOCIATED,
  SYSTEM_POLICY_ASSOCIATED,
  SYSTEM_POLICY_DISASSOCIATED
};

namespace SystemEventTypeMapper {
AWS_RESILIENCEHUBV2_API SystemEventType GetSystemEventTypeForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForSystemEventType(SystemEventType value);
}  // namespace SystemEventTypeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
