/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/DisassociateHealthCheckRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Shield::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateHealthCheckRequest::DisassociateHealthCheckRequest() : 
    m_protectionIdHasBeenSet(false),
    m_healthCheckArnHasBeenSet(false)
{
}

Aws::String DisassociateHealthCheckRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_protectionIdHasBeenSet)
  {
   payload.WithString("ProtectionId", m_protectionId);

  }

  if(m_healthCheckArnHasBeenSet)
  {
   payload.WithString("HealthCheckArn", m_healthCheckArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateHealthCheckRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSShield_20160616.DisassociateHealthCheck"));
  return headers;

}




