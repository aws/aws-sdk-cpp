/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/PutAttributeMappingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RolesAnywhere::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutAttributeMappingRequest::PutAttributeMappingRequest() : 
    m_certificateField(CertificateField::NOT_SET),
    m_certificateFieldHasBeenSet(false),
    m_mappingRulesHasBeenSet(false),
    m_profileIdHasBeenSet(false)
{
}

Aws::String PutAttributeMappingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificateFieldHasBeenSet)
  {
   payload.WithString("certificateField", CertificateFieldMapper::GetNameForCertificateField(m_certificateField));
  }

  if(m_mappingRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mappingRulesJsonList(m_mappingRules.size());
   for(unsigned mappingRulesIndex = 0; mappingRulesIndex < mappingRulesJsonList.GetLength(); ++mappingRulesIndex)
   {
     mappingRulesJsonList[mappingRulesIndex].AsObject(m_mappingRules[mappingRulesIndex].Jsonize());
   }
   payload.WithArray("mappingRules", std::move(mappingRulesJsonList));

  }

  return payload.View().WriteReadable();
}




