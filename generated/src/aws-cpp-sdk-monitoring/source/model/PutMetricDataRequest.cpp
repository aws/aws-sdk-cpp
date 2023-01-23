/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/PutMetricDataRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

PutMetricDataRequest::PutMetricDataRequest() : 
    m_namespaceHasBeenSet(false),
    m_metricDataHasBeenSet(false)
{
}

Aws::String PutMetricDataRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PutMetricData&";
  if(m_namespaceHasBeenSet)
  {
    ss << "Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  }

  if(m_metricDataHasBeenSet)
  {
    unsigned metricDataCount = 1;
    for(auto& item : m_metricData)
    {
      item.OutputToStream(ss, "MetricData.member.", metricDataCount, "");
      metricDataCount++;
    }
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  PutMetricDataRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
