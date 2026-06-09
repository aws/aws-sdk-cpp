/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/SystemUserJourneyCreatedMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

SystemUserJourneyCreatedMetadata::SystemUserJourneyCreatedMetadata(JsonView jsonValue) { *this = jsonValue; }

SystemUserJourneyCreatedMetadata& SystemUserJourneyCreatedMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("userJourneyName")) {
    m_userJourneyName = jsonValue.GetString("userJourneyName");
    m_userJourneyNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("associatedServices")) {
    Aws::Utils::Array<JsonView> associatedServicesJsonList = jsonValue.GetArray("associatedServices");
    for (unsigned associatedServicesIndex = 0; associatedServicesIndex < associatedServicesJsonList.GetLength();
         ++associatedServicesIndex) {
      m_associatedServices.push_back(associatedServicesJsonList[associatedServicesIndex].AsObject());
    }
    m_associatedServicesHasBeenSet = true;
  }
  return *this;
}

JsonValue SystemUserJourneyCreatedMetadata::Jsonize() const {
  JsonValue payload;

  if (m_userJourneyNameHasBeenSet) {
    payload.WithString("userJourneyName", m_userJourneyName);
  }

  if (m_associatedServicesHasBeenSet) {
    Aws::Utils::Array<JsonValue> associatedServicesJsonList(m_associatedServices.size());
    for (unsigned associatedServicesIndex = 0; associatedServicesIndex < associatedServicesJsonList.GetLength();
         ++associatedServicesIndex) {
      associatedServicesJsonList[associatedServicesIndex].AsObject(m_associatedServices[associatedServicesIndex].Jsonize());
    }
    payload.WithArray("associatedServices", std::move(associatedServicesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
