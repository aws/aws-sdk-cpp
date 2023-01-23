/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    RESPONSE_PLAN,
    INCIDENT_RECORD,
    TIMELINE_EVENT,
    REPLICATION_SET,
    RESOURCE_POLICY
  };

namespace ResourceTypeMapper
{
AWS_SSMINCIDENTS_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_SSMINCIDENTS_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
