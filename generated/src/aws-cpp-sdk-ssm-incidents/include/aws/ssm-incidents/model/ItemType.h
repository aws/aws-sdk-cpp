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
  enum class ItemType
  {
    NOT_SET,
    ANALYSIS,
    INCIDENT,
    METRIC,
    PARENT,
    ATTACHMENT,
    OTHER,
    AUTOMATION,
    INVOLVED_RESOURCE,
    TASK
  };

namespace ItemTypeMapper
{
AWS_SSMINCIDENTS_API ItemType GetItemTypeForName(const Aws::String& name);

AWS_SSMINCIDENTS_API Aws::String GetNameForItemType(ItemType value);
} // namespace ItemTypeMapper
} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
