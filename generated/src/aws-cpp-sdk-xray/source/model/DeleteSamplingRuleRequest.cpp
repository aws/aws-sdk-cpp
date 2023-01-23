/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/DeleteSamplingRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteSamplingRuleRequest::DeleteSamplingRuleRequest() : 
    m_ruleNameHasBeenSet(false),
    m_ruleARNHasBeenSet(false)
{
}

Aws::String DeleteSamplingRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("RuleName", m_ruleName);

  }

  if(m_ruleARNHasBeenSet)
  {
   payload.WithString("RuleARN", m_ruleARN);

  }

  return payload.View().WriteReadable();
}




