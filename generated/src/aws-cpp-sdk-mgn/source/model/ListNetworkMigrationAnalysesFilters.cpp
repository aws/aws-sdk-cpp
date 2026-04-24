/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/ListNetworkMigrationAnalysesFilters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

ListNetworkMigrationAnalysesFilters::ListNetworkMigrationAnalysesFilters(JsonView jsonValue) { *this = jsonValue; }

ListNetworkMigrationAnalysesFilters& ListNetworkMigrationAnalysesFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("jobIDs")) {
    Aws::Utils::Array<JsonView> jobIDsJsonList = jsonValue.GetArray("jobIDs");
    for (unsigned jobIDsIndex = 0; jobIDsIndex < jobIDsJsonList.GetLength(); ++jobIDsIndex) {
      m_jobIDs.push_back(jobIDsJsonList[jobIDsIndex].AsString());
    }
    m_jobIDsHasBeenSet = true;
  }
  return *this;
}

JsonValue ListNetworkMigrationAnalysesFilters::Jsonize() const {
  JsonValue payload;

  if (m_jobIDsHasBeenSet) {
    Aws::Utils::Array<JsonValue> jobIDsJsonList(m_jobIDs.size());
    for (unsigned jobIDsIndex = 0; jobIDsIndex < jobIDsJsonList.GetLength(); ++jobIDsIndex) {
      jobIDsJsonList[jobIDsIndex].AsString(m_jobIDs[jobIDsIndex]);
    }
    payload.WithArray("jobIDs", std::move(jobIDsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
