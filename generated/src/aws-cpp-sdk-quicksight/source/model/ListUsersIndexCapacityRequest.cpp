/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ListUsersIndexCapacityRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListUsersIndexCapacityRequest::SerializePayload() const {
  JsonValue payload;

  if (m_namespaceHasBeenSet) {
    payload.WithString("namespace", m_namespace);
  }

  if (m_filtersHasBeenSet) {
    Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
    for (unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex) {
      filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
    }
    payload.WithArray("filters", std::move(filtersJsonList));
  }

  if (m_sortByHasBeenSet) {
    payload.WithString("sortBy", UserIndexCapacitySortByMapper::GetNameForUserIndexCapacitySortBy(m_sortBy));
  }

  if (m_sortOrderHasBeenSet) {
    payload.WithString("sortOrder", UserIndexCapacitySortOrderMapper::GetNameForUserIndexCapacitySortOrder(m_sortOrder));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}
