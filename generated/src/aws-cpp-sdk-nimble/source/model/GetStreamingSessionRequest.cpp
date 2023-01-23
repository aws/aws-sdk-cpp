/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/GetStreamingSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetStreamingSessionRequest::GetStreamingSessionRequest() : 
    m_sessionIdHasBeenSet(false),
    m_studioIdHasBeenSet(false)
{
}

Aws::String GetStreamingSessionRequest::SerializePayload() const
{
  return {};
}




