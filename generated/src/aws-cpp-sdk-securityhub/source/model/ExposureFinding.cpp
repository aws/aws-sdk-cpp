/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/ExposureFinding.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

ExposureFinding::ExposureFinding(JsonView jsonValue) { *this = jsonValue; }

ExposureFinding& ExposureFinding::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MetadataUid")) {
    m_metadataUid = jsonValue.GetString("MetadataUid");
    m_metadataUidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Title")) {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PreviousSeverity")) {
    m_previousSeverity = ExposureSeverityMapper::GetExposureSeverityForName(jsonValue.GetString("PreviousSeverity"));
    m_previousSeverityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProjectedSeverity")) {
    m_projectedSeverity = ExposureSeverityMapper::GetExposureSeverityForName(jsonValue.GetString("ProjectedSeverity"));
    m_projectedSeverityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Impact")) {
    m_impact = ExposureImpactMapper::GetExposureImpactForName(jsonValue.GetString("Impact"));
    m_impactHasBeenSet = true;
  }
  return *this;
}

JsonValue ExposureFinding::Jsonize() const {
  JsonValue payload;

  if (m_metadataUidHasBeenSet) {
    payload.WithString("MetadataUid", m_metadataUid);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("Title", m_title);
  }

  if (m_previousSeverityHasBeenSet) {
    payload.WithString("PreviousSeverity", ExposureSeverityMapper::GetNameForExposureSeverity(m_previousSeverity));
  }

  if (m_projectedSeverityHasBeenSet) {
    payload.WithString("ProjectedSeverity", ExposureSeverityMapper::GetNameForExposureSeverity(m_projectedSeverity));
  }

  if (m_impactHasBeenSet) {
    payload.WithString("Impact", ExposureImpactMapper::GetNameForExposureImpact(m_impact));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
