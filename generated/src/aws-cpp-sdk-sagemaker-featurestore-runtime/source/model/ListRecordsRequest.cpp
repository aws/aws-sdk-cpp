/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker-featurestore-runtime/model/ListRecordsRequest.h>

#include <utility>

using namespace Aws::SageMakerFeatureStoreRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListRecordsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  if (m_includeSoftDeletedRecordsHasBeenSet) {
    payload.WithBool("IncludeSoftDeletedRecords", m_includeSoftDeletedRecords);
  }

  return payload.View().WriteReadable();
}
