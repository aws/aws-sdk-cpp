/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/schemas/model/ListSchemasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Schemas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListSchemasRequest::ListSchemasRequest() : 
    m_limit(0),
    m_limitHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_registryNameHasBeenSet(false),
    m_schemaNamePrefixHasBeenSet(false)
{
}

Aws::String ListSchemasRequest::SerializePayload() const
{
  return {};
}

void ListSchemasRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_limitHasBeenSet)
    {
      ss << m_limit;
      uri.AddQueryStringParameter("limit", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_schemaNamePrefixHasBeenSet)
    {
      ss << m_schemaNamePrefix;
      uri.AddQueryStringParameter("schemaNamePrefix", ss.str());
      ss.str("");
    }

}



