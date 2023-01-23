/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/ActivateDeviceIdentifierRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PrivateNetworks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ActivateDeviceIdentifierRequest::ActivateDeviceIdentifierRequest() : 
    m_clientTokenHasBeenSet(false),
    m_deviceIdentifierArnHasBeenSet(false)
{
}

Aws::String ActivateDeviceIdentifierRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_deviceIdentifierArnHasBeenSet)
  {
   payload.WithString("deviceIdentifierArn", m_deviceIdentifierArn);

  }

  return payload.View().WriteReadable();
}




