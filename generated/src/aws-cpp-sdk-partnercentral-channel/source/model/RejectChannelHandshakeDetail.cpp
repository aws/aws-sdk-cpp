/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/RejectChannelHandshakeDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

RejectChannelHandshakeDetail::RejectChannelHandshakeDetail(JsonView jsonValue) { *this = jsonValue; }

RejectChannelHandshakeDetail& RejectChannelHandshakeDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = HandshakeStatusMapper::GetHandshakeStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue RejectChannelHandshakeDetail::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", HandshakeStatusMapper::GetNameForHandshakeStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
