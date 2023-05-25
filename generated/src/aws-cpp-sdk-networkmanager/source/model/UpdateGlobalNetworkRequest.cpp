/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/UpdateGlobalNetworkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGlobalNetworkRequest::UpdateGlobalNetworkRequest() : 
    m_globalNetworkIdHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String UpdateGlobalNetworkRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload.View().WriteReadable();
}




