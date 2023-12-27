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
  enum class ApplyTimeOf
  {
    NOT_SET,
    UTC,
    DEVICE
  };

namespace ApplyTimeOfMapper
{
AWS_WORKSPACESTHINCLIENT_API ApplyTimeOf GetApplyTimeOfForName(const Aws::String& name);

AWS_WORKSPACESTHINCLIENT_API Aws::String GetNameForApplyTimeOf(ApplyTimeOf value);
} // namespace ApplyTimeOfMapper
} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
