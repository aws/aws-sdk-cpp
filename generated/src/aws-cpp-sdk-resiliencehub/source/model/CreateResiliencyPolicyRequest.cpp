/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/CreateResiliencyPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateResiliencyPolicyRequest::CreateResiliencyPolicyRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_dataLocationConstraint(DataLocationConstraint::NOT_SET),
    m_dataLocationConstraintHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_policyDescriptionHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_tier(ResiliencyPolicyTier::NOT_SET),
    m_tierHasBeenSet(false)
{
}

Aws::String CreateResiliencyPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_dataLocationConstraintHasBeenSet)
  {
   payload.WithString("dataLocationConstraint", DataLocationConstraintMapper::GetNameForDataLocationConstraint(m_dataLocationConstraint));
  }

  if(m_policyHasBeenSet)
  {
   JsonValue policyJsonMap;
   for(auto& policyItem : m_policy)
   {
     policyJsonMap.WithObject(DisruptionTypeMapper::GetNameForDisruptionType(policyItem.first), policyItem.second.Jsonize());
   }
   payload.WithObject("policy", std::move(policyJsonMap));

  }

  if(m_policyDescriptionHasBeenSet)
  {
   payload.WithString("policyDescription", m_policyDescription);

  }

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("policyName", m_policyName);

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

  if(m_tierHasBeenSet)
  {
   payload.WithString("tier", ResiliencyPolicyTierMapper::GetNameForResiliencyPolicyTier(m_tier));
  }

  return payload.View().WriteReadable();
}




