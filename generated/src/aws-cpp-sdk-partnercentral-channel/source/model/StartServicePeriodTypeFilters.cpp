/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/StartServicePeriodTypeFilters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

StartServicePeriodTypeFilters::StartServicePeriodTypeFilters(JsonView jsonValue) { *this = jsonValue; }

StartServicePeriodTypeFilters& StartServicePeriodTypeFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("servicePeriodTypes")) {
    Aws::Utils::Array<JsonView> servicePeriodTypesJsonList = jsonValue.GetArray("servicePeriodTypes");
    for (unsigned servicePeriodTypesIndex = 0; servicePeriodTypesIndex < servicePeriodTypesJsonList.GetLength();
         ++servicePeriodTypesIndex) {
      m_servicePeriodTypes.push_back(
          ServicePeriodTypeMapper::GetServicePeriodTypeForName(servicePeriodTypesJsonList[servicePeriodTypesIndex].AsString()));
    }
    m_servicePeriodTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue StartServicePeriodTypeFilters::Jsonize() const {
  JsonValue payload;

  if (m_servicePeriodTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> servicePeriodTypesJsonList(m_servicePeriodTypes.size());
    for (unsigned servicePeriodTypesIndex = 0; servicePeriodTypesIndex < servicePeriodTypesJsonList.GetLength();
         ++servicePeriodTypesIndex) {
      servicePeriodTypesJsonList[servicePeriodTypesIndex].AsString(
          ServicePeriodTypeMapper::GetNameForServicePeriodType(m_servicePeriodTypes[servicePeriodTypesIndex]));
    }
    payload.WithArray("servicePeriodTypes", std::move(servicePeriodTypesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
