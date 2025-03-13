/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/PutCompositeAlarmRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

Aws::String PutCompositeAlarmRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PutCompositeAlarm&";
  if(m_actionsEnabledHasBeenSet)
  {
    ss << "ActionsEnabled=" << std::boolalpha << m_actionsEnabled << "&";
  }

  if(m_alarmActionsHasBeenSet)
  {
    if (m_alarmActions.empty())
    {
      ss << "AlarmActions=&";
    }
    else
    {
      unsigned alarmActionsCount = 1;
      for(auto& item : m_alarmActions)
      {
        ss << "AlarmActions.member." << alarmActionsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        alarmActionsCount++;
      }
    }
  }

  if(m_alarmDescriptionHasBeenSet)
  {
    ss << "AlarmDescription=" << StringUtils::URLEncode(m_alarmDescription.c_str()) << "&";
  }

  if(m_alarmNameHasBeenSet)
  {
    ss << "AlarmName=" << StringUtils::URLEncode(m_alarmName.c_str()) << "&";
  }

  if(m_alarmRuleHasBeenSet)
  {
    ss << "AlarmRule=" << StringUtils::URLEncode(m_alarmRule.c_str()) << "&";
  }

  if(m_insufficientDataActionsHasBeenSet)
  {
    if (m_insufficientDataActions.empty())
    {
      ss << "InsufficientDataActions=&";
    }
    else
    {
      unsigned insufficientDataActionsCount = 1;
      for(auto& item : m_insufficientDataActions)
      {
        ss << "InsufficientDataActions.member." << insufficientDataActionsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        insufficientDataActionsCount++;
      }
    }
  }

  if(m_oKActionsHasBeenSet)
  {
    if (m_oKActions.empty())
    {
      ss << "OKActions=&";
    }
    else
    {
      unsigned oKActionsCount = 1;
      for(auto& item : m_oKActions)
      {
        ss << "OKActions.member." << oKActionsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        oKActionsCount++;
      }
    }
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

  if(m_actionsSuppressorHasBeenSet)
  {
    ss << "ActionsSuppressor=" << StringUtils::URLEncode(m_actionsSuppressor.c_str()) << "&";
  }

  if(m_actionsSuppressorWaitPeriodHasBeenSet)
  {
    ss << "ActionsSuppressorWaitPeriod=" << m_actionsSuppressorWaitPeriod << "&";
  }

  if(m_actionsSuppressorExtensionPeriodHasBeenSet)
  {
    ss << "ActionsSuppressorExtensionPeriod=" << m_actionsSuppressorExtensionPeriod << "&";
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  PutCompositeAlarmRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
