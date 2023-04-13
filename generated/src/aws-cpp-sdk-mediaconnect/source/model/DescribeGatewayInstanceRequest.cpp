/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/DescribeGatewayInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeGatewayInstanceRequest::DescribeGatewayInstanceRequest() : 
    m_gatewayInstanceArnHasBeenSet(false)
{
}

Aws::String DescribeGatewayInstanceRequest::SerializePayload() const
{
  return {};
}




