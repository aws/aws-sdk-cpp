/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/SystemUserJourneyUpdatedMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

SystemUserJourneyUpdatedMetadata::SystemUserJourneyUpdatedMetadata(JsonView jsonValue) { *this = jsonValue; }

SystemUserJourneyUpdatedMetadata& SystemUserJourneyUpdatedMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("userJourneyName")) {
    m_userJourneyName = jsonValue.GetString("userJourneyName");
    m_userJourneyNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("changes")) {
    m_changes = jsonValue.GetObject("changes");
    m_changesHasBeenSet = true;
  }
  return *this;
}

JsonValue SystemUserJourneyUpdatedMetadata::Jsonize() const {
  JsonValue payload;

  if (m_userJourneyNameHasBeenSet) {
    payload.WithString("userJourneyName", m_userJourneyName);
  }

  if (m_changesHasBeenSet) {
    payload.WithObject("changes", m_changes.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
