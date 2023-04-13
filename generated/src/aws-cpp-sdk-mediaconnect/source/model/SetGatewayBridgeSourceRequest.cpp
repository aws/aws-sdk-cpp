/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/SetGatewayBridgeSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

SetGatewayBridgeSourceRequest::SetGatewayBridgeSourceRequest() : 
    m_bridgeArnHasBeenSet(false),
    m_vpcInterfaceAttachmentHasBeenSet(false)
{
}

SetGatewayBridgeSourceRequest::SetGatewayBridgeSourceRequest(JsonView jsonValue) : 
    m_bridgeArnHasBeenSet(false),
    m_vpcInterfaceAttachmentHasBeenSet(false)
{
  *this = jsonValue;
}

SetGatewayBridgeSourceRequest& SetGatewayBridgeSourceRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bridgeArn"))
  {
    m_bridgeArn = jsonValue.GetString("bridgeArn");

    m_bridgeArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcInterfaceAttachment"))
  {
    m_vpcInterfaceAttachment = jsonValue.GetObject("vpcInterfaceAttachment");

    m_vpcInterfaceAttachmentHasBeenSet = true;
  }

  return *this;
}

JsonValue SetGatewayBridgeSourceRequest::Jsonize() const
{
  JsonValue payload;

  if(m_bridgeArnHasBeenSet)
  {
   payload.WithString("bridgeArn", m_bridgeArn);

  }

  if(m_vpcInterfaceAttachmentHasBeenSet)
  {
   payload.WithObject("vpcInterfaceAttachment", m_vpcInterfaceAttachment.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
