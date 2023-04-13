/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/RemoveBridgeOutputRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveBridgeOutputRequest::RemoveBridgeOutputRequest() : 
    m_bridgeArnHasBeenSet(false),
    m_outputNameHasBeenSet(false)
{
}

Aws::String RemoveBridgeOutputRequest::SerializePayload() const
{
  return {};
}




