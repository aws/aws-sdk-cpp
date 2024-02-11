/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/BatchGetConfigurationPolicyAssociationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetConfigurationPolicyAssociationsRequest::BatchGetConfigurationPolicyAssociationsRequest() : 
    m_configurationPolicyAssociationIdentifiersHasBeenSet(false)
{
}

Aws::String BatchGetConfigurationPolicyAssociationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationPolicyAssociationIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configurationPolicyAssociationIdentifiersJsonList(m_configurationPolicyAssociationIdentifiers.size());
   for(unsigned configurationPolicyAssociationIdentifiersIndex = 0; configurationPolicyAssociationIdentifiersIndex < configurationPolicyAssociationIdentifiersJsonList.GetLength(); ++configurationPolicyAssociationIdentifiersIndex)
   {
     configurationPolicyAssociationIdentifiersJsonList[configurationPolicyAssociationIdentifiersIndex].AsObject(m_configurationPolicyAssociationIdentifiers[configurationPolicyAssociationIdentifiersIndex].Jsonize());
   }
   payload.WithArray("ConfigurationPolicyAssociationIdentifiers", std::move(configurationPolicyAssociationIdentifiersJsonList));

  }

  return payload.View().WriteReadable();
}




