/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/ListNetworkMigrationMapperSegmentsFilters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

ListNetworkMigrationMapperSegmentsFilters::ListNetworkMigrationMapperSegmentsFilters(JsonView jsonValue) { *this = jsonValue; }

ListNetworkMigrationMapperSegmentsFilters& ListNetworkMigrationMapperSegmentsFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("segmentIDs")) {
    Aws::Utils::Array<JsonView> segmentIDsJsonList = jsonValue.GetArray("segmentIDs");
    for (unsigned segmentIDsIndex = 0; segmentIDsIndex < segmentIDsJsonList.GetLength(); ++segmentIDsIndex) {
      m_segmentIDs.push_back(segmentIDsJsonList[segmentIDsIndex].AsString());
    }
    m_segmentIDsHasBeenSet = true;
  }
  return *this;
}

JsonValue ListNetworkMigrationMapperSegmentsFilters::Jsonize() const {
  JsonValue payload;

  if (m_segmentIDsHasBeenSet) {
    Aws::Utils::Array<JsonValue> segmentIDsJsonList(m_segmentIDs.size());
    for (unsigned segmentIDsIndex = 0; segmentIDsIndex < segmentIDsJsonList.GetLength(); ++segmentIDsIndex) {
      segmentIDsJsonList[segmentIDsIndex].AsString(m_segmentIDs[segmentIDsIndex]);
    }
    payload.WithArray("segmentIDs", std::move(segmentIDsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
