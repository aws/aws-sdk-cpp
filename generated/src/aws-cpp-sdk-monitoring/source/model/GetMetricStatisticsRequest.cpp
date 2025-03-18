/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/GetMetricStatisticsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

Aws::String GetMetricStatisticsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetMetricStatistics&";
  if(m_namespaceHasBeenSet)
  {
    ss << "Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  }

  if(m_metricNameHasBeenSet)
  {
    ss << "MetricName=" << StringUtils::URLEncode(m_metricName.c_str()) << "&";
  }

  if(m_dimensionsHasBeenSet)
  {
    if (m_dimensions.empty())
    {
      ss << "Dimensions=&";
    }
    else
    {
      unsigned dimensionsCount = 1;
      for(auto& item : m_dimensions)
      {
        item.OutputToStream(ss, "Dimensions.member.", dimensionsCount, "");
        dimensionsCount++;
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

  if(m_periodHasBeenSet)
  {
    ss << "Period=" << m_period << "&";
  }

  if(m_statisticsHasBeenSet)
  {
    if (m_statistics.empty())
    {
      ss << "Statistics=&";
    }
    else
    {
      unsigned statisticsCount = 1;
      for(auto& item : m_statistics)
      {
        ss << "Statistics.member." << statisticsCount << "="
            << StringUtils::URLEncode(StatisticMapper::GetNameForStatistic(item)) << "&";
        statisticsCount++;
      }
    }
  }

  if(m_extendedStatisticsHasBeenSet)
  {
    if (m_extendedStatistics.empty())
    {
      ss << "ExtendedStatistics=&";
    }
    else
    {
      unsigned extendedStatisticsCount = 1;
      for(auto& item : m_extendedStatistics)
      {
        ss << "ExtendedStatistics.member." << extendedStatisticsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        extendedStatisticsCount++;
      }
    }
  }

  if(m_unitHasBeenSet)
  {
    ss << "Unit=" << StringUtils::URLEncode(StandardUnitMapper::GetNameForStandardUnit(m_unit)) << "&";
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  GetMetricStatisticsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
