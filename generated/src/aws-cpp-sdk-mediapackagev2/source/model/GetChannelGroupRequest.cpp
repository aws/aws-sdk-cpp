/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/GetChannelGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mediapackagev2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetChannelGroupRequest::GetChannelGroupRequest() : 
    m_channelGroupNameHasBeenSet(false)
{
}

Aws::String GetChannelGroupRequest::SerializePayload() const
{
  return {};
}




