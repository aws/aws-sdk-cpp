/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{
  enum class FilterCondition
  {
    NOT_SET,
    EQ,
    IN,
    BETWEEN,
    BEGINS_WITH
  };

namespace FilterConditionMapper
{
AWS_SERVICEDISCOVERY_API FilterCondition GetFilterConditionForName(const Aws::String& name);

AWS_SERVICEDISCOVERY_API Aws::String GetNameForFilterCondition(FilterCondition value);
} // namespace FilterConditionMapper
} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
