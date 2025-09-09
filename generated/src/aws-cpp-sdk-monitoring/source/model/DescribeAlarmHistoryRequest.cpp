/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/DescribeAlarmHistoryRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

Aws::String DescribeAlarmHistoryRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeAlarmHistory&";
  if(m_alarmNameHasBeenSet)
  {
    ss << "AlarmName=" << StringUtils::URLEncode(m_alarmName.c_str()) << "&";
  }

  if(m_alarmContributorIdHasBeenSet)
  {
    ss << "AlarmContributorId=" << StringUtils::URLEncode(m_alarmContributorId.c_str()) << "&";
  }

  if(m_alarmTypesHasBeenSet)
  {
    if (m_alarmTypes.empty())
    {
      ss << "AlarmTypes=&";
    }
    else
    {
      unsigned alarmTypesCount = 1;
      for(auto& item : m_alarmTypes)
      {
        ss << "AlarmTypes.member." << alarmTypesCount << "="
            << StringUtils::URLEncode(AlarmTypeMapper::GetNameForAlarmType(item)) << "&";
        alarmTypesCount++;
      }
    }
  }

  if(m_historyItemTypeHasBeenSet)
  {
    ss << "HistoryItemType=" << StringUtils::URLEncode(HistoryItemTypeMapper::GetNameForHistoryItemType(m_historyItemType)) << "&";
  }

  if(m_startDateHasBeenSet)
  {
    ss << "StartDate=" << StringUtils::URLEncode(m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endDateHasBeenSet)
  {
    ss << "EndDate=" << StringUtils::URLEncode(m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_scanByHasBeenSet)
  {
    ss << "ScanBy=" << StringUtils::URLEncode(ScanByMapper::GetNameForScanBy(m_scanBy)) << "&";
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  DescribeAlarmHistoryRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
