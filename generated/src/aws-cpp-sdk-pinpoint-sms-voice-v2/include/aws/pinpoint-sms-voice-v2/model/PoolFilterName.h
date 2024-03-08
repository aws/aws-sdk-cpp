/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{
  enum class PoolFilterName
  {
    NOT_SET,
    status,
    message_type,
    two_way_enabled,
    self_managed_opt_outs_enabled,
    opt_out_list_name,
    shared_routes_enabled,
    deletion_protection_enabled,
    two_way_channel_arn
  };

namespace PoolFilterNameMapper
{
AWS_PINPOINTSMSVOICEV2_API PoolFilterName GetPoolFilterNameForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForPoolFilterName(PoolFilterName value);
} // namespace PoolFilterNameMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
