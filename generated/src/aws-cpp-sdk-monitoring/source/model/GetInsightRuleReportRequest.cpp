/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/GetInsightRuleReportRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

GetInsightRuleReportRequest::GetInsightRuleReportRequest() : 
    m_ruleNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_period(0),
    m_periodHasBeenSet(false),
    m_maxContributorCount(0),
    m_maxContributorCountHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_orderByHasBeenSet(false)
{
}

Aws::String GetInsightRuleReportRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetInsightRuleReport&";
  if(m_ruleNameHasBeenSet)
  {
    ss << "RuleName=" << StringUtils::URLEncode(m_ruleName.c_str()) << "&";
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

  if(m_maxContributorCountHasBeenSet)
  {
    ss << "MaxContributorCount=" << m_maxContributorCount << "&";
  }

  if(m_metricsHasBeenSet)
  {
    unsigned metricsCount = 1;
    for(auto& item : m_metrics)
    {
      ss << "Metrics.member." << metricsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      metricsCount++;
    }
  }

  if(m_orderByHasBeenSet)
  {
    ss << "OrderBy=" << StringUtils::URLEncode(m_orderBy.c_str()) << "&";
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  GetInsightRuleReportRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
