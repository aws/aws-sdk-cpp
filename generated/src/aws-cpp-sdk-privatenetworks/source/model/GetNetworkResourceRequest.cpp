/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/GetNetworkResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PrivateNetworks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetNetworkResourceRequest::GetNetworkResourceRequest() : 
    m_networkResourceArnHasBeenSet(false)
{
}

Aws::String GetNetworkResourceRequest::SerializePayload() const
{
  return {};
}




