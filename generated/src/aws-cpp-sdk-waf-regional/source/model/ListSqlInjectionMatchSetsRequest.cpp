/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/ListSqlInjectionMatchSetsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAFRegional::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListSqlInjectionMatchSetsRequest::ListSqlInjectionMatchSetsRequest() : 
    m_nextMarkerHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
}

Aws::String ListSqlInjectionMatchSetsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextMarkerHasBeenSet)
  {
   payload.WithString("NextMarker", m_nextMarker);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListSqlInjectionMatchSetsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_Regional_20161128.ListSqlInjectionMatchSets"));
  return headers;

}




