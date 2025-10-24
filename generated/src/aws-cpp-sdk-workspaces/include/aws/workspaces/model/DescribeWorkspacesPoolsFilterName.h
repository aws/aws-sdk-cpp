/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/WorkSpaces_EXPORTS.h>

namespace Aws {
namespace WorkSpaces {
namespace Model {
enum class DescribeWorkspacesPoolsFilterName { NOT_SET, PoolName };

namespace DescribeWorkspacesPoolsFilterNameMapper {
AWS_WORKSPACES_API DescribeWorkspacesPoolsFilterName GetDescribeWorkspacesPoolsFilterNameForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForDescribeWorkspacesPoolsFilterName(DescribeWorkspacesPoolsFilterName value);
}  // namespace DescribeWorkspacesPoolsFilterNameMapper
}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws
