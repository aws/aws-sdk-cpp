/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeClusterSnapshotsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

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
    if (m_tagKeys.empty())
    {
      ss << "TagKeys=&";
    }
    else
    {
      unsigned tagKeysCount = 1;
      for(auto& item : m_tagKeys)
      {
        ss << "TagKeys.TagKey." << tagKeysCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        tagKeysCount++;
      }
    }
  }

  if(m_tagValuesHasBeenSet)
  {
    if (m_tagValues.empty())
    {
      ss << "TagValues=&";
    }
    else
    {
      unsigned tagValuesCount = 1;
      for(auto& item : m_tagValues)
      {
        ss << "TagValues.TagValue." << tagValuesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        tagValuesCount++;
      }
    }
  }

  if(m_clusterExistsHasBeenSet)
  {
    ss << "ClusterExists=" << std::boolalpha << m_clusterExists << "&";
  }

  if(m_sortingEntitiesHasBeenSet)
  {
    if (m_sortingEntities.empty())
    {
      ss << "SortingEntities=&";
    }
    else
    {
      unsigned sortingEntitiesCount = 1;
      for(auto& item : m_sortingEntities)
      {
        item.OutputToStream(ss, "SortingEntities.SnapshotSortingEntity.", sortingEntitiesCount, "");
        sortingEntitiesCount++;
      }
    }
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  DescribeClusterSnapshotsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
