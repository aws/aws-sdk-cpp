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
  enum class BundleType
  {
    NOT_SET,
    REGULAR,
    STANDBY
  };

namespace BundleTypeMapper
{
AWS_WORKSPACES_API BundleType GetBundleTypeForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForBundleType(BundleType value);
} // namespace BundleTypeMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
