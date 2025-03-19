/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/DescribeAnomalyDetectorsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

Aws::String DescribeAnomalyDetectorsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeAnomalyDetectors&";
  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

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
    if (m_dimensions.empty())
    {
      ss << "Dimensions=&";
    }
    else
    {
      unsigned dimensionsCount = 1;
      for(auto& item : m_dimensions)
      {
        item.OutputToStream(ss, "Dimensions.member.", dimensionsCount, "");
        dimensionsCount++;
      }
    }
  }

  if(m_anomalyDetectorTypesHasBeenSet)
  {
    if (m_anomalyDetectorTypes.empty())
    {
      ss << "AnomalyDetectorTypes=&";
    }
    else
    {
      unsigned anomalyDetectorTypesCount = 1;
      for(auto& item : m_anomalyDetectorTypes)
      {
        ss << "AnomalyDetectorTypes.member." << anomalyDetectorTypesCount << "="
            << StringUtils::URLEncode(AnomalyDetectorTypeMapper::GetNameForAnomalyDetectorType(item)) << "&";
        anomalyDetectorTypesCount++;
      }
    }
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  DescribeAnomalyDetectorsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
