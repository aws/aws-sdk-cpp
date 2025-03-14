﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/ResetChannelStateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mediapackagev2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ResetChannelStateRequest::ResetChannelStateRequest() : 
    m_channelGroupNameHasBeenSet(false),
    m_channelNameHasBeenSet(false)
{
}

Aws::String ResetChannelStateRequest::SerializePayload() const
{
  return {};
}




