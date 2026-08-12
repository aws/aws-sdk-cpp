/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/AggregationConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

AggregationConfiguration::AggregationConfiguration(JsonView jsonValue) { *this = jsonValue; }

AggregationConfiguration& AggregationConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("regions")) {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("regions");
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accessRoleArn")) {
    m_accessRoleArn = jsonValue.GetString("accessRoleArn");
    m_accessRoleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AggregationConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_regionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
    }
    payload.WithArray("regions", std::move(regionsJsonList));
  }

  if (m_accessRoleArnHasBeenSet) {
    payload.WithString("accessRoleArn", m_accessRoleArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
