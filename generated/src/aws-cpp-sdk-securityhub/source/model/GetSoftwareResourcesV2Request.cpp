/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/GetSoftwareResourcesV2Request.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetSoftwareResourcesV2Request::SerializePayload() const {
  JsonValue payload;

  if (m_packageNameHasBeenSet) {
    payload.WithString("PackageName", m_packageName);
  }

  if (m_packageTypeHasBeenSet) {
    payload.WithString("PackageType", m_packageType);
  }

  if (m_packageVersionHasBeenSet) {
    payload.WithString("PackageVersion", m_packageVersion);
  }

  if (m_filtersHasBeenSet) {
    payload.WithObject("Filters", m_filters.Jsonize());
  }

  if (m_scopesHasBeenSet) {
    payload.WithObject("Scopes", m_scopes.Jsonize());
  }

  if (m_sortCriteriaHasBeenSet) {
    Aws::Utils::Array<JsonValue> sortCriteriaJsonList(m_sortCriteria.size());
    for (unsigned sortCriteriaIndex = 0; sortCriteriaIndex < sortCriteriaJsonList.GetLength(); ++sortCriteriaIndex) {
      sortCriteriaJsonList[sortCriteriaIndex].AsObject(m_sortCriteria[sortCriteriaIndex].Jsonize());
    }
    payload.WithArray("SortCriteria", std::move(sortCriteriaJsonList));
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  return payload.View().WriteReadable();
}
