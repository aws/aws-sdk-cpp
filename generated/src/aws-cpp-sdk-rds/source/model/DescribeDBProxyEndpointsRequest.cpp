/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeDBProxyEndpointsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DescribeDBProxyEndpointsRequest::DescribeDBProxyEndpointsRequest() : 
    m_dBProxyNameHasBeenSet(false),
    m_dBProxyEndpointNameHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false)
{
}

Aws::String DescribeDBProxyEndpointsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeDBProxyEndpoints&";
  if(m_dBProxyNameHasBeenSet)
  {
    ss << "DBProxyName=" << StringUtils::URLEncode(m_dBProxyName.c_str()) << "&";
  }

  if(m_dBProxyEndpointNameHasBeenSet)
  {
    ss << "DBProxyEndpointName=" << StringUtils::URLEncode(m_dBProxyEndpointName.c_str()) << "&";
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

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DescribeDBProxyEndpointsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
