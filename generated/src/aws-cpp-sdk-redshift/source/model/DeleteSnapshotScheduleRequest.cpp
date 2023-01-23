/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DeleteSnapshotScheduleRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DeleteSnapshotScheduleRequest::DeleteSnapshotScheduleRequest() : 
    m_scheduleIdentifierHasBeenSet(false)
{
}

Aws::String DeleteSnapshotScheduleRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteSnapshotSchedule&";
  if(m_scheduleIdentifierHasBeenSet)
  {
    ss << "ScheduleIdentifier=" << StringUtils::URLEncode(m_scheduleIdentifier.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  DeleteSnapshotScheduleRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
