/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeIntegrationsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DescribeIntegrationsRequest::DescribeIntegrationsRequest() : 
    m_integrationArnHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

Aws::String DescribeIntegrationsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeIntegrations&";
  if(m_integrationArnHasBeenSet)
  {
    ss << "IntegrationArn=" << StringUtils::URLEncode(m_integrationArn.c_str()) << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
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
        item.OutputToStream(ss, "Filters.member.", filtersCount, "");
        filtersCount++;
      }
    }
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  DescribeIntegrationsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
