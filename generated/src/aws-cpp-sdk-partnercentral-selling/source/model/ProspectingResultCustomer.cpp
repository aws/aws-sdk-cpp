/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/ProspectingResultCustomer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

ProspectingResultCustomer::ProspectingResultCustomer(JsonView jsonValue) { *this = jsonValue; }

ProspectingResultCustomer& ProspectingResultCustomer::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AccountName")) {
    m_accountName = jsonValue.GetString("AccountName");
    m_accountNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Geo")) {
    m_geo = jsonValue.GetString("Geo");
    m_geoHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Region")) {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SubRegion")) {
    m_subRegion = jsonValue.GetString("SubRegion");
    m_subRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Country")) {
    m_country = CountryCodeMapper::GetCountryCodeForName(jsonValue.GetString("Country"));
    m_countryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Industry")) {
    m_industry = IndustryMapper::GetIndustryForName(jsonValue.GetString("Industry"));
    m_industryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SubIndustry")) {
    m_subIndustry = jsonValue.GetString("SubIndustry");
    m_subIndustryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Segment")) {
    m_segment = jsonValue.GetString("Segment");
    m_segmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CompanySize")) {
    m_companySize = jsonValue.GetString("CompanySize");
    m_companySizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EligiblePrograms")) {
    Aws::Utils::Array<JsonView> eligibleProgramsJsonList = jsonValue.GetArray("EligiblePrograms");
    for (unsigned eligibleProgramsIndex = 0; eligibleProgramsIndex < eligibleProgramsJsonList.GetLength(); ++eligibleProgramsIndex) {
      m_eligiblePrograms.push_back(eligibleProgramsJsonList[eligibleProgramsIndex].AsString());
    }
    m_eligibleProgramsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PublicProfileSummary")) {
    m_publicProfileSummary = jsonValue.GetString("PublicProfileSummary");
    m_publicProfileSummaryHasBeenSet = true;
  }
  return *this;
}

JsonValue ProspectingResultCustomer::Jsonize() const {
  JsonValue payload;

  if (m_accountNameHasBeenSet) {
    payload.WithString("AccountName", m_accountName);
  }

  if (m_geoHasBeenSet) {
    payload.WithString("Geo", m_geo);
  }

  if (m_regionHasBeenSet) {
    payload.WithString("Region", m_region);
  }

  if (m_subRegionHasBeenSet) {
    payload.WithString("SubRegion", m_subRegion);
  }

  if (m_countryHasBeenSet) {
    payload.WithString("Country", CountryCodeMapper::GetNameForCountryCode(m_country));
  }

  if (m_industryHasBeenSet) {
    payload.WithString("Industry", IndustryMapper::GetNameForIndustry(m_industry));
  }

  if (m_subIndustryHasBeenSet) {
    payload.WithString("SubIndustry", m_subIndustry);
  }

  if (m_segmentHasBeenSet) {
    payload.WithString("Segment", m_segment);
  }

  if (m_companySizeHasBeenSet) {
    payload.WithString("CompanySize", m_companySize);
  }

  if (m_eligibleProgramsHasBeenSet) {
    Aws::Utils::Array<JsonValue> eligibleProgramsJsonList(m_eligiblePrograms.size());
    for (unsigned eligibleProgramsIndex = 0; eligibleProgramsIndex < eligibleProgramsJsonList.GetLength(); ++eligibleProgramsIndex) {
      eligibleProgramsJsonList[eligibleProgramsIndex].AsString(m_eligiblePrograms[eligibleProgramsIndex]);
    }
    payload.WithArray("EligiblePrograms", std::move(eligibleProgramsJsonList));
  }

  if (m_publicProfileSummaryHasBeenSet) {
    payload.WithString("PublicProfileSummary", m_publicProfileSummary);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
