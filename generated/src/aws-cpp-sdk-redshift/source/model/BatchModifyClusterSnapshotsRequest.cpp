/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/BatchModifyClusterSnapshotsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

Aws::String BatchModifyClusterSnapshotsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=BatchModifyClusterSnapshots&";
  if(m_snapshotIdentifierListHasBeenSet)
  {
    if (m_snapshotIdentifierList.empty())
    {
      ss << "SnapshotIdentifierList=&";
    }
    else
    {
      unsigned snapshotIdentifierListCount = 1;
      for(auto& item : m_snapshotIdentifierList)
      {
        ss << "SnapshotIdentifierList.String." << snapshotIdentifierListCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        snapshotIdentifierListCount++;
      }
    }
  }

  if(m_manualSnapshotRetentionPeriodHasBeenSet)
  {
    ss << "ManualSnapshotRetentionPeriod=" << m_manualSnapshotRetentionPeriod << "&";
  }

  if(m_forceHasBeenSet)
  {
    ss << "Force=" << std::boolalpha << m_force << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  BatchModifyClusterSnapshotsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
