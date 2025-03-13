/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeDBSnapshotsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

Aws::String DescribeDBSnapshotsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeDBSnapshots&";
  if(m_dBInstanceIdentifierHasBeenSet)
  {
    ss << "DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  if(m_dBSnapshotIdentifierHasBeenSet)
  {
    ss << "DBSnapshotIdentifier=" << StringUtils::URLEncode(m_dBSnapshotIdentifier.c_str()) << "&";
  }

  if(m_snapshotTypeHasBeenSet)
  {
    ss << "SnapshotType=" << StringUtils::URLEncode(m_snapshotType.c_str()) << "&";
  }

  if(m_filtersHasBeenSet)
  {
    if (m_filters.empty())
    {
      ss << "Filters=&";
    }
    else
    {
      unsigned filtersCount = 1;
      for(auto& item : m_filters)
      {
        item.OutputToStream(ss, "Filters.Filter.", filtersCount, "");
        filtersCount++;
      }
    }
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  if(m_includeSharedHasBeenSet)
  {
    ss << "IncludeShared=" << std::boolalpha << m_includeShared << "&";
  }

  if(m_includePublicHasBeenSet)
  {
    ss << "IncludePublic=" << std::boolalpha << m_includePublic << "&";
  }

  if(m_dbiResourceIdHasBeenSet)
  {
    ss << "DbiResourceId=" << StringUtils::URLEncode(m_dbiResourceId.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DescribeDBSnapshotsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
