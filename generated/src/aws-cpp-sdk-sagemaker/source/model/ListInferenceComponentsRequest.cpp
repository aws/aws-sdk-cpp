/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListInferenceComponentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListInferenceComponentsRequest::ListInferenceComponentsRequest() : 
    m_sortBy(InferenceComponentSortKey::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(OrderKey::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nameContainsHasBeenSet(false),
    m_creationTimeBeforeHasBeenSet(false),
    m_creationTimeAfterHasBeenSet(false),
    m_lastModifiedTimeBeforeHasBeenSet(false),
    m_lastModifiedTimeAfterHasBeenSet(false),
    m_statusEquals(InferenceComponentStatus::NOT_SET),
    m_statusEqualsHasBeenSet(false),
    m_endpointNameEqualsHasBeenSet(false),
    m_variantNameEqualsHasBeenSet(false)
{
}

Aws::String ListInferenceComponentsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", InferenceComponentSortKeyMapper::GetNameForInferenceComponentSortKey(m_sortBy));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", OrderKeyMapper::GetNameForOrderKey(m_sortOrder));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nameContainsHasBeenSet)
  {
   payload.WithString("NameContains", m_nameContains);

  }

  if(m_creationTimeBeforeHasBeenSet)
  {
   payload.WithDouble("CreationTimeBefore", m_creationTimeBefore.SecondsWithMSPrecision());
  }

  if(m_creationTimeAfterHasBeenSet)
  {
   payload.WithDouble("CreationTimeAfter", m_creationTimeAfter.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeBeforeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTimeBefore", m_lastModifiedTimeBefore.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeAfterHasBeenSet)
  {
   payload.WithDouble("LastModifiedTimeAfter", m_lastModifiedTimeAfter.SecondsWithMSPrecision());
  }

  if(m_statusEqualsHasBeenSet)
  {
   payload.WithString("StatusEquals", InferenceComponentStatusMapper::GetNameForInferenceComponentStatus(m_statusEquals));
  }

  if(m_endpointNameEqualsHasBeenSet)
  {
   payload.WithString("EndpointNameEquals", m_endpointNameEquals);

  }

  if(m_variantNameEqualsHasBeenSet)
  {
   payload.WithString("VariantNameEquals", m_variantNameEquals);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListInferenceComponentsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListInferenceComponents"));
  return headers;

}




