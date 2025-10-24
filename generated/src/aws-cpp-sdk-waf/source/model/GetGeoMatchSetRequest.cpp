/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/waf/model/GetGeoMatchSetRequest.h>

#include <utility>

using namespace Aws::WAF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetGeoMatchSetRequest::SerializePayload() const {
  JsonValue payload;

  if (m_geoMatchSetIdHasBeenSet) {
    payload.WithString("GeoMatchSetId", m_geoMatchSetId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetGeoMatchSetRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20150824.GetGeoMatchSet"));
  return headers;
}
