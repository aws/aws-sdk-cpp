/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-control-config/model/UpdateSafetyRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53RecoveryControlConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSafetyRuleRequest::UpdateSafetyRuleRequest() : 
    m_assertionRuleUpdateHasBeenSet(false),
    m_gatingRuleUpdateHasBeenSet(false)
{
}

Aws::String UpdateSafetyRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assertionRuleUpdateHasBeenSet)
  {
   payload.WithObject("AssertionRuleUpdate", m_assertionRuleUpdate.Jsonize());

  }

  if(m_gatingRuleUpdateHasBeenSet)
  {
   payload.WithObject("GatingRuleUpdate", m_gatingRuleUpdate.Jsonize());

  }

  return payload.View().WriteReadable();
}




