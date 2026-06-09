/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/socialmessaging/model/MetaFlowHealthStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SocialMessaging {
namespace Model {

MetaFlowHealthStatus::MetaFlowHealthStatus(JsonView jsonValue) { *this = jsonValue; }

MetaFlowHealthStatus& MetaFlowHealthStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("canSendMessage")) {
    m_canSendMessage = jsonValue.GetString("canSendMessage");
    m_canSendMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("entities")) {
    Aws::Utils::Array<JsonView> entitiesJsonList = jsonValue.GetArray("entities");
    for (unsigned entitiesIndex = 0; entitiesIndex < entitiesJsonList.GetLength(); ++entitiesIndex) {
      m_entities.push_back(entitiesJsonList[entitiesIndex].AsObject());
    }
    m_entitiesHasBeenSet = true;
  }
  return *this;
}

JsonValue MetaFlowHealthStatus::Jsonize() const {
  JsonValue payload;

  if (m_canSendMessageHasBeenSet) {
    payload.WithString("canSendMessage", m_canSendMessage);
  }

  if (m_entitiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> entitiesJsonList(m_entities.size());
    for (unsigned entitiesIndex = 0; entitiesIndex < entitiesJsonList.GetLength(); ++entitiesIndex) {
      entitiesJsonList[entitiesIndex].AsObject(m_entities[entitiesIndex].Jsonize());
    }
    payload.WithArray("entities", std::move(entitiesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
