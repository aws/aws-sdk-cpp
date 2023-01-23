/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/DeleteGeoMatchSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAFRegional::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteGeoMatchSetRequest::DeleteGeoMatchSetRequest() : 
    m_geoMatchSetIdHasBeenSet(false),
    m_changeTokenHasBeenSet(false)
{
}

Aws::String DeleteGeoMatchSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_geoMatchSetIdHasBeenSet)
  {
   payload.WithString("GeoMatchSetId", m_geoMatchSetId);

  }

  if(m_changeTokenHasBeenSet)
  {
   payload.WithString("ChangeToken", m_changeToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteGeoMatchSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_Regional_20161128.DeleteGeoMatchSet"));
  return headers;

}




