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
  enum class AccessEndpointType
  {
    NOT_SET,
    STREAMING_WSP
  };

namespace AccessEndpointTypeMapper
{
AWS_WORKSPACES_API AccessEndpointType GetAccessEndpointTypeForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForAccessEndpointType(AccessEndpointType value);
} // namespace AccessEndpointTypeMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
