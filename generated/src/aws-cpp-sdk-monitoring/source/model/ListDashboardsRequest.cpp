/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/ListDashboardsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

ListDashboardsRequest::ListDashboardsRequest() : 
    m_dashboardNamePrefixHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListDashboardsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListDashboards&";
  if(m_dashboardNamePrefixHasBeenSet)
  {
    ss << "DashboardNamePrefix=" << StringUtils::URLEncode(m_dashboardNamePrefix.c_str()) << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  ListDashboardsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
