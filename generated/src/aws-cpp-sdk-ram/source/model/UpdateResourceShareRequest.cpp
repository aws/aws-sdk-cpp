/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/UpdateResourceShareRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateResourceShareRequest::UpdateResourceShareRequest() : 
    m_resourceShareArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_allowExternalPrincipals(false),
    m_allowExternalPrincipalsHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

Aws::String UpdateResourceShareRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceShareArnHasBeenSet)
  {
   payload.WithString("resourceShareArn", m_resourceShareArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_allowExternalPrincipalsHasBeenSet)
  {
   payload.WithBool("allowExternalPrincipals", m_allowExternalPrincipals);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




