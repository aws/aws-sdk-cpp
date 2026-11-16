/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkmanager/model/ContextStore.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkManager {
namespace Model {

ContextStore::ContextStore(JsonView jsonValue) { *this = jsonValue; }

ContextStore& ContextStore::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("GlobalNetworkId")) {
    m_globalNetworkId = jsonValue.GetString("GlobalNetworkId");
    m_globalNetworkIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContextStoreId")) {
    m_contextStoreId = jsonValue.GetString("ContextStoreId");
    m_contextStoreIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContextStoreArn")) {
    m_contextStoreArn = jsonValue.GetString("ContextStoreArn");
    m_contextStoreArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = ContextStoreStateMapper::GetContextStoreStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue ContextStore::Jsonize() const {
  JsonValue payload;

  if (m_globalNetworkIdHasBeenSet) {
    payload.WithString("GlobalNetworkId", m_globalNetworkId);
  }

  if (m_contextStoreIdHasBeenSet) {
    payload.WithString("ContextStoreId", m_contextStoreId);
  }

  if (m_contextStoreArnHasBeenSet) {
    payload.WithString("ContextStoreArn", m_contextStoreArn);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_stateHasBeenSet) {
    payload.WithString("State", ContextStoreStateMapper::GetNameForContextStoreState(m_state));
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
