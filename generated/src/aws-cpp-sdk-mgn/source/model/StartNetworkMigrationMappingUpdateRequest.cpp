/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/StartNetworkMigrationMappingUpdateRequest.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartNetworkMigrationMappingUpdateRequest::SerializePayload() const {
  JsonValue payload;

  if (m_networkMigrationExecutionIDHasBeenSet) {
    payload.WithString("networkMigrationExecutionID", m_networkMigrationExecutionID);
  }

  if (m_networkMigrationDefinitionIDHasBeenSet) {
    payload.WithString("networkMigrationDefinitionID", m_networkMigrationDefinitionID);
  }

  if (m_constructsHasBeenSet) {
    Aws::Utils::Array<JsonValue> constructsJsonList(m_constructs.size());
    for (unsigned constructsIndex = 0; constructsIndex < constructsJsonList.GetLength(); ++constructsIndex) {
      constructsJsonList[constructsIndex].AsObject(m_constructs[constructsIndex].Jsonize());
    }
    payload.WithArray("constructs", std::move(constructsJsonList));
  }

  if (m_segmentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> segmentsJsonList(m_segments.size());
    for (unsigned segmentsIndex = 0; segmentsIndex < segmentsJsonList.GetLength(); ++segmentsIndex) {
      segmentsJsonList[segmentsIndex].AsObject(m_segments[segmentsIndex].Jsonize());
    }
    payload.WithArray("segments", std::move(segmentsJsonList));
  }

  return payload.View().WriteReadable();
}
