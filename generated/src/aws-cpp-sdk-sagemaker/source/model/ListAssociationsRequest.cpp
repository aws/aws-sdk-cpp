/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListAssociationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListAssociationsRequest::ListAssociationsRequest() : 
    m_sourceArnHasBeenSet(false),
    m_destinationArnHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_destinationTypeHasBeenSet(false),
    m_associationType(AssociationEdgeType::NOT_SET),
    m_associationTypeHasBeenSet(false),
    m_createdAfterHasBeenSet(false),
    m_createdBeforeHasBeenSet(false),
    m_sortBy(SortAssociationsBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListAssociationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("SourceArn", m_sourceArn);

  }

  if(m_destinationArnHasBeenSet)
  {
   payload.WithString("DestinationArn", m_destinationArn);

  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", m_sourceType);

  }

  if(m_destinationTypeHasBeenSet)
  {
   payload.WithString("DestinationType", m_destinationType);

  }

  if(m_associationTypeHasBeenSet)
  {
   payload.WithString("AssociationType", AssociationEdgeTypeMapper::GetNameForAssociationEdgeType(m_associationType));
  }

  if(m_createdAfterHasBeenSet)
  {
   payload.WithDouble("CreatedAfter", m_createdAfter.SecondsWithMSPrecision());
  }

  if(m_createdBeforeHasBeenSet)
  {
   payload.WithDouble("CreatedBefore", m_createdBefore.SecondsWithMSPrecision());
  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", SortAssociationsByMapper::GetNameForSortAssociationsBy(m_sortBy));
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

Aws::Http::HeaderValueCollection ListAssociationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListAssociations"));
  return headers;

}




