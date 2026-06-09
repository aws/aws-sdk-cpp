/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/ServiceAchievabilityUpdatedMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

ServiceAchievabilityUpdatedMetadata::ServiceAchievabilityUpdatedMetadata(JsonView jsonValue) { *this = jsonValue; }

ServiceAchievabilityUpdatedMetadata& ServiceAchievabilityUpdatedMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("assessmentId")) {
    m_assessmentId = jsonValue.GetString("assessmentId");
    m_assessmentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availabilitySlo")) {
    m_availabilitySlo = jsonValue.GetString("availabilitySlo");
    m_availabilitySloHasBeenSet = true;
  }
  if (jsonValue.ValueExists("multiAzRtoRpo")) {
    m_multiAzRtoRpo = jsonValue.GetString("multiAzRtoRpo");
    m_multiAzRtoRpoHasBeenSet = true;
  }
  if (jsonValue.ValueExists("multiRegionRtoRpo")) {
    m_multiRegionRtoRpo = jsonValue.GetString("multiRegionRtoRpo");
    m_multiRegionRtoRpoHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceAchievabilityUpdatedMetadata::Jsonize() const {
  JsonValue payload;

  if (m_assessmentIdHasBeenSet) {
    payload.WithString("assessmentId", m_assessmentId);
  }

  if (m_availabilitySloHasBeenSet) {
    payload.WithString("availabilitySlo", m_availabilitySlo);
  }

  if (m_multiAzRtoRpoHasBeenSet) {
    payload.WithString("multiAzRtoRpo", m_multiAzRtoRpo);
  }

  if (m_multiRegionRtoRpoHasBeenSet) {
    payload.WithString("multiRegionRtoRpo", m_multiRegionRtoRpo);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
