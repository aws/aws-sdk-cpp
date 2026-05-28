/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/SystemServiceAssociatedMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

SystemServiceAssociatedMetadata::SystemServiceAssociatedMetadata(JsonView jsonValue) { *this = jsonValue; }

SystemServiceAssociatedMetadata& SystemServiceAssociatedMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("serviceName")) {
    m_serviceName = jsonValue.GetString("serviceName");
    m_serviceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceArn")) {
    m_serviceArn = jsonValue.GetString("serviceArn");
    m_serviceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userJourneys")) {
    Aws::Utils::Array<JsonView> userJourneysJsonList = jsonValue.GetArray("userJourneys");
    for (unsigned userJourneysIndex = 0; userJourneysIndex < userJourneysJsonList.GetLength(); ++userJourneysIndex) {
      m_userJourneys.push_back(userJourneysJsonList[userJourneysIndex].AsString());
    }
    m_userJourneysHasBeenSet = true;
  }
  return *this;
}

JsonValue SystemServiceAssociatedMetadata::Jsonize() const {
  JsonValue payload;

  if (m_serviceNameHasBeenSet) {
    payload.WithString("serviceName", m_serviceName);
  }

  if (m_serviceArnHasBeenSet) {
    payload.WithString("serviceArn", m_serviceArn);
  }

  if (m_userJourneysHasBeenSet) {
    Aws::Utils::Array<JsonValue> userJourneysJsonList(m_userJourneys.size());
    for (unsigned userJourneysIndex = 0; userJourneysIndex < userJourneysJsonList.GetLength(); ++userJourneysIndex) {
      userJourneysJsonList[userJourneysIndex].AsString(m_userJourneys[userJourneysIndex]);
    }
    payload.WithArray("userJourneys", std::move(userJourneysJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
