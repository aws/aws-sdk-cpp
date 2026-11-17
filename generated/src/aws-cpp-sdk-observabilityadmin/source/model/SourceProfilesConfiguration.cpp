/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/SourceProfilesConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

SourceProfilesConfiguration::SourceProfilesConfiguration(JsonView jsonValue) { *this = jsonValue; }

SourceProfilesConfiguration& SourceProfilesConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ProfilesSelectionCriteria")) {
    m_profilesSelectionCriteria = jsonValue.GetString("ProfilesSelectionCriteria");
    m_profilesSelectionCriteriaHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceProfilesConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_profilesSelectionCriteriaHasBeenSet) {
    payload.WithString("ProfilesSelectionCriteria", m_profilesSelectionCriteria);
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
