/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/OpportunitySearchProject.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

OpportunitySearchProject::OpportunitySearchProject(JsonView jsonValue) { *this = jsonValue; }

OpportunitySearchProject& OpportunitySearchProject::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Title")) {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ApnPrograms")) {
    Aws::Utils::Array<JsonView> apnProgramsJsonList = jsonValue.GetArray("ApnPrograms");
    for (unsigned apnProgramsIndex = 0; apnProgramsIndex < apnProgramsJsonList.GetLength(); ++apnProgramsIndex) {
      m_apnPrograms.push_back(apnProgramsJsonList[apnProgramsIndex].AsString());
    }
    m_apnProgramsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpectedCustomerSpend")) {
    Aws::Utils::Array<JsonView> expectedCustomerSpendJsonList = jsonValue.GetArray("ExpectedCustomerSpend");
    for (unsigned expectedCustomerSpendIndex = 0; expectedCustomerSpendIndex < expectedCustomerSpendJsonList.GetLength();
         ++expectedCustomerSpendIndex) {
      m_expectedCustomerSpend.push_back(expectedCustomerSpendJsonList[expectedCustomerSpendIndex].AsObject());
    }
    m_expectedCustomerSpendHasBeenSet = true;
  }
  return *this;
}

JsonValue OpportunitySearchProject::Jsonize() const {
  JsonValue payload;

  if (m_titleHasBeenSet) {
    payload.WithString("Title", m_title);
  }

  if (m_apnProgramsHasBeenSet) {
    Aws::Utils::Array<JsonValue> apnProgramsJsonList(m_apnPrograms.size());
    for (unsigned apnProgramsIndex = 0; apnProgramsIndex < apnProgramsJsonList.GetLength(); ++apnProgramsIndex) {
      apnProgramsJsonList[apnProgramsIndex].AsString(m_apnPrograms[apnProgramsIndex]);
    }
    payload.WithArray("ApnPrograms", std::move(apnProgramsJsonList));
  }

  if (m_expectedCustomerSpendHasBeenSet) {
    Aws::Utils::Array<JsonValue> expectedCustomerSpendJsonList(m_expectedCustomerSpend.size());
    for (unsigned expectedCustomerSpendIndex = 0; expectedCustomerSpendIndex < expectedCustomerSpendJsonList.GetLength();
         ++expectedCustomerSpendIndex) {
      expectedCustomerSpendJsonList[expectedCustomerSpendIndex].AsObject(m_expectedCustomerSpend[expectedCustomerSpendIndex].Jsonize());
    }
    payload.WithArray("ExpectedCustomerSpend", std::move(expectedCustomerSpendJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
