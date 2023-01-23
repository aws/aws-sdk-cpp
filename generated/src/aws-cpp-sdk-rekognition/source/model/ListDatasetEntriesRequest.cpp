/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ListDatasetEntriesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListDatasetEntriesRequest::ListDatasetEntriesRequest() : 
    m_datasetArnHasBeenSet(false),
    m_containsLabelsHasBeenSet(false),
    m_labeled(false),
    m_labeledHasBeenSet(false),
    m_sourceRefContainsHasBeenSet(false),
    m_hasErrors(false),
    m_hasErrorsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListDatasetEntriesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_datasetArnHasBeenSet)
  {
   payload.WithString("DatasetArn", m_datasetArn);

  }

  if(m_containsLabelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containsLabelsJsonList(m_containsLabels.size());
   for(unsigned containsLabelsIndex = 0; containsLabelsIndex < containsLabelsJsonList.GetLength(); ++containsLabelsIndex)
   {
     containsLabelsJsonList[containsLabelsIndex].AsString(m_containsLabels[containsLabelsIndex]);
   }
   payload.WithArray("ContainsLabels", std::move(containsLabelsJsonList));

  }

  if(m_labeledHasBeenSet)
  {
   payload.WithBool("Labeled", m_labeled);

  }

  if(m_sourceRefContainsHasBeenSet)
  {
   payload.WithString("SourceRefContains", m_sourceRefContains);

  }

  if(m_hasErrorsHasBeenSet)
  {
   payload.WithBool("HasErrors", m_hasErrors);

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

Aws::Http::HeaderValueCollection ListDatasetEntriesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.ListDatasetEntries"));
  return headers;

}




