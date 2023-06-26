/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/DeleteConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteConnectionRequest::DeleteConnectionRequest() : 
    m_globalNetworkIdHasBeenSet(false),
    m_connectionIdHasBeenSet(false)
{
}

Aws::String DeleteConnectionRequest::SerializePayload() const
{
  return {};
}




