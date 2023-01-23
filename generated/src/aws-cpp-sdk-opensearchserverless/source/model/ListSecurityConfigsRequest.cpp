/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/ListSecurityConfigsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListSecurityConfigsRequest::ListSecurityConfigsRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_type(SecurityConfigType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String ListSecurityConfigsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", SecurityConfigTypeMapper::GetNameForSecurityConfigType(m_type));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListSecurityConfigsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpenSearchServerless.ListSecurityConfigs"));
  return headers;

}




