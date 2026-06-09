/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/SystemUserJourneyDeletedMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

SystemUserJourneyDeletedMetadata::SystemUserJourneyDeletedMetadata(JsonView jsonValue) { *this = jsonValue; }

SystemUserJourneyDeletedMetadata& SystemUserJourneyDeletedMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("userJourneyName")) {
    m_userJourneyName = jsonValue.GetString("userJourneyName");
    m_userJourneyNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("associatedServicesAtDeletion")) {
    Aws::Utils::Array<JsonView> associatedServicesAtDeletionJsonList = jsonValue.GetArray("associatedServicesAtDeletion");
    for (unsigned associatedServicesAtDeletionIndex = 0;
         associatedServicesAtDeletionIndex < associatedServicesAtDeletionJsonList.GetLength(); ++associatedServicesAtDeletionIndex) {
      m_associatedServicesAtDeletion.push_back(associatedServicesAtDeletionJsonList[associatedServicesAtDeletionIndex].AsObject());
    }
    m_associatedServicesAtDeletionHasBeenSet = true;
  }
  return *this;
}

JsonValue SystemUserJourneyDeletedMetadata::Jsonize() const {
  JsonValue payload;

  if (m_userJourneyNameHasBeenSet) {
    payload.WithString("userJourneyName", m_userJourneyName);
  }

  if (m_associatedServicesAtDeletionHasBeenSet) {
    Aws::Utils::Array<JsonValue> associatedServicesAtDeletionJsonList(m_associatedServicesAtDeletion.size());
    for (unsigned associatedServicesAtDeletionIndex = 0;
         associatedServicesAtDeletionIndex < associatedServicesAtDeletionJsonList.GetLength(); ++associatedServicesAtDeletionIndex) {
      associatedServicesAtDeletionJsonList[associatedServicesAtDeletionIndex].AsObject(
          m_associatedServicesAtDeletion[associatedServicesAtDeletionIndex].Jsonize());
    }
    payload.WithArray("associatedServicesAtDeletion", std::move(associatedServicesAtDeletionJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
