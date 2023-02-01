/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/GetDomainStatisticsReportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetDomainStatisticsReportRequest::GetDomainStatisticsReportRequest() : 
    m_domainHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false)
{
}

Aws::String GetDomainStatisticsReportRequest::SerializePayload() const
{
  return {};
}

void GetDomainStatisticsReportRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_startDateHasBeenSet)
    {
      ss << m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("StartDate", ss.str());
      ss.str("");
    }

    if(m_endDateHasBeenSet)
    {
      ss << m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("EndDate", ss.str());
      ss.str("");
    }

}



