/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/ChannelHandshakePayload.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

ChannelHandshakePayload::ChannelHandshakePayload(JsonView jsonValue) { *this = jsonValue; }

ChannelHandshakePayload& ChannelHandshakePayload::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("startServicePeriodPayload")) {
    m_startServicePeriodPayload = jsonValue.GetObject("startServicePeriodPayload");
    m_startServicePeriodPayloadHasBeenSet = true;
  }
  if (jsonValue.ValueExists("revokeServicePeriodPayload")) {
    m_revokeServicePeriodPayload = jsonValue.GetObject("revokeServicePeriodPayload");
    m_revokeServicePeriodPayloadHasBeenSet = true;
  }
  return *this;
}

JsonValue ChannelHandshakePayload::Jsonize() const {
  JsonValue payload;

  if (m_startServicePeriodPayloadHasBeenSet) {
    payload.WithObject("startServicePeriodPayload", m_startServicePeriodPayload.Jsonize());
  }

  if (m_revokeServicePeriodPayloadHasBeenSet) {
    payload.WithObject("revokeServicePeriodPayload", m_revokeServicePeriodPayload.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
