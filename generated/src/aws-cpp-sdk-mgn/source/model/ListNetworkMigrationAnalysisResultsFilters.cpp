/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/ListNetworkMigrationAnalysisResultsFilters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

ListNetworkMigrationAnalysisResultsFilters::ListNetworkMigrationAnalysisResultsFilters(JsonView jsonValue) { *this = jsonValue; }

ListNetworkMigrationAnalysisResultsFilters& ListNetworkMigrationAnalysisResultsFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("vpcIDs")) {
    Aws::Utils::Array<JsonView> vpcIDsJsonList = jsonValue.GetArray("vpcIDs");
    for (unsigned vpcIDsIndex = 0; vpcIDsIndex < vpcIDsJsonList.GetLength(); ++vpcIDsIndex) {
      m_vpcIDs.push_back(vpcIDsJsonList[vpcIDsIndex].AsString());
    }
    m_vpcIDsHasBeenSet = true;
  }
  return *this;
}

JsonValue ListNetworkMigrationAnalysisResultsFilters::Jsonize() const {
  JsonValue payload;

  if (m_vpcIDsHasBeenSet) {
    Aws::Utils::Array<JsonValue> vpcIDsJsonList(m_vpcIDs.size());
    for (unsigned vpcIDsIndex = 0; vpcIDsIndex < vpcIDsJsonList.GetLength(); ++vpcIDsIndex) {
      vpcIDsJsonList[vpcIDsIndex].AsString(m_vpcIDs[vpcIDsIndex]);
    }
    payload.WithArray("vpcIDs", std::move(vpcIDsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
