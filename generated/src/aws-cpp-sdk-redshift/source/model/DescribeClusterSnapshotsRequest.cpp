/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeClusterSnapshotsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DescribeClusterSnapshotsRequest::DescribeClusterSnapshotsRequest() : 
    m_clusterIdentifierHasBeenSet(false),
    m_snapshotIdentifierHasBeenSet(false),
    m_snapshotArnHasBeenSet(false),
    m_snapshotTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_tagKeysHasBeenSet(false),
    m_tagValuesHasBeenSet(false),
    m_clusterExists(false),
    m_clusterExistsHasBeenSet(false),
    m_sortingEntitiesHasBeenSet(false)
{
}

Aws::String DescribeClusterSnapshotsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeClusterSnapshots&";
  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_snapshotIdentifierHasBeenSet)
  {
    ss << "SnapshotIdentifier=" << StringUtils::URLEncode(m_snapshotIdentifier.c_str()) << "&";
  }

  if(m_snapshotArnHasBeenSet)
  {
    ss << "SnapshotArn=" << StringUtils::URLEncode(m_snapshotArn.c_str()) << "&";
  }

  if(m_snapshotTypeHasBeenSet)
  {
    ss << "SnapshotType=" << StringUtils::URLEncode(m_snapshotType.c_str()) << "&";
  }

  if(m_startTimeHasBeenSet)
  {
    ss << "StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endTimeHasBeenSet)
  {
    ss << "EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  if(m_ownerAccountHasBeenSet)
  {
    ss << "OwnerAccount=" << StringUtils::URLEncode(m_ownerAccount.c_str()) << "&";
  }

  if(m_tagKeysHasBeenSet)
  {
    unsigned tagKeysCount = 1;
    for(auto& item : m_tagKeys)
    {
      ss << "TagKeys.member." << tagKeysCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      tagKeysCount++;
    }
  }

  if(m_tagValuesHasBeenSet)
  {
    unsigned tagValuesCount = 1;
    for(auto& item : m_tagValues)
    {
      ss << "TagValues.member." << tagValuesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      tagValuesCount++;
    }
  }

  if(m_clusterExistsHasBeenSet)
  {
    ss << "ClusterExists=" << std::boolalpha << m_clusterExists << "&";
  }

  if(m_sortingEntitiesHasBeenSet)
  {
    unsigned sortingEntitiesCount = 1;
    for(auto& item : m_sortingEntities)
    {
      item.OutputToStream(ss, "SortingEntities.member.", sortingEntitiesCount, "");
      sortingEntitiesCount++;
    }
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  DescribeClusterSnapshotsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
