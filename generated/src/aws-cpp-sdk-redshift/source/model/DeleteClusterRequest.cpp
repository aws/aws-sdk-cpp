/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DeleteClusterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DeleteClusterRequest::DeleteClusterRequest() : 
    m_clusterIdentifierHasBeenSet(false),
    m_skipFinalClusterSnapshot(false),
    m_skipFinalClusterSnapshotHasBeenSet(false),
    m_finalClusterSnapshotIdentifierHasBeenSet(false),
    m_finalClusterSnapshotRetentionPeriod(0),
    m_finalClusterSnapshotRetentionPeriodHasBeenSet(false)
{
}

Aws::String DeleteClusterRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteCluster&";
  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_skipFinalClusterSnapshotHasBeenSet)
  {
    ss << "SkipFinalClusterSnapshot=" << std::boolalpha << m_skipFinalClusterSnapshot << "&";
  }

  if(m_finalClusterSnapshotIdentifierHasBeenSet)
  {
    ss << "FinalClusterSnapshotIdentifier=" << StringUtils::URLEncode(m_finalClusterSnapshotIdentifier.c_str()) << "&";
  }

  if(m_finalClusterSnapshotRetentionPeriodHasBeenSet)
  {
    ss << "FinalClusterSnapshotRetentionPeriod=" << m_finalClusterSnapshotRetentionPeriod << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  DeleteClusterRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
