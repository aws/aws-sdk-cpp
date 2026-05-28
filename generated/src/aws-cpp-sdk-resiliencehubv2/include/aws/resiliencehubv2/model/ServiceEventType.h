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
enum class ServiceEventType {
  NOT_SET,
  SERVICE_CREATED,
  SERVICE_DELETED,
  SERVICE_SYSTEM_ASSOCIATED,
  SERVICE_SYSTEM_DISASSOCIATED,
  SERVICE_RESOURCES_ASSOCIATED,
  SERVICE_RESOURCES_DISASSOCIATED,
  SERVICE_WORKFLOW_UPDATED,
  SERVICE_INPUT_SOURCES_UPDATED,
  SERVICE_POLICY_ASSOCIATED,
  SERVICE_POLICY_DISASSOCIATED,
  SERVICE_FUNCTION_CREATED,
  SERVICE_FUNCTION_UPDATED,
  SERVICE_FUNCTION_DELETED,
  SERVICE_FUNCTION_RESOURCES_ADDED,
  SERVICE_FUNCTION_RESOURCES_REMOVED,
  SERVICE_ACHIEVABILITY_UPDATED,
  ASSERTION_CREATED,
  ASSERTION_UPDATED,
  ASSERTION_DELETED
};

namespace ServiceEventTypeMapper {
AWS_RESILIENCEHUBV2_API ServiceEventType GetServiceEventTypeForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForServiceEventType(ServiceEventType value);
}  // namespace ServiceEventTypeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
