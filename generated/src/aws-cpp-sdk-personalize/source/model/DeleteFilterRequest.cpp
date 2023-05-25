/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/DeleteFilterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteFilterRequest::DeleteFilterRequest() : 
    m_filterArnHasBeenSet(false)
{
}

Aws::String DeleteFilterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filterArnHasBeenSet)
  {
   payload.WithString("filterArn", m_filterArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteFilterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.DeleteFilter"));
  return headers;

}




