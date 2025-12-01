/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-account/model/Connection.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {

Connection::Connection(JsonView jsonValue) { *this = jsonValue; }

Connection& Connection::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Catalog")) {
    m_catalog = jsonValue.GetString("Catalog");
    m_catalogHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OtherParticipantAccountId")) {
    m_otherParticipantAccountId = jsonValue.GetString("OtherParticipantAccountId");
    m_otherParticipantAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetString("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConnectionTypes")) {
    Aws::Map<Aws::String, JsonView> connectionTypesJsonMap = jsonValue.GetObject("ConnectionTypes").GetAllObjects();
    for (auto& connectionTypesItem : connectionTypesJsonMap) {
      m_connectionTypes[ConnectionTypeMapper::GetConnectionTypeForName(connectionTypesItem.first)] = connectionTypesItem.second.AsObject();
    }
    m_connectionTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue Connection::Jsonize() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("Catalog", m_catalog);
  }

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_otherParticipantAccountIdHasBeenSet) {
    payload.WithString("OtherParticipantAccountId", m_otherParticipantAccountId);
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("UpdatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_connectionTypesHasBeenSet) {
    JsonValue connectionTypesJsonMap;
    for (auto& connectionTypesItem : m_connectionTypes) {
      connectionTypesJsonMap.WithObject(ConnectionTypeMapper::GetNameForConnectionType(connectionTypesItem.first),
                                        connectionTypesItem.second.Jsonize());
    }
    payload.WithObject("ConnectionTypes", std::move(connectionTypesJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
