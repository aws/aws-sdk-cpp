/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/ListAssessmentsRequest.h>

#include <utility>

using namespace Aws::MarketplaceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListAssessmentsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("Catalog", m_catalog);
  }

  if (m_frameworkIdHasBeenSet) {
    payload.WithString("FrameworkId", m_frameworkId);
  }

  if (m_assessmentTargetFilterHasBeenSet) {
    payload.WithObject("AssessmentTargetFilter", m_assessmentTargetFilter.Jsonize());
  }

  if (m_frameworkFiltersHasBeenSet) {
    payload.WithObject("FrameworkFilters", m_frameworkFilters.Jsonize());
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}
