/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/DescribeAlarmsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

Aws::String DescribeAlarmsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeAlarms&";
  if(m_alarmNamesHasBeenSet)
  {
    if (m_alarmNames.empty())
    {
      ss << "AlarmNames=&";
    }
    else
    {
      unsigned alarmNamesCount = 1;
      for(auto& item : m_alarmNames)
      {
        ss << "AlarmNames.member." << alarmNamesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        alarmNamesCount++;
      }
    }
  }

  if(m_alarmNamePrefixHasBeenSet)
  {
    ss << "AlarmNamePrefix=" << StringUtils::URLEncode(m_alarmNamePrefix.c_str()) << "&";
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

  if(m_childrenOfAlarmNameHasBeenSet)
  {
    ss << "ChildrenOfAlarmName=" << StringUtils::URLEncode(m_childrenOfAlarmName.c_str()) << "&";
  }

  if(m_parentsOfAlarmNameHasBeenSet)
  {
    ss << "ParentsOfAlarmName=" << StringUtils::URLEncode(m_parentsOfAlarmName.c_str()) << "&";
  }

  if(m_stateValueHasBeenSet)
  {
    ss << "StateValue=" << StringUtils::URLEncode(StateValueMapper::GetNameForStateValue(m_stateValue)) << "&";
  }

  if(m_actionPrefixHasBeenSet)
  {
    ss << "ActionPrefix=" << StringUtils::URLEncode(m_actionPrefix.c_str()) << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  DescribeAlarmsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
