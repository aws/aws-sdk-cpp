/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListInferenceExperimentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListInferenceExperimentsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameContainsHasBeenSet)
  {
   payload.WithString("NameContains", m_nameContains);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", InferenceExperimentTypeMapper::GetNameForInferenceExperimentType(m_type));
  }

  if(m_statusEqualsHasBeenSet)
  {
   payload.WithString("StatusEquals", InferenceExperimentStatusMapper::GetNameForInferenceExperimentStatus(m_statusEquals));
  }

  if(m_creationTimeAfterHasBeenSet)
  {
   payload.WithDouble("CreationTimeAfter", m_creationTimeAfter.SecondsWithMSPrecision());
  }

  if(m_creationTimeBeforeHasBeenSet)
  {
   payload.WithDouble("CreationTimeBefore", m_creationTimeBefore.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeAfterHasBeenSet)
  {
   payload.WithDouble("LastModifiedTimeAfter", m_lastModifiedTimeAfter.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeBeforeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTimeBefore", m_lastModifiedTimeBefore.SecondsWithMSPrecision());
  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", SortInferenceExperimentsByMapper::GetNameForSortInferenceExperimentsBy(m_sortBy));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListInferenceExperimentsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListInferenceExperiments"));
  return headers;

}




