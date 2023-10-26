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
  enum class BundleAssociatedResourceType
  {
    NOT_SET,
    APPLICATION
  };

namespace BundleAssociatedResourceTypeMapper
{
AWS_WORKSPACES_API BundleAssociatedResourceType GetBundleAssociatedResourceTypeForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForBundleAssociatedResourceType(BundleAssociatedResourceType value);
} // namespace BundleAssociatedResourceTypeMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
