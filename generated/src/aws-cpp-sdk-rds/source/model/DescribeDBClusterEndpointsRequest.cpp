/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeDBClusterEndpointsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

Aws::String DescribeDBClusterEndpointsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeDBClusterEndpoints&";
  if(m_dBClusterIdentifierHasBeenSet)
  {
    ss << "DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  if(m_dBClusterEndpointIdentifierHasBeenSet)
  {
    ss << "DBClusterEndpointIdentifier=" << StringUtils::URLEncode(m_dBClusterEndpointIdentifier.c_str()) << "&";
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

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DescribeDBClusterEndpointsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
