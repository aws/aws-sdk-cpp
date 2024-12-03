/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/DeleteTableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Tables::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteTableRequest::DeleteTableRequest() : 
    m_tableBucketARNHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionTokenHasBeenSet(false)
{
}

Aws::String DeleteTableRequest::SerializePayload() const
{
  return {};
}

void DeleteTableRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_versionTokenHasBeenSet)
    {
      ss << m_versionToken;
      uri.AddQueryStringParameter("versionToken", ss.str());
      ss.str("");
    }

}



