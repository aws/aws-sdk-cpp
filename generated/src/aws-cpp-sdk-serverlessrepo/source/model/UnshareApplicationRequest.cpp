/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/serverlessrepo/model/UnshareApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServerlessApplicationRepository::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UnshareApplicationRequest::UnshareApplicationRequest() : 
    m_applicationIdHasBeenSet(false),
    m_organizationIdHasBeenSet(false)
{
}

Aws::String UnshareApplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("organizationId", m_organizationId);

  }

  return payload.View().WriteReadable();
}




