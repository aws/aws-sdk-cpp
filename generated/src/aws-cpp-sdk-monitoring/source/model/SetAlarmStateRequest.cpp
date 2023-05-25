/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/SetAlarmStateRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

SetAlarmStateRequest::SetAlarmStateRequest() : 
    m_alarmNameHasBeenSet(false),
    m_stateValue(StateValue::NOT_SET),
    m_stateValueHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_stateReasonDataHasBeenSet(false)
{
}

Aws::String SetAlarmStateRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SetAlarmState&";
  if(m_alarmNameHasBeenSet)
  {
    ss << "AlarmName=" << StringUtils::URLEncode(m_alarmName.c_str()) << "&";
  }

  if(m_stateValueHasBeenSet)
  {
    ss << "StateValue=" << StateValueMapper::GetNameForStateValue(m_stateValue) << "&";
  }

  if(m_stateReasonHasBeenSet)
  {
    ss << "StateReason=" << StringUtils::URLEncode(m_stateReason.c_str()) << "&";
  }

  if(m_stateReasonDataHasBeenSet)
  {
    ss << "StateReasonData=" << StringUtils::URLEncode(m_stateReasonData.c_str()) << "&";
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  SetAlarmStateRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
