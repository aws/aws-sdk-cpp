/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/RemoveFlowVpcInterfaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveFlowVpcInterfaceRequest::RemoveFlowVpcInterfaceRequest() : 
    m_flowArnHasBeenSet(false),
    m_vpcInterfaceNameHasBeenSet(false)
{
}

Aws::String RemoveFlowVpcInterfaceRequest::SerializePayload() const
{
  return {};
}




