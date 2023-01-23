/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/DescribeGlobalClustersRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Neptune::Model;
using namespace Aws::Utils;

DescribeGlobalClustersRequest::DescribeGlobalClustersRequest() : 
    m_globalClusterIdentifierHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

Aws::String DescribeGlobalClustersRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeGlobalClusters&";
  if(m_globalClusterIdentifierHasBeenSet)
  {
    ss << "GlobalClusterIdentifier=" << StringUtils::URLEncode(m_globalClusterIdentifier.c_str()) << "&";
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


void  DescribeGlobalClustersRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
