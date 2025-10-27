/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconvert/model/StartJobsQueryRequest.h>

#include <utility>

using namespace Aws::MediaConvert::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartJobsQueryRequest::SerializePayload() const {
  JsonValue payload;

  if (m_filterListHasBeenSet) {
    Aws::Utils::Array<JsonValue> filterListJsonList(m_filterList.size());
    for (unsigned filterListIndex = 0; filterListIndex < filterListJsonList.GetLength(); ++filterListIndex) {
      filterListJsonList[filterListIndex].AsObject(m_filterList[filterListIndex].Jsonize());
    }
    payload.WithArray("filterList", std::move(filterListJsonList));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  if (m_orderHasBeenSet) {
    payload.WithString("order", OrderMapper::GetNameForOrder(m_order));
  }

  return payload.View().WriteReadable();
}
