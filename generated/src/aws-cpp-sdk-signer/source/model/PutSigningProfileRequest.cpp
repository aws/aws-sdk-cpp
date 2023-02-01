/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/PutSigningProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::signer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutSigningProfileRequest::PutSigningProfileRequest() : 
    m_profileNameHasBeenSet(false),
    m_signingMaterialHasBeenSet(false),
    m_signatureValidityPeriodHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_overridesHasBeenSet(false),
    m_signingParametersHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String PutSigningProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_signingMaterialHasBeenSet)
  {
   payload.WithObject("signingMaterial", m_signingMaterial.Jsonize());

  }

  if(m_signatureValidityPeriodHasBeenSet)
  {
   payload.WithObject("signatureValidityPeriod", m_signatureValidityPeriod.Jsonize());

  }

  if(m_platformIdHasBeenSet)
  {
   payload.WithString("platformId", m_platformId);

  }

  if(m_overridesHasBeenSet)
  {
   payload.WithObject("overrides", m_overrides.Jsonize());

  }

  if(m_signingParametersHasBeenSet)
  {
   JsonValue signingParametersJsonMap;
   for(auto& signingParametersItem : m_signingParameters)
   {
     signingParametersJsonMap.WithString(signingParametersItem.first, signingParametersItem.second);
   }
   payload.WithObject("signingParameters", std::move(signingParametersJsonMap));

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




