/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/ListTableBucketsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Tables::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListTableBucketsRequest::SerializePayload() const
{
  return {};
}

void ListTableBucketsRequest::AddQueryStringParameters(URI& uri) const
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

    if(m_maxBucketsHasBeenSet)
    {
      ss << m_maxBuckets;
      uri.AddQueryStringParameter("maxBuckets", ss.str());
      ss.str("");
    }

    if(m_typeHasBeenSet)
    {
      ss << TableBucketTypeMapper::GetNameForTableBucketType(m_type);
      uri.AddQueryStringParameter("type", ss.str());
      ss.str("");
    }

}



