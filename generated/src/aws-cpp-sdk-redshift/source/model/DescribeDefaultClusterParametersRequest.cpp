/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeDefaultClusterParametersRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DescribeDefaultClusterParametersRequest::DescribeDefaultClusterParametersRequest() : 
    m_parameterGroupFamilyHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

Aws::String DescribeDefaultClusterParametersRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeDefaultClusterParameters&";
  if(m_parameterGroupFamilyHasBeenSet)
  {
    ss << "ParameterGroupFamily=" << StringUtils::URLEncode(m_parameterGroupFamily.c_str()) << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  DescribeDefaultClusterParametersRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
