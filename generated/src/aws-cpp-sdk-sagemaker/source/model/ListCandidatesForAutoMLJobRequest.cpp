/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListCandidatesForAutoMLJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListCandidatesForAutoMLJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_autoMLJobNameHasBeenSet)
  {
   payload.WithString("AutoMLJobName", m_autoMLJobName);

  }

  if(m_statusEqualsHasBeenSet)
  {
   payload.WithString("StatusEquals", CandidateStatusMapper::GetNameForCandidateStatus(m_statusEquals));
  }

  if(m_candidateNameEqualsHasBeenSet)
  {
   payload.WithString("CandidateNameEquals", m_candidateNameEquals);

  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", AutoMLSortOrderMapper::GetNameForAutoMLSortOrder(m_sortOrder));
  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", CandidateSortByMapper::GetNameForCandidateSortBy(m_sortBy));
  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListCandidatesForAutoMLJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListCandidatesForAutoMLJob"));
  return headers;

}




