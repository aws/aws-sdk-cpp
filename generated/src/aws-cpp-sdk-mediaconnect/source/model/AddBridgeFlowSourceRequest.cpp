/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/AddBridgeFlowSourceRequest.h>
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

AddBridgeFlowSourceRequest::AddBridgeFlowSourceRequest() : 
    m_flowArnHasBeenSet(false),
    m_flowVpcInterfaceAttachmentHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

AddBridgeFlowSourceRequest::AddBridgeFlowSourceRequest(JsonView jsonValue) : 
    m_flowArnHasBeenSet(false),
    m_flowVpcInterfaceAttachmentHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

AddBridgeFlowSourceRequest& AddBridgeFlowSourceRequest::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue AddBridgeFlowSourceRequest::Jsonize() const
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

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
