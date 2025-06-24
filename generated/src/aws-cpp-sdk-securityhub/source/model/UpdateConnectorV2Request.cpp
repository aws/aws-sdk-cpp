/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/UpdateConnectorV2Request.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateConnectorV2Request::SerializePayload() const
{
  JsonValue payload;

  if(m_clientSecretHasBeenSet)
  {
   payload.WithString("ClientSecret", m_clientSecret);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_providerHasBeenSet)
  {
   payload.WithObject("Provider", m_provider.Jsonize());

  }

  return payload.View().WriteReadable();
}




