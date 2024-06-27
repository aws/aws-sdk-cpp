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
  enum class StreamingExperiencePreferredProtocolEnum
  {
    NOT_SET,
    TCP,
    UDP
  };

namespace StreamingExperiencePreferredProtocolEnumMapper
{
AWS_WORKSPACES_API StreamingExperiencePreferredProtocolEnum GetStreamingExperiencePreferredProtocolEnumForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForStreamingExperiencePreferredProtocolEnum(StreamingExperiencePreferredProtocolEnum value);
} // namespace StreamingExperiencePreferredProtocolEnumMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
