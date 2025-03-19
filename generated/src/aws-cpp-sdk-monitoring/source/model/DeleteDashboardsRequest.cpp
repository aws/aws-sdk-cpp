/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/DeleteDashboardsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

Aws::String DeleteDashboardsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteDashboards&";
  if(m_dashboardNamesHasBeenSet)
  {
    if (m_dashboardNames.empty())
    {
      ss << "DashboardNames=&";
    }
    else
    {
      unsigned dashboardNamesCount = 1;
      for(auto& item : m_dashboardNames)
      {
        ss << "DashboardNames.member." << dashboardNamesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        dashboardNamesCount++;
      }
    }
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  DeleteDashboardsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
