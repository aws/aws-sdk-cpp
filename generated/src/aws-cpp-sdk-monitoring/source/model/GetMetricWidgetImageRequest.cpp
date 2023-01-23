/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/GetMetricWidgetImageRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

GetMetricWidgetImageRequest::GetMetricWidgetImageRequest() : 
    m_metricWidgetHasBeenSet(false),
    m_outputFormatHasBeenSet(false)
{
}

Aws::String GetMetricWidgetImageRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetMetricWidgetImage&";
  if(m_metricWidgetHasBeenSet)
  {
    ss << "MetricWidget=" << StringUtils::URLEncode(m_metricWidget.c_str()) << "&";
  }

  if(m_outputFormatHasBeenSet)
  {
    ss << "OutputFormat=" << StringUtils::URLEncode(m_outputFormat.c_str()) << "&";
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  GetMetricWidgetImageRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
