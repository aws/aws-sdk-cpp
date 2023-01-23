/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeDBSnapshotsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DescribeDBSnapshotsRequest::DescribeDBSnapshotsRequest() : 
    m_dBInstanceIdentifierHasBeenSet(false),
    m_dBSnapshotIdentifierHasBeenSet(false),
    m_snapshotTypeHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_includeShared(false),
    m_includeSharedHasBeenSet(false),
    m_includePublic(false),
    m_includePublicHasBeenSet(false),
    m_dbiResourceIdHasBeenSet(false)
{
}

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
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filters.member.", filtersCount, "");
      filtersCount++;
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
