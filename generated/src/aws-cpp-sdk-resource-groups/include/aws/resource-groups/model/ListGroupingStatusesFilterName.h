/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{
  enum class ListGroupingStatusesFilterName
  {
    NOT_SET,
    status,
    resource_arn
  };

namespace ListGroupingStatusesFilterNameMapper
{
AWS_RESOURCEGROUPS_API ListGroupingStatusesFilterName GetListGroupingStatusesFilterNameForName(const Aws::String& name);

AWS_RESOURCEGROUPS_API Aws::String GetNameForListGroupingStatusesFilterName(ListGroupingStatusesFilterName value);
} // namespace ListGroupingStatusesFilterNameMapper
} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
