/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/RemoveBridgeSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveBridgeSourceRequest::RemoveBridgeSourceRequest() : 
    m_bridgeArnHasBeenSet(false),
    m_sourceNameHasBeenSet(false)
{
}

Aws::String RemoveBridgeSourceRequest::SerializePayload() const
{
  return {};
}




