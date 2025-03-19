/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/ListNamespacesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Tables::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListNamespacesRequest::SerializePayload() const
{
  return {};
}

void ListNamespacesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_prefixHasBeenSet)
    {
      ss << m_prefix;
      uri.AddQueryStringParameter("prefix", ss.str());
      ss.str("");
    }

    if(m_continuationTokenHasBeenSet)
    {
      ss << m_continuationToken;
      uri.AddQueryStringParameter("continuationToken", ss.str());
      ss.str("");
    }

    if(m_maxNamespacesHasBeenSet)
    {
      ss << m_maxNamespaces;
      uri.AddQueryStringParameter("maxNamespaces", ss.str());
      ss.str("");
    }

}



