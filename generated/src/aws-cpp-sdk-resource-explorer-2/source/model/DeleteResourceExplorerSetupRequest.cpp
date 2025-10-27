/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resource-explorer-2/model/DeleteResourceExplorerSetupRequest.h>

#include <utility>

using namespace Aws::ResourceExplorer2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteResourceExplorerSetupRequest::SerializePayload() const {
  JsonValue payload;

  if (m_regionListHasBeenSet) {
    Aws::Utils::Array<JsonValue> regionListJsonList(m_regionList.size());
    for (unsigned regionListIndex = 0; regionListIndex < regionListJsonList.GetLength(); ++regionListIndex) {
      regionListJsonList[regionListIndex].AsString(m_regionList[regionListIndex]);
    }
    payload.WithArray("RegionList", std::move(regionListJsonList));
  }

  if (m_deleteInAllRegionsHasBeenSet) {
    payload.WithBool("DeleteInAllRegions", m_deleteInAllRegions);
  }

  return payload.View().WriteReadable();
}
