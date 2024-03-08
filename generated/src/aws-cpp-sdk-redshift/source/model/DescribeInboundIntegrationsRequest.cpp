/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeInboundIntegrationsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DescribeInboundIntegrationsRequest::DescribeInboundIntegrationsRequest() : 
    m_integrationArnHasBeenSet(false),
    m_targetArnHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

Aws::String DescribeInboundIntegrationsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeInboundIntegrations&";
  if(m_integrationArnHasBeenSet)
  {
    ss << "IntegrationArn=" << StringUtils::URLEncode(m_integrationArn.c_str()) << "&";
  }

  if(m_targetArnHasBeenSet)
  {
    ss << "TargetArn=" << StringUtils::URLEncode(m_targetArn.c_str()) << "&";
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


void  DescribeInboundIntegrationsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
