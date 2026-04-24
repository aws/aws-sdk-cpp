/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/TableReplicationRule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

TableReplicationRule::TableReplicationRule(JsonView jsonValue) { *this = jsonValue; }

TableReplicationRule& TableReplicationRule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("destinations")) {
    Aws::Utils::Array<JsonView> destinationsJsonList = jsonValue.GetArray("destinations");
    for (unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex) {
      m_destinations.push_back(destinationsJsonList[destinationsIndex].AsObject());
    }
    m_destinationsHasBeenSet = true;
  }
  return *this;
}

JsonValue TableReplicationRule::Jsonize() const {
  JsonValue payload;

  if (m_destinationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> destinationsJsonList(m_destinations.size());
    for (unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex) {
      destinationsJsonList[destinationsIndex].AsObject(m_destinations[destinationsIndex].Jsonize());
    }
    payload.WithArray("destinations", std::move(destinationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
