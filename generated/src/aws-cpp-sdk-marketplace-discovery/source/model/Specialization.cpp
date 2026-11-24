/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/Specialization.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

Specialization::Specialization(JsonView jsonValue) { *this = jsonValue; }

Specialization& Specialization::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("specializationId")) {
    m_specializationId = jsonValue.GetString("specializationId");
    m_specializationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("specializationName")) {
    m_specializationName = jsonValue.GetString("specializationName");
    m_specializationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("specializationTypes")) {
    Aws::Utils::Array<JsonView> specializationTypesJsonList = jsonValue.GetArray("specializationTypes");
    for (unsigned specializationTypesIndex = 0; specializationTypesIndex < specializationTypesJsonList.GetLength();
         ++specializationTypesIndex) {
      m_specializationTypes.push_back(specializationTypesJsonList[specializationTypesIndex].AsObject());
    }
    m_specializationTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("caseStudyIds")) {
    Aws::Utils::Array<JsonView> caseStudyIdsJsonList = jsonValue.GetArray("caseStudyIds");
    for (unsigned caseStudyIdsIndex = 0; caseStudyIdsIndex < caseStudyIdsJsonList.GetLength(); ++caseStudyIdsIndex) {
      m_caseStudyIds.push_back(caseStudyIdsJsonList[caseStudyIdsIndex].AsString());
    }
    m_caseStudyIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue Specialization::Jsonize() const {
  JsonValue payload;

  if (m_specializationIdHasBeenSet) {
    payload.WithString("specializationId", m_specializationId);
  }

  if (m_specializationNameHasBeenSet) {
    payload.WithString("specializationName", m_specializationName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_specializationTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> specializationTypesJsonList(m_specializationTypes.size());
    for (unsigned specializationTypesIndex = 0; specializationTypesIndex < specializationTypesJsonList.GetLength();
         ++specializationTypesIndex) {
      specializationTypesJsonList[specializationTypesIndex].AsObject(m_specializationTypes[specializationTypesIndex].Jsonize());
    }
    payload.WithArray("specializationTypes", std::move(specializationTypesJsonList));
  }

  if (m_caseStudyIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> caseStudyIdsJsonList(m_caseStudyIds.size());
    for (unsigned caseStudyIdsIndex = 0; caseStudyIdsIndex < caseStudyIdsJsonList.GetLength(); ++caseStudyIdsIndex) {
      caseStudyIdsJsonList[caseStudyIdsIndex].AsString(m_caseStudyIds[caseStudyIdsIndex]);
    }
    payload.WithArray("caseStudyIds", std::move(caseStudyIdsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
