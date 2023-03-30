/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/GetConsolidatedReportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetConsolidatedReportRequest::GetConsolidatedReportRequest() : 
    m_format(ReportFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_includeSharedResources(false),
    m_includeSharedResourcesHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String GetConsolidatedReportRequest::SerializePayload() const
{
  return {};
}

void GetConsolidatedReportRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_formatHasBeenSet)
    {
      ss << ReportFormatMapper::GetNameForReportFormat(m_format);
      uri.AddQueryStringParameter("Format", ss.str());
      ss.str("");
    }

    if(m_includeSharedResourcesHasBeenSet)
    {
      ss << m_includeSharedResources;
      uri.AddQueryStringParameter("IncludeSharedResources", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("MaxResults", ss.str());
      ss.str("");
    }

}



