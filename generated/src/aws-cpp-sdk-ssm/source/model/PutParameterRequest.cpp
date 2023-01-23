/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/PutParameterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutParameterRequest::PutParameterRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_type(ParameterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_overwrite(false),
    m_overwriteHasBeenSet(false),
    m_allowedPatternHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_tier(ParameterTier::NOT_SET),
    m_tierHasBeenSet(false),
    m_policiesHasBeenSet(false),
    m_dataTypeHasBeenSet(false)
{
}

Aws::String PutParameterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ParameterTypeMapper::GetNameForParameterType(m_type));
  }

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_overwriteHasBeenSet)
  {
   payload.WithBool("Overwrite", m_overwrite);

  }

  if(m_allowedPatternHasBeenSet)
  {
   payload.WithString("AllowedPattern", m_allowedPattern);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_tierHasBeenSet)
  {
   payload.WithString("Tier", ParameterTierMapper::GetNameForParameterTier(m_tier));
  }

  if(m_policiesHasBeenSet)
  {
   payload.WithString("Policies", m_policies);

  }

  if(m_dataTypeHasBeenSet)
  {
   payload.WithString("DataType", m_dataType);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutParameterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.PutParameter"));
  return headers;

}




