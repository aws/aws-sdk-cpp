/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/TransitGatewayAttachmentSyncState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

TransitGatewayAttachmentSyncState::TransitGatewayAttachmentSyncState(JsonView jsonValue)
{
  *this = jsonValue;
}

TransitGatewayAttachmentSyncState& TransitGatewayAttachmentSyncState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttachmentId"))
  {
    m_attachmentId = jsonValue.GetString("AttachmentId");
    m_attachmentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TransitGatewayAttachmentStatus"))
  {
    m_transitGatewayAttachmentStatus = TransitGatewayAttachmentStatusMapper::GetTransitGatewayAttachmentStatusForName(jsonValue.GetString("TransitGatewayAttachmentStatus"));
    m_transitGatewayAttachmentStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue TransitGatewayAttachmentSyncState::Jsonize() const
{
  JsonValue payload;

  if(m_attachmentIdHasBeenSet)
  {
   payload.WithString("AttachmentId", m_attachmentId);

  }

  if(m_transitGatewayAttachmentStatusHasBeenSet)
  {
   payload.WithString("TransitGatewayAttachmentStatus", TransitGatewayAttachmentStatusMapper::GetNameForTransitGatewayAttachmentStatus(m_transitGatewayAttachmentStatus));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
