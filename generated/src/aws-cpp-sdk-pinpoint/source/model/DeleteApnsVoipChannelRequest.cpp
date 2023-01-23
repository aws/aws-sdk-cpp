/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/DeleteApnsVoipChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteApnsVoipChannelRequest::DeleteApnsVoipChannelRequest() : 
    m_applicationIdHasBeenSet(false)
{
}

Aws::String DeleteApnsVoipChannelRequest::SerializePayload() const
{
  return {};
}




