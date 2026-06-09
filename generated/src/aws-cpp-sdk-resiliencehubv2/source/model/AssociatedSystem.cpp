/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/AssociatedSystem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

AssociatedSystem::AssociatedSystem(JsonView jsonValue) { *this = jsonValue; }

AssociatedSystem& AssociatedSystem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("systemArn")) {
    m_systemArn = jsonValue.GetString("systemArn");
    m_systemArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("systemName")) {
    m_systemName = jsonValue.GetString("systemName");
    m_systemNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userJourneyIds")) {
    Aws::Utils::Array<JsonView> userJourneyIdsJsonList = jsonValue.GetArray("userJourneyIds");
    for (unsigned userJourneyIdsIndex = 0; userJourneyIdsIndex < userJourneyIdsJsonList.GetLength(); ++userJourneyIdsIndex) {
      m_userJourneyIds.push_back(userJourneyIdsJsonList[userJourneyIdsIndex].AsString());
    }
    m_userJourneyIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue AssociatedSystem::Jsonize() const {
  JsonValue payload;

  if (m_systemArnHasBeenSet) {
    payload.WithString("systemArn", m_systemArn);
  }

  if (m_systemNameHasBeenSet) {
    payload.WithString("systemName", m_systemName);
  }

  if (m_userJourneyIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> userJourneyIdsJsonList(m_userJourneyIds.size());
    for (unsigned userJourneyIdsIndex = 0; userJourneyIdsIndex < userJourneyIdsJsonList.GetLength(); ++userJourneyIdsIndex) {
      userJourneyIdsJsonList[userJourneyIdsIndex].AsString(m_userJourneyIds[userJourneyIdsIndex]);
    }
    payload.WithArray("userJourneyIds", std::move(userJourneyIdsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
