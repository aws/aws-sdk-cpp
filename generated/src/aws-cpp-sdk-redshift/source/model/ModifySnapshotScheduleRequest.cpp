/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ModifySnapshotScheduleRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

Aws::String ModifySnapshotScheduleRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifySnapshotSchedule&";
  if(m_scheduleIdentifierHasBeenSet)
  {
    ss << "ScheduleIdentifier=" << StringUtils::URLEncode(m_scheduleIdentifier.c_str()) << "&";
  }

  if(m_scheduleDefinitionsHasBeenSet)
  {
    if (m_scheduleDefinitions.empty())
    {
      ss << "ScheduleDefinitions=&";
    }
    else
    {
      unsigned scheduleDefinitionsCount = 1;
      for(auto& item : m_scheduleDefinitions)
      {
        ss << "ScheduleDefinitions.ScheduleDefinition." << scheduleDefinitionsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        scheduleDefinitionsCount++;
      }
    }
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  ModifySnapshotScheduleRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
