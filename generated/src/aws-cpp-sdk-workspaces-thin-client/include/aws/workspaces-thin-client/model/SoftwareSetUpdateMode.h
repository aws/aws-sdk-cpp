/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-thin-client/WorkSpacesThinClient_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpacesThinClient
{
namespace Model
{
  enum class SoftwareSetUpdateMode
  {
    NOT_SET,
    USE_LATEST,
    USE_DESIRED
  };

namespace SoftwareSetUpdateModeMapper
{
AWS_WORKSPACESTHINCLIENT_API SoftwareSetUpdateMode GetSoftwareSetUpdateModeForName(const Aws::String& name);

AWS_WORKSPACESTHINCLIENT_API Aws::String GetNameForSoftwareSetUpdateMode(SoftwareSetUpdateMode value);
} // namespace SoftwareSetUpdateModeMapper
} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
