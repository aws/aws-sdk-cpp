/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/GetSizeConstraintSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAFRegional::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSizeConstraintSetRequest::GetSizeConstraintSetRequest() : 
    m_sizeConstraintSetIdHasBeenSet(false)
{
}

Aws::String GetSizeConstraintSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sizeConstraintSetIdHasBeenSet)
  {
   payload.WithString("SizeConstraintSetId", m_sizeConstraintSetId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetSizeConstraintSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_Regional_20161128.GetSizeConstraintSet"));
  return headers;

}




