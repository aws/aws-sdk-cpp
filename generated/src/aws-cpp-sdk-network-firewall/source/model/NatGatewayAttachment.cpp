/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/NatGatewayAttachment.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

NatGatewayAttachment::NatGatewayAttachment(JsonView jsonValue) { *this = jsonValue; }

NatGatewayAttachment& NatGatewayAttachment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("NatGatewayId")) {
    m_natGatewayId = jsonValue.GetString("NatGatewayId");
    m_natGatewayIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = NatGatewayAttachmentStatusMapper::GetNatGatewayAttachmentStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StatusMessage")) {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DnsName")) {
    m_dnsName = jsonValue.GetString("DnsName");
    m_dnsNameHasBeenSet = true;
  }
  return *this;
}

JsonValue NatGatewayAttachment::Jsonize() const {
  JsonValue payload;

  if (m_natGatewayIdHasBeenSet) {
    payload.WithString("NatGatewayId", m_natGatewayId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", NatGatewayAttachmentStatusMapper::GetNameForNatGatewayAttachmentStatus(m_status));
  }

  if (m_statusMessageHasBeenSet) {
    payload.WithString("StatusMessage", m_statusMessage);
  }

  if (m_dnsNameHasBeenSet) {
    payload.WithString("DnsName", m_dnsName);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
