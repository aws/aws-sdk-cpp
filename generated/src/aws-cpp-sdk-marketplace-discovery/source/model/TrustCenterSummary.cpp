/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/TrustCenterSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

TrustCenterSummary::TrustCenterSummary(JsonView jsonValue) { *this = jsonValue; }

TrustCenterSummary& TrustCenterSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceSummaries")) {
    Aws::Utils::Array<JsonView> sourceSummariesJsonList = jsonValue.GetArray("sourceSummaries");
    for (unsigned sourceSummariesIndex = 0; sourceSummariesIndex < sourceSummariesJsonList.GetLength(); ++sourceSummariesIndex) {
      m_sourceSummaries.push_back(sourceSummariesJsonList[sourceSummariesIndex].AsObject());
    }
    m_sourceSummariesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("certificationSummaries")) {
    Aws::Utils::Array<JsonView> certificationSummariesJsonList = jsonValue.GetArray("certificationSummaries");
    for (unsigned certificationSummariesIndex = 0; certificationSummariesIndex < certificationSummariesJsonList.GetLength();
         ++certificationSummariesIndex) {
      m_certificationSummaries.push_back(certificationSummariesJsonList[certificationSummariesIndex].AsObject());
    }
    m_certificationSummariesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalCertificationCount")) {
    m_totalCertificationCount = jsonValue.GetInt64("totalCertificationCount");
    m_totalCertificationCountHasBeenSet = true;
  }
  return *this;
}

JsonValue TrustCenterSummary::Jsonize() const {
  JsonValue payload;

  if (m_sourceSummariesHasBeenSet) {
    Aws::Utils::Array<JsonValue> sourceSummariesJsonList(m_sourceSummaries.size());
    for (unsigned sourceSummariesIndex = 0; sourceSummariesIndex < sourceSummariesJsonList.GetLength(); ++sourceSummariesIndex) {
      sourceSummariesJsonList[sourceSummariesIndex].AsObject(m_sourceSummaries[sourceSummariesIndex].Jsonize());
    }
    payload.WithArray("sourceSummaries", std::move(sourceSummariesJsonList));
  }

  if (m_certificationSummariesHasBeenSet) {
    Aws::Utils::Array<JsonValue> certificationSummariesJsonList(m_certificationSummaries.size());
    for (unsigned certificationSummariesIndex = 0; certificationSummariesIndex < certificationSummariesJsonList.GetLength();
         ++certificationSummariesIndex) {
      certificationSummariesJsonList[certificationSummariesIndex].AsObject(m_certificationSummaries[certificationSummariesIndex].Jsonize());
    }
    payload.WithArray("certificationSummaries", std::move(certificationSummariesJsonList));
  }

  if (m_totalCertificationCountHasBeenSet) {
    payload.WithInt64("totalCertificationCount", m_totalCertificationCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
