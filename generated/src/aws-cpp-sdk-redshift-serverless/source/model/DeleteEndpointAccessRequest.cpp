/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/DeleteEndpointAccessRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteEndpointAccessRequest::DeleteEndpointAccessRequest() : 
    m_endpointNameHasBeenSet(false)
{
}

Aws::String DeleteEndpointAccessRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_endpointNameHasBeenSet)
  {
   payload.WithString("endpointName", m_endpointName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteEndpointAccessRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.DeleteEndpointAccess"));
  return headers;

}




