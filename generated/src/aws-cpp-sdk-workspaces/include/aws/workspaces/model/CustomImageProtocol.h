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
  enum class CustomImageProtocol
  {
    NOT_SET,
    PCOIP,
    DCV,
    BYOP
  };

namespace CustomImageProtocolMapper
{
AWS_WORKSPACES_API CustomImageProtocol GetCustomImageProtocolForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForCustomImageProtocol(CustomImageProtocol value);
} // namespace CustomImageProtocolMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
