/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-benefits/model/BenefitApplicationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {

BenefitApplicationSummary::BenefitApplicationSummary(JsonView jsonValue) { *this = jsonValue; }

BenefitApplicationSummary& BenefitApplicationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Catalog")) {
    m_catalog = jsonValue.GetString("Catalog");
    m_catalogHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BenefitId")) {
    m_benefitId = jsonValue.GetString("BenefitId");
    m_benefitIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Programs")) {
    Aws::Utils::Array<JsonView> programsJsonList = jsonValue.GetArray("Programs");
    for (unsigned programsIndex = 0; programsIndex < programsJsonList.GetLength(); ++programsIndex) {
      m_programs.push_back(programsJsonList[programsIndex].AsString());
    }
    m_programsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FulfillmentTypes")) {
    Aws::Utils::Array<JsonView> fulfillmentTypesJsonList = jsonValue.GetArray("FulfillmentTypes");
    for (unsigned fulfillmentTypesIndex = 0; fulfillmentTypesIndex < fulfillmentTypesJsonList.GetLength(); ++fulfillmentTypesIndex) {
      m_fulfillmentTypes.push_back(
          FulfillmentTypeMapper::GetFulfillmentTypeForName(fulfillmentTypesJsonList[fulfillmentTypesIndex].AsString()));
    }
    m_fulfillmentTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = BenefitApplicationStatusMapper::GetBenefitApplicationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Stage")) {
    m_stage = jsonValue.GetString("Stage");
    m_stageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetString("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BenefitApplicationDetails")) {
    Aws::Map<Aws::String, JsonView> benefitApplicationDetailsJsonMap = jsonValue.GetObject("BenefitApplicationDetails").GetAllObjects();
    for (auto& benefitApplicationDetailsItem : benefitApplicationDetailsJsonMap) {
      m_benefitApplicationDetails[benefitApplicationDetailsItem.first] = benefitApplicationDetailsItem.second.AsString();
    }
    m_benefitApplicationDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssociatedResources")) {
    Aws::Utils::Array<JsonView> associatedResourcesJsonList = jsonValue.GetArray("AssociatedResources");
    for (unsigned associatedResourcesIndex = 0; associatedResourcesIndex < associatedResourcesJsonList.GetLength();
         ++associatedResourcesIndex) {
      m_associatedResources.push_back(associatedResourcesJsonList[associatedResourcesIndex].AsString());
    }
    m_associatedResourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue BenefitApplicationSummary::Jsonize() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("Catalog", m_catalog);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_benefitIdHasBeenSet) {
    payload.WithString("BenefitId", m_benefitId);
  }

  if (m_programsHasBeenSet) {
    Aws::Utils::Array<JsonValue> programsJsonList(m_programs.size());
    for (unsigned programsIndex = 0; programsIndex < programsJsonList.GetLength(); ++programsIndex) {
      programsJsonList[programsIndex].AsString(m_programs[programsIndex]);
    }
    payload.WithArray("Programs", std::move(programsJsonList));
  }

  if (m_fulfillmentTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> fulfillmentTypesJsonList(m_fulfillmentTypes.size());
    for (unsigned fulfillmentTypesIndex = 0; fulfillmentTypesIndex < fulfillmentTypesJsonList.GetLength(); ++fulfillmentTypesIndex) {
      fulfillmentTypesJsonList[fulfillmentTypesIndex].AsString(
          FulfillmentTypeMapper::GetNameForFulfillmentType(m_fulfillmentTypes[fulfillmentTypesIndex]));
    }
    payload.WithArray("FulfillmentTypes", std::move(fulfillmentTypesJsonList));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", BenefitApplicationStatusMapper::GetNameForBenefitApplicationStatus(m_status));
  }

  if (m_stageHasBeenSet) {
    payload.WithString("Stage", m_stage);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("CreatedAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("UpdatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_benefitApplicationDetailsHasBeenSet) {
    JsonValue benefitApplicationDetailsJsonMap;
    for (auto& benefitApplicationDetailsItem : m_benefitApplicationDetails) {
      benefitApplicationDetailsJsonMap.WithString(benefitApplicationDetailsItem.first, benefitApplicationDetailsItem.second);
    }
    payload.WithObject("BenefitApplicationDetails", std::move(benefitApplicationDetailsJsonMap));
  }

  if (m_associatedResourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> associatedResourcesJsonList(m_associatedResources.size());
    for (unsigned associatedResourcesIndex = 0; associatedResourcesIndex < associatedResourcesJsonList.GetLength();
         ++associatedResourcesIndex) {
      associatedResourcesJsonList[associatedResourcesIndex].AsString(m_associatedResources[associatedResourcesIndex]);
    }
    payload.WithArray("AssociatedResources", std::move(associatedResourcesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
