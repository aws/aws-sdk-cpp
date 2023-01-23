/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/DeleteAnomalyDetectorRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

DeleteAnomalyDetectorRequest::DeleteAnomalyDetectorRequest() : 
    m_singleMetricAnomalyDetectorHasBeenSet(false),
    m_metricMathAnomalyDetectorHasBeenSet(false)
{
}

Aws::String DeleteAnomalyDetectorRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteAnomalyDetector&";
  if(m_singleMetricAnomalyDetectorHasBeenSet)
  {
    m_singleMetricAnomalyDetector.OutputToStream(ss, "SingleMetricAnomalyDetector");
  }

  if(m_metricMathAnomalyDetectorHasBeenSet)
  {
    m_metricMathAnomalyDetector.OutputToStream(ss, "MetricMathAnomalyDetector");
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  DeleteAnomalyDetectorRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
