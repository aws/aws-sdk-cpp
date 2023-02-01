/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/GetComponentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SsmSap::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetComponentRequest::GetComponentRequest() : 
    m_applicationIdHasBeenSet(false),
    m_componentIdHasBeenSet(false)
{
}

Aws::String GetComponentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_componentIdHasBeenSet)
  {
   payload.WithString("ComponentId", m_componentId);

  }

  return payload.View().WriteReadable();
}




