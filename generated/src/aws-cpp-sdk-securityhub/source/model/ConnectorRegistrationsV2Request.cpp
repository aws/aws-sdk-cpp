/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ConnectorRegistrationsV2Request.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ConnectorRegistrationsV2Request::SerializePayload() const
{
  JsonValue payload;

  if(m_authCodeHasBeenSet)
  {
   payload.WithString("AuthCode", m_authCode);

  }

  if(m_authStateHasBeenSet)
  {
   payload.WithString("AuthState", m_authState);

  }

  return payload.View().WriteReadable();
}




