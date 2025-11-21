/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/ChannelHandshakeSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

ChannelHandshakeSummary::ChannelHandshakeSummary(JsonView jsonValue) { *this = jsonValue; }

ChannelHandshakeSummary& ChannelHandshakeSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("catalog")) {
    m_catalog = jsonValue.GetString("catalog");
    m_catalogHasBeenSet = true;
  }
  if (jsonValue.ValueExists("handshakeType")) {
    m_handshakeType = HandshakeTypeMapper::GetHandshakeTypeForName(jsonValue.GetString("handshakeType"));
    m_handshakeTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ownerAccountId")) {
    m_ownerAccountId = jsonValue.GetString("ownerAccountId");
    m_ownerAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("senderAccountId")) {
    m_senderAccountId = jsonValue.GetString("senderAccountId");
    m_senderAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("senderDisplayName")) {
    m_senderDisplayName = jsonValue.GetString("senderDisplayName");
    m_senderDisplayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("receiverAccountId")) {
    m_receiverAccountId = jsonValue.GetString("receiverAccountId");
    m_receiverAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("associatedResourceId")) {
    m_associatedResourceId = jsonValue.GetString("associatedResourceId");
    m_associatedResourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("detail")) {
    m_detail = jsonValue.GetObject("detail");
    m_detailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = HandshakeStatusMapper::GetHandshakeStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue ChannelHandshakeSummary::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_catalogHasBeenSet) {
    payload.WithString("catalog", m_catalog);
  }

  if (m_handshakeTypeHasBeenSet) {
    payload.WithString("handshakeType", HandshakeTypeMapper::GetNameForHandshakeType(m_handshakeType));
  }

  if (m_ownerAccountIdHasBeenSet) {
    payload.WithString("ownerAccountId", m_ownerAccountId);
  }

  if (m_senderAccountIdHasBeenSet) {
    payload.WithString("senderAccountId", m_senderAccountId);
  }

  if (m_senderDisplayNameHasBeenSet) {
    payload.WithString("senderDisplayName", m_senderDisplayName);
  }

  if (m_receiverAccountIdHasBeenSet) {
    payload.WithString("receiverAccountId", m_receiverAccountId);
  }

  if (m_associatedResourceIdHasBeenSet) {
    payload.WithString("associatedResourceId", m_associatedResourceId);
  }

  if (m_detailHasBeenSet) {
    payload.WithObject("detail", m_detail.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", HandshakeStatusMapper::GetNameForHandshakeStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
