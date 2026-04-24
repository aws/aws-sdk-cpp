/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/memorydb/model/DescribeMultiRegionParametersRequest.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeMultiRegionParametersRequest::SerializePayload() const {
  JsonValue payload;

  if (m_multiRegionParameterGroupNameHasBeenSet) {
    payload.WithString("MultiRegionParameterGroupName", m_multiRegionParameterGroupName);
  }

  if (m_sourceHasBeenSet) {
    payload.WithString("Source", m_source);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeMultiRegionParametersRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonMemoryDB.DescribeMultiRegionParameters"));
  return headers;
}
