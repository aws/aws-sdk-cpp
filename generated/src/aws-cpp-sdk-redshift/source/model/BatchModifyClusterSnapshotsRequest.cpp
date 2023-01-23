/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/BatchModifyClusterSnapshotsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

BatchModifyClusterSnapshotsRequest::BatchModifyClusterSnapshotsRequest() : 
    m_snapshotIdentifierListHasBeenSet(false),
    m_manualSnapshotRetentionPeriod(0),
    m_manualSnapshotRetentionPeriodHasBeenSet(false),
    m_force(false),
    m_forceHasBeenSet(false)
{
}

Aws::String BatchModifyClusterSnapshotsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=BatchModifyClusterSnapshots&";
  if(m_snapshotIdentifierListHasBeenSet)
  {
    unsigned snapshotIdentifierListCount = 1;
    for(auto& item : m_snapshotIdentifierList)
    {
      ss << "SnapshotIdentifierList.member." << snapshotIdentifierListCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      snapshotIdentifierListCount++;
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
