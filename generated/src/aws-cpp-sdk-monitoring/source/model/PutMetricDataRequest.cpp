/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/PutMetricDataRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

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
    if (m_metricData.empty())
    {
      ss << "MetricData=&";
    }
    else
    {
      unsigned metricDataCount = 1;
      for(auto& item : m_metricData)
      {
        item.OutputToStream(ss, "MetricData.member.", metricDataCount, "");
        metricDataCount++;
      }
    }
  }

  if(m_entityMetricDataHasBeenSet)
  {
    if (m_entityMetricData.empty())
    {
      ss << "EntityMetricData=&";
    }
    else
    {
      unsigned entityMetricDataCount = 1;
      for(auto& item : m_entityMetricData)
      {
        item.OutputToStream(ss, "EntityMetricData.member.", entityMetricDataCount, "");
        entityMetricDataCount++;
      }
    }
  }

  if(m_strictEntityValidationHasBeenSet)
  {
    ss << "StrictEntityValidation=" << std::boolalpha << m_strictEntityValidation << "&";
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  PutMetricDataRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

#ifdef ENABLED_ZLIB_REQUEST_COMPRESSION
Aws::Client::CompressionAlgorithm PutMetricDataRequest::GetSelectedCompressionAlgorithm(Aws::Client::RequestCompressionConfig config) const
{
    if (config.useRequestCompression == Aws::Client::UseRequestCompression::DISABLE)
    {
        return Aws::Client::CompressionAlgorithm::NONE;
    }

    const auto& body = AmazonSerializableWebServiceRequest::GetBody();
    body->seekg(0, body->end);
    size_t bodySize = body->tellg();
    body->seekg(0, body->beg);
    if ( bodySize < config.requestMinCompressionSizeBytes)
    {
        return Aws::Client::CompressionAlgorithm::NONE;
    }
    else
    {
        return Aws::Client::CompressionAlgorithm::GZIP;
    }
}
#endif

