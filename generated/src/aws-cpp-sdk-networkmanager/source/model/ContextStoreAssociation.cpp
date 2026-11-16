/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkmanager/model/ContextStoreAssociation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkManager {
namespace Model {

ContextStoreAssociation::ContextStoreAssociation(JsonView jsonValue) { *this = jsonValue; }

ContextStoreAssociation& ContextStoreAssociation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ContextStoreId")) {
    m_contextStoreId = jsonValue.GetString("ContextStoreId");
    m_contextStoreIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TransitGatewayArn")) {
    m_transitGatewayArn = jsonValue.GetString("TransitGatewayArn");
    m_transitGatewayArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = ContextStoreAssociationStateMapper::GetContextStoreAssociationStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  return *this;
}

JsonValue ContextStoreAssociation::Jsonize() const {
  JsonValue payload;

  if (m_contextStoreIdHasBeenSet) {
    payload.WithString("ContextStoreId", m_contextStoreId);
  }

  if (m_transitGatewayArnHasBeenSet) {
    payload.WithString("TransitGatewayArn", m_transitGatewayArn);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_stateHasBeenSet) {
    payload.WithString("State", ContextStoreAssociationStateMapper::GetNameForContextStoreAssociationState(m_state));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
