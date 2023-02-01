/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/CreateRuleGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRuleGroupRequest::CreateRuleGroupRequest() : 
    m_ruleGroupNameHasBeenSet(false),
    m_ruleGroupHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_type(RuleGroupType::NOT_SET),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_capacity(0),
    m_capacityHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_sourceMetadataHasBeenSet(false)
{
}

Aws::String CreateRuleGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ruleGroupNameHasBeenSet)
  {
   payload.WithString("RuleGroupName", m_ruleGroupName);

  }

  if(m_ruleGroupHasBeenSet)
  {
   payload.WithObject("RuleGroup", m_ruleGroup.Jsonize());

  }

  if(m_rulesHasBeenSet)
  {
   payload.WithString("Rules", m_rules);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", RuleGroupTypeMapper::GetNameForRuleGroupType(m_type));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_capacityHasBeenSet)
  {
   payload.WithInteger("Capacity", m_capacity);

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

  if(m_dryRunHasBeenSet)
  {
   payload.WithBool("DryRun", m_dryRun);

  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("EncryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  if(m_sourceMetadataHasBeenSet)
  {
   payload.WithObject("SourceMetadata", m_sourceMetadata.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateRuleGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.CreateRuleGroup"));
  return headers;

}




