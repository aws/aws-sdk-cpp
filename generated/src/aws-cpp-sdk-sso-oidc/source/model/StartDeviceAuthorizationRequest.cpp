/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-oidc/model/StartDeviceAuthorizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSOOIDC::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartDeviceAuthorizationRequest::StartDeviceAuthorizationRequest() : 
    m_clientIdHasBeenSet(false),
    m_clientSecretHasBeenSet(false),
    m_startUrlHasBeenSet(false)
{
}

Aws::String StartDeviceAuthorizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("clientId", m_clientId);

  }

  if(m_clientSecretHasBeenSet)
  {
   payload.WithString("clientSecret", m_clientSecret);

  }

  if(m_startUrlHasBeenSet)
  {
   payload.WithString("startUrl", m_startUrl);

  }

  return payload.View().WriteReadable();
}




