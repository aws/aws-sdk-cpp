/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/EnableSnapshotCopyRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

EnableSnapshotCopyRequest::EnableSnapshotCopyRequest() : 
    m_clusterIdentifierHasBeenSet(false),
    m_destinationRegionHasBeenSet(false),
    m_retentionPeriod(0),
    m_retentionPeriodHasBeenSet(false),
    m_snapshotCopyGrantNameHasBeenSet(false),
    m_manualSnapshotRetentionPeriod(0),
    m_manualSnapshotRetentionPeriodHasBeenSet(false)
{
}

Aws::String EnableSnapshotCopyRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=EnableSnapshotCopy&";
  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_destinationRegionHasBeenSet)
  {
    ss << "DestinationRegion=" << StringUtils::URLEncode(m_destinationRegion.c_str()) << "&";
  }

  if(m_retentionPeriodHasBeenSet)
  {
    ss << "RetentionPeriod=" << m_retentionPeriod << "&";
  }

  if(m_snapshotCopyGrantNameHasBeenSet)
  {
    ss << "SnapshotCopyGrantName=" << StringUtils::URLEncode(m_snapshotCopyGrantName.c_str()) << "&";
  }

  if(m_manualSnapshotRetentionPeriodHasBeenSet)
  {
    ss << "ManualSnapshotRetentionPeriod=" << m_manualSnapshotRetentionPeriod << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  EnableSnapshotCopyRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
