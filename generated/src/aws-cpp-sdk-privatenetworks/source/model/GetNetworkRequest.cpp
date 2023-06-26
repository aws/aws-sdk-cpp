/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/GetNetworkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PrivateNetworks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetNetworkRequest::GetNetworkRequest() : 
    m_networkArnHasBeenSet(false)
{
}

Aws::String GetNetworkRequest::SerializePayload() const
{
  return {};
}




