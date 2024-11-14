/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{
  enum class Channel
  {
    NOT_SET,
    AWS_Marketing_Central,
    Content_Syndication,
    Display,
    Email,
    Live_Event,
    Out_Of_Home_OOH,
    Print,
    Search,
    Social,
    Telemarketing,
    TV,
    Video,
    Virtual_Event
  };

namespace ChannelMapper
{
AWS_PARTNERCENTRALSELLING_API Channel GetChannelForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForChannel(Channel value);
} // namespace ChannelMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
