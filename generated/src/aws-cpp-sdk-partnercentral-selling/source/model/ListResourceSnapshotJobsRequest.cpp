/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ListResourceSnapshotJobsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListResourceSnapshotJobsRequest::ListResourceSnapshotJobsRequest() : 
    m_catalogHasBeenSet(false),
    m_engagementIdentifierHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_status(ResourceSnapshotJobStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String ListResourceSnapshotJobsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogHasBeenSet)
  {
   payload.WithString("Catalog", m_catalog);

  }

  if(m_engagementIdentifierHasBeenSet)
  {
   payload.WithString("EngagementIdentifier", m_engagementIdentifier);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_sortHasBeenSet)
  {
   payload.WithObject("Sort", m_sort.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ResourceSnapshotJobStatusMapper::GetNameForResourceSnapshotJobStatus(m_status));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListResourceSnapshotJobsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPartnerCentralSelling.ListResourceSnapshotJobs"));
  return headers;

}




