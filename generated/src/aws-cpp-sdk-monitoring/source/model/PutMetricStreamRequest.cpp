/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/PutMetricStreamRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

Aws::String PutMetricStreamRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PutMetricStream&";
  if(m_nameHasBeenSet)
  {
    ss << "Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_includeFiltersHasBeenSet)
  {
    if (m_includeFilters.empty())
    {
      ss << "IncludeFilters=&";
    }
    else
    {
      unsigned includeFiltersCount = 1;
      for(auto& item : m_includeFilters)
      {
        item.OutputToStream(ss, "IncludeFilters.member.", includeFiltersCount, "");
        includeFiltersCount++;
      }
    }
  }

  if(m_excludeFiltersHasBeenSet)
  {
    if (m_excludeFilters.empty())
    {
      ss << "ExcludeFilters=&";
    }
    else
    {
      unsigned excludeFiltersCount = 1;
      for(auto& item : m_excludeFilters)
      {
        item.OutputToStream(ss, "ExcludeFilters.member.", excludeFiltersCount, "");
        excludeFiltersCount++;
      }
    }
  }

  if(m_firehoseArnHasBeenSet)
  {
    ss << "FirehoseArn=" << StringUtils::URLEncode(m_firehoseArn.c_str()) << "&";
  }

  if(m_roleArnHasBeenSet)
  {
    ss << "RoleArn=" << StringUtils::URLEncode(m_roleArn.c_str()) << "&";
  }

  if(m_outputFormatHasBeenSet)
  {
    ss << "OutputFormat=" << StringUtils::URLEncode(MetricStreamOutputFormatMapper::GetNameForMetricStreamOutputFormat(m_outputFormat)) << "&";
  }

  if(m_tagsHasBeenSet)
  {
    if (m_tags.empty())
    {
      ss << "Tags=&";
    }
    else
    {
      unsigned tagsCount = 1;
      for(auto& item : m_tags)
      {
        item.OutputToStream(ss, "Tags.member.", tagsCount, "");
        tagsCount++;
      }
    }
  }

  if(m_statisticsConfigurationsHasBeenSet)
  {
    if (m_statisticsConfigurations.empty())
    {
      ss << "StatisticsConfigurations=&";
    }
    else
    {
      unsigned statisticsConfigurationsCount = 1;
      for(auto& item : m_statisticsConfigurations)
      {
        item.OutputToStream(ss, "StatisticsConfigurations.member.", statisticsConfigurationsCount, "");
        statisticsConfigurationsCount++;
      }
    }
  }

  if(m_includeLinkedAccountsMetricsHasBeenSet)
  {
    ss << "IncludeLinkedAccountsMetrics=" << std::boolalpha << m_includeLinkedAccountsMetrics << "&";
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  PutMetricStreamRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
