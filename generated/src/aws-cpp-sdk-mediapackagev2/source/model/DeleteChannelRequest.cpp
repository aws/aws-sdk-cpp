/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/DeleteChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mediapackagev2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteChannelRequest::DeleteChannelRequest() : 
    m_channelGroupNameHasBeenSet(false),
    m_channelNameHasBeenSet(false)
{
}

Aws::String DeleteChannelRequest::SerializePayload() const
{
  return {};
}




