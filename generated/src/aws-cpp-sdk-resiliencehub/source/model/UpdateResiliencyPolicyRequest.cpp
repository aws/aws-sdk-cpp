﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/UpdateResiliencyPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateResiliencyPolicyRequest::SerializePayload() const
{
  JsonValue payload;

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

  if(m_policyArnHasBeenSet)
  {
   payload.WithString("policyArn", m_policyArn);

  }

  if(m_policyDescriptionHasBeenSet)
  {
   payload.WithString("policyDescription", m_policyDescription);

  }

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("policyName", m_policyName);

  }

  if(m_tierHasBeenSet)
  {
   payload.WithString("tier", ResiliencyPolicyTierMapper::GetNameForResiliencyPolicyTier(m_tier));
  }

  return payload.View().WriteReadable();
}




