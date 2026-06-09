/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/UserJourneyChanges.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

UserJourneyChanges::UserJourneyChanges(JsonView jsonValue) { *this = jsonValue; }

UserJourneyChanges& UserJourneyChanges::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("journeyDescription")) {
    m_journeyDescription = jsonValue.GetObject("journeyDescription");
    m_journeyDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("associatedServices")) {
    m_associatedServices = jsonValue.GetObject("associatedServices");
    m_associatedServicesHasBeenSet = true;
  }
  return *this;
}

JsonValue UserJourneyChanges::Jsonize() const {
  JsonValue payload;

  if (m_journeyDescriptionHasBeenSet) {
    payload.WithObject("journeyDescription", m_journeyDescription.Jsonize());
  }

  if (m_associatedServicesHasBeenSet) {
    payload.WithObject("associatedServices", m_associatedServices.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
