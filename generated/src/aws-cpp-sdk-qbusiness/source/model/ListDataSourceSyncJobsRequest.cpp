/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ListDataSourceSyncJobsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListDataSourceSyncJobsRequest::ListDataSourceSyncJobsRequest() : 
    m_applicationIdHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_indexIdHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_statusFilter(DataSourceSyncJobStatus::NOT_SET),
    m_statusFilterHasBeenSet(false)
{
}

Aws::String ListDataSourceSyncJobsRequest::SerializePayload() const
{
  return {};
}

void ListDataSourceSyncJobsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_endTimeHasBeenSet)
    {
      ss << m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("endTime", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_startTimeHasBeenSet)
    {
      ss << m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("startTime", ss.str());
      ss.str("");
    }

    if(m_statusFilterHasBeenSet)
    {
      ss << DataSourceSyncJobStatusMapper::GetNameForDataSourceSyncJobStatus(m_statusFilter);
      uri.AddQueryStringParameter("syncStatus", ss.str());
      ss.str("");
    }

}



