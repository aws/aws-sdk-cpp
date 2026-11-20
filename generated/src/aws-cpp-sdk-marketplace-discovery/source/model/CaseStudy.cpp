/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/CaseStudy.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

CaseStudy::CaseStudy(JsonView jsonValue) { *this = jsonValue; }

CaseStudy& CaseStudy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("caseStudyId")) {
    m_caseStudyId = jsonValue.GetString("caseStudyId");
    m_caseStudyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("caseStudyName")) {
    m_caseStudyName = jsonValue.GetString("caseStudyName");
    m_caseStudyNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("shortDescription")) {
    m_shortDescription = jsonValue.GetString("shortDescription");
    m_shortDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("engagementDates")) {
    m_engagementDates = jsonValue.GetObject("engagementDates");
    m_engagementDatesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("challenge")) {
    m_challenge = jsonValue.GetString("challenge");
    m_challengeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resolution")) {
    m_resolution = jsonValue.GetString("resolution");
    m_resolutionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("implementationApproach")) {
    m_implementationApproach = jsonValue.GetString("implementationApproach");
    m_implementationApproachHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outcome")) {
    m_outcome = jsonValue.GetString("outcome");
    m_outcomeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resources")) {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("resources");
    for (unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex) {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsObject());
    }
    m_resourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue CaseStudy::Jsonize() const {
  JsonValue payload;

  if (m_caseStudyIdHasBeenSet) {
    payload.WithString("caseStudyId", m_caseStudyId);
  }

  if (m_caseStudyNameHasBeenSet) {
    payload.WithString("caseStudyName", m_caseStudyName);
  }

  if (m_shortDescriptionHasBeenSet) {
    payload.WithString("shortDescription", m_shortDescription);
  }

  if (m_engagementDatesHasBeenSet) {
    payload.WithObject("engagementDates", m_engagementDates.Jsonize());
  }

  if (m_challengeHasBeenSet) {
    payload.WithString("challenge", m_challenge);
  }

  if (m_resolutionHasBeenSet) {
    payload.WithString("resolution", m_resolution);
  }

  if (m_implementationApproachHasBeenSet) {
    payload.WithString("implementationApproach", m_implementationApproach);
  }

  if (m_outcomeHasBeenSet) {
    payload.WithString("outcome", m_outcome);
  }

  if (m_resourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
    for (unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex) {
      resourcesJsonList[resourcesIndex].AsObject(m_resources[resourcesIndex].Jsonize());
    }
    payload.WithArray("resources", std::move(resourcesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
