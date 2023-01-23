/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/CopyClusterSnapshotRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

CopyClusterSnapshotRequest::CopyClusterSnapshotRequest() : 
    m_sourceSnapshotIdentifierHasBeenSet(false),
    m_sourceSnapshotClusterIdentifierHasBeenSet(false),
    m_targetSnapshotIdentifierHasBeenSet(false),
    m_manualSnapshotRetentionPeriod(0),
    m_manualSnapshotRetentionPeriodHasBeenSet(false)
{
}

Aws::String CopyClusterSnapshotRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CopyClusterSnapshot&";
  if(m_sourceSnapshotIdentifierHasBeenSet)
  {
    ss << "SourceSnapshotIdentifier=" << StringUtils::URLEncode(m_sourceSnapshotIdentifier.c_str()) << "&";
  }

  if(m_sourceSnapshotClusterIdentifierHasBeenSet)
  {
    ss << "SourceSnapshotClusterIdentifier=" << StringUtils::URLEncode(m_sourceSnapshotClusterIdentifier.c_str()) << "&";
  }

  if(m_targetSnapshotIdentifierHasBeenSet)
  {
    ss << "TargetSnapshotIdentifier=" << StringUtils::URLEncode(m_targetSnapshotIdentifier.c_str()) << "&";
  }

  if(m_manualSnapshotRetentionPeriodHasBeenSet)
  {
    ss << "ManualSnapshotRetentionPeriod=" << m_manualSnapshotRetentionPeriod << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  CopyClusterSnapshotRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
