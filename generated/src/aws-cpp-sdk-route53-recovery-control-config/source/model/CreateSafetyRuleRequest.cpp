/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-control-config/model/CreateSafetyRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53RecoveryControlConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSafetyRuleRequest::CreateSafetyRuleRequest() : 
    m_assertionRuleHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_gatingRuleHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateSafetyRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assertionRuleHasBeenSet)
  {
   payload.WithObject("AssertionRule", m_assertionRule.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_gatingRuleHasBeenSet)
  {
   payload.WithObject("GatingRule", m_gatingRule.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




