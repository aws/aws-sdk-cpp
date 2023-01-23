/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/PutDashboardRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

PutDashboardRequest::PutDashboardRequest() : 
    m_dashboardNameHasBeenSet(false),
    m_dashboardBodyHasBeenSet(false)
{
}

Aws::String PutDashboardRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PutDashboard&";
  if(m_dashboardNameHasBeenSet)
  {
    ss << "DashboardName=" << StringUtils::URLEncode(m_dashboardName.c_str()) << "&";
  }

  if(m_dashboardBodyHasBeenSet)
  {
    ss << "DashboardBody=" << StringUtils::URLEncode(m_dashboardBody.c_str()) << "&";
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  PutDashboardRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
