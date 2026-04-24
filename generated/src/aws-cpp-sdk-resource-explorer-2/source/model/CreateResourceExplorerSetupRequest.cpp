/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resource-explorer-2/model/CreateResourceExplorerSetupRequest.h>

#include <utility>

using namespace Aws::ResourceExplorer2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateResourceExplorerSetupRequest::SerializePayload() const {
  JsonValue payload;

  if (m_regionListHasBeenSet) {
    Aws::Utils::Array<JsonValue> regionListJsonList(m_regionList.size());
    for (unsigned regionListIndex = 0; regionListIndex < regionListJsonList.GetLength(); ++regionListIndex) {
      regionListJsonList[regionListIndex].AsString(m_regionList[regionListIndex]);
    }
    payload.WithArray("RegionList", std::move(regionListJsonList));
  }

  if (m_aggregatorRegionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> aggregatorRegionsJsonList(m_aggregatorRegions.size());
    for (unsigned aggregatorRegionsIndex = 0; aggregatorRegionsIndex < aggregatorRegionsJsonList.GetLength(); ++aggregatorRegionsIndex) {
      aggregatorRegionsJsonList[aggregatorRegionsIndex].AsString(m_aggregatorRegions[aggregatorRegionsIndex]);
    }
    payload.WithArray("AggregatorRegions", std::move(aggregatorRegionsJsonList));
  }

  if (m_viewNameHasBeenSet) {
    payload.WithString("ViewName", m_viewName);
  }

  return payload.View().WriteReadable();
}
