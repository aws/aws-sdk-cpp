/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DescribeInstanceTypeLimitsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeInstanceTypeLimitsRequest::DescribeInstanceTypeLimitsRequest() : 
    m_domainNameHasBeenSet(false),
    m_instanceType(OpenSearchPartitionInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_engineVersionHasBeenSet(false)
{
}

Aws::String DescribeInstanceTypeLimitsRequest::SerializePayload() const
{
  return {};
}

void DescribeInstanceTypeLimitsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_domainNameHasBeenSet)
    {
      ss << m_domainName;
      uri.AddQueryStringParameter("domainName", ss.str());
      ss.str("");
    }

}



