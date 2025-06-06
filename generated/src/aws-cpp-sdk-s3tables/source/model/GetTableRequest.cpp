/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/GetTableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Tables::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetTableRequest::SerializePayload() const
{
  return {};
}

void GetTableRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_tableBucketARNHasBeenSet)
    {
      ss << m_tableBucketARN;
      uri.AddQueryStringParameter("tableBucketARN", ss.str());
      ss.str("");
    }

    if(m_namespaceHasBeenSet)
    {
      ss << m_namespace;
      uri.AddQueryStringParameter("namespace", ss.str());
      ss.str("");
    }

    if(m_nameHasBeenSet)
    {
      ss << m_name;
      uri.AddQueryStringParameter("name", ss.str());
      ss.str("");
    }

    if(m_tableArnHasBeenSet)
    {
      ss << m_tableArn;
      uri.AddQueryStringParameter("tableArn", ss.str());
      ss.str("");
    }

}



