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
  enum class AccessPropertyValue
  {
    NOT_SET,
    ALLOW,
    DENY
  };

namespace AccessPropertyValueMapper
{
AWS_WORKSPACES_API AccessPropertyValue GetAccessPropertyValueForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForAccessPropertyValue(AccessPropertyValue value);
} // namespace AccessPropertyValueMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
