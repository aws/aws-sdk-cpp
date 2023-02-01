/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/ListMetricsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

ListMetricsRequest::ListMetricsRequest() : 
    m_namespaceHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_recentlyActive(RecentlyActive::NOT_SET),
    m_recentlyActiveHasBeenSet(false),
    m_includeLinkedAccounts(false),
    m_includeLinkedAccountsHasBeenSet(false),
    m_owningAccountHasBeenSet(false)
{
}

Aws::String ListMetricsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListMetrics&";
  if(m_namespaceHasBeenSet)
  {
    ss << "Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  }

  if(m_metricNameHasBeenSet)
  {
    ss << "MetricName=" << StringUtils::URLEncode(m_metricName.c_str()) << "&";
  }

  if(m_dimensionsHasBeenSet)
  {
    unsigned dimensionsCount = 1;
    for(auto& item : m_dimensions)
    {
      item.OutputToStream(ss, "Dimensions.member.", dimensionsCount, "");
      dimensionsCount++;
    }
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_recentlyActiveHasBeenSet)
  {
    ss << "RecentlyActive=" << RecentlyActiveMapper::GetNameForRecentlyActive(m_recentlyActive) << "&";
  }

  if(m_includeLinkedAccountsHasBeenSet)
  {
    ss << "IncludeLinkedAccounts=" << std::boolalpha << m_includeLinkedAccounts << "&";
  }

  if(m_owningAccountHasBeenSet)
  {
    ss << "OwningAccount=" << StringUtils::URLEncode(m_owningAccount.c_str()) << "&";
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  ListMetricsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
