/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/UpdateBridgeFlowSourceRequest.h>
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

UpdateBridgeFlowSourceRequest::UpdateBridgeFlowSourceRequest() : 
    m_flowArnHasBeenSet(false),
    m_flowVpcInterfaceAttachmentHasBeenSet(false)
{
}

UpdateBridgeFlowSourceRequest::UpdateBridgeFlowSourceRequest(JsonView jsonValue) : 
    m_flowArnHasBeenSet(false),
    m_flowVpcInterfaceAttachmentHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateBridgeFlowSourceRequest& UpdateBridgeFlowSourceRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("flowArn"))
  {
    m_flowArn = jsonValue.GetString("flowArn");

    m_flowArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("flowVpcInterfaceAttachment"))
  {
    m_flowVpcInterfaceAttachment = jsonValue.GetObject("flowVpcInterfaceAttachment");

    m_flowVpcInterfaceAttachmentHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateBridgeFlowSourceRequest::Jsonize() const
{
  JsonValue payload;

  if(m_flowArnHasBeenSet)
  {
   payload.WithString("flowArn", m_flowArn);

  }

  if(m_flowVpcInterfaceAttachmentHasBeenSet)
  {
   payload.WithObject("flowVpcInterfaceAttachment", m_flowVpcInterfaceAttachment.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
