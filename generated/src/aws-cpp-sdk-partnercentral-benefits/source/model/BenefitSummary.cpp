/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-benefits/model/BenefitSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {

BenefitSummary::BenefitSummary(JsonView jsonValue) { *this = jsonValue; }

BenefitSummary& BenefitSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Catalog")) {
    m_catalog = jsonValue.GetString("Catalog");
    m_catalogHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
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
    m_status = BenefitStatusMapper::GetBenefitStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue BenefitSummary::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_catalogHasBeenSet) {
    payload.WithString("Catalog", m_catalog);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
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
    payload.WithString("Status", BenefitStatusMapper::GetNameForBenefitStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
