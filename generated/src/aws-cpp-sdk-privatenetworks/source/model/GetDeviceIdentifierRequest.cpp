/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/GetDeviceIdentifierRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PrivateNetworks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDeviceIdentifierRequest::GetDeviceIdentifierRequest() : 
    m_deviceIdentifierArnHasBeenSet(false)
{
}

Aws::String GetDeviceIdentifierRequest::SerializePayload() const
{
  return {};
}




