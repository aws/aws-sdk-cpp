/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/DeleteBridgeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteBridgeRequest::DeleteBridgeRequest() : 
    m_bridgeArnHasBeenSet(false)
{
}

Aws::String DeleteBridgeRequest::SerializePayload() const
{
  return {};
}




