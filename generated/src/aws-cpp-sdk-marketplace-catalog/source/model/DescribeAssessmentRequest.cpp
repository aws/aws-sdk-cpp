/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/DescribeAssessmentRequest.h>

#include <utility>

using namespace Aws::MarketplaceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeAssessmentRequest::SerializePayload() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("Catalog", m_catalog);
  }

  if (m_assessmentIdentifierHasBeenSet) {
    payload.WithString("AssessmentIdentifier", m_assessmentIdentifier);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}
