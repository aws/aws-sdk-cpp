/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/DirectConnectGatewayAttachment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

DirectConnectGatewayAttachment::DirectConnectGatewayAttachment(JsonView jsonValue)
{
  *this = jsonValue;
}

DirectConnectGatewayAttachment& DirectConnectGatewayAttachment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attachment"))
  {
    m_attachment = jsonValue.GetObject("Attachment");
    m_attachmentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DirectConnectGatewayArn"))
  {
    m_directConnectGatewayArn = jsonValue.GetString("DirectConnectGatewayArn");
    m_directConnectGatewayArnHasBeenSet = true;
  }
  return *this;
}

JsonValue DirectConnectGatewayAttachment::Jsonize() const
{
  JsonValue payload;

  if(m_attachmentHasBeenSet)
  {
   payload.WithObject("Attachment", m_attachment.Jsonize());

  }

  if(m_directConnectGatewayArnHasBeenSet)
  {
   payload.WithString("DirectConnectGatewayArn", m_directConnectGatewayArn);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
