/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/AwsEnrichmentCustomerSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

AwsEnrichmentCustomerSummary::AwsEnrichmentCustomerSummary(JsonView jsonValue) { *this = jsonValue; }

AwsEnrichmentCustomerSummary& AwsEnrichmentCustomerSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Industry")) {
    m_industry = jsonValue.GetString("Industry");
    m_industryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AccountPlanningQualification")) {
    m_accountPlanningQualification = jsonValue.GetString("AccountPlanningQualification");
    m_accountPlanningQualificationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EligiblePrograms")) {
    Aws::Utils::Array<JsonView> eligibleProgramsJsonList = jsonValue.GetArray("EligiblePrograms");
    for (unsigned eligibleProgramsIndex = 0; eligibleProgramsIndex < eligibleProgramsJsonList.GetLength(); ++eligibleProgramsIndex) {
      m_eligiblePrograms.push_back(eligibleProgramsJsonList[eligibleProgramsIndex].AsString());
    }
    m_eligibleProgramsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Geo")) {
    m_geo = jsonValue.GetString("Geo");
    m_geoHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Country")) {
    m_country = jsonValue.GetString("Country");
    m_countryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Segment")) {
    m_segment = jsonValue.GetString("Segment");
    m_segmentHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsEnrichmentCustomerSummary::Jsonize() const {
  JsonValue payload;

  if (m_industryHasBeenSet) {
    payload.WithString("Industry", m_industry);
  }

  if (m_accountPlanningQualificationHasBeenSet) {
    payload.WithString("AccountPlanningQualification", m_accountPlanningQualification);
  }

  if (m_eligibleProgramsHasBeenSet) {
    Aws::Utils::Array<JsonValue> eligibleProgramsJsonList(m_eligiblePrograms.size());
    for (unsigned eligibleProgramsIndex = 0; eligibleProgramsIndex < eligibleProgramsJsonList.GetLength(); ++eligibleProgramsIndex) {
      eligibleProgramsJsonList[eligibleProgramsIndex].AsString(m_eligiblePrograms[eligibleProgramsIndex]);
    }
    payload.WithArray("EligiblePrograms", std::move(eligibleProgramsJsonList));
  }

  if (m_geoHasBeenSet) {
    payload.WithString("Geo", m_geo);
  }

  if (m_countryHasBeenSet) {
    payload.WithString("Country", m_country);
  }

  if (m_segmentHasBeenSet) {
    payload.WithString("Segment", m_segment);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
