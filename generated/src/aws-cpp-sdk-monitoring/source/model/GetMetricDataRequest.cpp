/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/GetMetricDataRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

Aws::String GetMetricDataRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetMetricData&";
  if(m_metricDataQueriesHasBeenSet)
  {
    if (m_metricDataQueries.empty())
    {
      ss << "MetricDataQueries=&";
    }
    else
    {
      unsigned metricDataQueriesCount = 1;
      for(auto& item : m_metricDataQueries)
      {
        item.OutputToStream(ss, "MetricDataQueries.member.", metricDataQueriesCount, "");
        metricDataQueriesCount++;
      }
    }
  }

  if(m_startTimeHasBeenSet)
  {
    ss << "StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endTimeHasBeenSet)
  {
    ss << "EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_scanByHasBeenSet)
  {
    ss << "ScanBy=" << StringUtils::URLEncode(ScanByMapper::GetNameForScanBy(m_scanBy)) << "&";
  }

  if(m_maxDatapointsHasBeenSet)
  {
    ss << "MaxDatapoints=" << m_maxDatapoints << "&";
  }

  if(m_labelOptionsHasBeenSet)
  {
    m_labelOptions.OutputToStream(ss, "LabelOptions");
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  GetMetricDataRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
