/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeBlueGreenDeploymentsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DescribeBlueGreenDeploymentsRequest::DescribeBlueGreenDeploymentsRequest() : 
    m_blueGreenDeploymentIdentifierHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false)
{
}

Aws::String DescribeBlueGreenDeploymentsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeBlueGreenDeployments&";
  if(m_blueGreenDeploymentIdentifierHasBeenSet)
  {
    ss << "BlueGreenDeploymentIdentifier=" << StringUtils::URLEncode(m_blueGreenDeploymentIdentifier.c_str()) << "&";
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


void  DescribeBlueGreenDeploymentsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
