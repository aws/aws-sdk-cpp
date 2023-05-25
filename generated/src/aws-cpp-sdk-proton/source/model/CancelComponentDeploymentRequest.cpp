/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/CancelComponentDeploymentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelComponentDeploymentRequest::CancelComponentDeploymentRequest() : 
    m_componentNameHasBeenSet(false)
{
}

Aws::String CancelComponentDeploymentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_componentNameHasBeenSet)
  {
   payload.WithString("componentName", m_componentName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CancelComponentDeploymentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AwsProton20200720.CancelComponentDeployment"));
  return headers;

}




