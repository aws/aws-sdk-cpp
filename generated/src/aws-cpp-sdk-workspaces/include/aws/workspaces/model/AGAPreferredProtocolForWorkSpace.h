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
  enum class AGAPreferredProtocolForWorkSpace
  {
    NOT_SET,
    TCP,
    NONE,
    INHERITED
  };

namespace AGAPreferredProtocolForWorkSpaceMapper
{
AWS_WORKSPACES_API AGAPreferredProtocolForWorkSpace GetAGAPreferredProtocolForWorkSpaceForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForAGAPreferredProtocolForWorkSpace(AGAPreferredProtocolForWorkSpace value);
} // namespace AGAPreferredProtocolForWorkSpaceMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
