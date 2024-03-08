/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-deployment/model/PutDeploymentParameterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MarketplaceDeployment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutDeploymentParameterRequest::PutDeploymentParameterRequest() : 
    m_agreementIdHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_deploymentParameterHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String PutDeploymentParameterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_agreementIdHasBeenSet)
  {
   payload.WithString("agreementId", m_agreementId);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_deploymentParameterHasBeenSet)
  {
   payload.WithObject("deploymentParameter", m_deploymentParameter.Jsonize());

  }

  if(m_expirationDateHasBeenSet)
  {
   payload.WithString("expirationDate", m_expirationDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




