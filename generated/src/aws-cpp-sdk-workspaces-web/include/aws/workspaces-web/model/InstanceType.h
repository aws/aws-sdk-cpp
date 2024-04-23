/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{
  enum class InstanceType
  {
    NOT_SET,
    standard_regular,
    standard_large,
    standard_xlarge
  };

namespace InstanceTypeMapper
{
AWS_WORKSPACESWEB_API InstanceType GetInstanceTypeForName(const Aws::String& name);

AWS_WORKSPACESWEB_API Aws::String GetNameForInstanceType(InstanceType value);
} // namespace InstanceTypeMapper
} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
