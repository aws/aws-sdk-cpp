/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-thin-client/model/GetDeviceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpacesThinClient::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDeviceRequest::GetDeviceRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String GetDeviceRequest::SerializePayload() const
{
  return {};
}




