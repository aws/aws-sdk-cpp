/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ModifyClusterSnapshotRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

ModifyClusterSnapshotRequest::ModifyClusterSnapshotRequest() : 
    m_snapshotIdentifierHasBeenSet(false),
    m_manualSnapshotRetentionPeriod(0),
    m_manualSnapshotRetentionPeriodHasBeenSet(false),
    m_force(false),
    m_forceHasBeenSet(false)
{
}

Aws::String ModifyClusterSnapshotRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyClusterSnapshot&";
  if(m_snapshotIdentifierHasBeenSet)
  {
    ss << "SnapshotIdentifier=" << StringUtils::URLEncode(m_snapshotIdentifier.c_str()) << "&";
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


void  ModifyClusterSnapshotRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
