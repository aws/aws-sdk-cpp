/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{
  enum class DescribeWorkspacesPoolsFilterOperator
  {
    NOT_SET,
    EQUALS,
    NOTEQUALS,
    CONTAINS,
    NOTCONTAINS
  };

namespace DescribeWorkspacesPoolsFilterOperatorMapper
{
AWS_WORKSPACES_API DescribeWorkspacesPoolsFilterOperator GetDescribeWorkspacesPoolsFilterOperatorForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForDescribeWorkspacesPoolsFilterOperator(DescribeWorkspacesPoolsFilterOperator value);
} // namespace DescribeWorkspacesPoolsFilterOperatorMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
