/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/GetChannelsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetChannelsRequest::GetChannelsRequest() : 
    m_applicationIdHasBeenSet(false)
{
}

Aws::String GetChannelsRequest::SerializePayload() const
{
  return {};
}




