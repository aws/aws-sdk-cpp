/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mobile/model/DescribeProjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Mobile::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeProjectRequest::DescribeProjectRequest() : 
    m_projectIdHasBeenSet(false),
    m_syncFromResources(false),
    m_syncFromResourcesHasBeenSet(false)
{
}

Aws::String DescribeProjectRequest::SerializePayload() const
{
  return {};
}

void DescribeProjectRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_projectIdHasBeenSet)
    {
      ss << m_projectId;
      uri.AddQueryStringParameter("projectId", ss.str());
      ss.str("");
    }

    if(m_syncFromResourcesHasBeenSet)
    {
      ss << m_syncFromResources;
      uri.AddQueryStringParameter("syncFromResources", ss.str());
      ss.str("");
    }

}



