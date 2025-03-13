/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/StatefulEngineOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

StatefulEngineOptions::StatefulEngineOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

StatefulEngineOptions& StatefulEngineOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleOrder"))
  {
    m_ruleOrder = RuleOrderMapper::GetRuleOrderForName(jsonValue.GetString("RuleOrder"));
    m_ruleOrderHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StreamExceptionPolicy"))
  {
    m_streamExceptionPolicy = StreamExceptionPolicyMapper::GetStreamExceptionPolicyForName(jsonValue.GetString("StreamExceptionPolicy"));
    m_streamExceptionPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FlowTimeouts"))
  {
    m_flowTimeouts = jsonValue.GetObject("FlowTimeouts");
    m_flowTimeoutsHasBeenSet = true;
  }
  return *this;
}

JsonValue StatefulEngineOptions::Jsonize() const
{
  JsonValue payload;

  if(m_ruleOrderHasBeenSet)
  {
   payload.WithString("RuleOrder", RuleOrderMapper::GetNameForRuleOrder(m_ruleOrder));
  }

  if(m_streamExceptionPolicyHasBeenSet)
  {
   payload.WithString("StreamExceptionPolicy", StreamExceptionPolicyMapper::GetNameForStreamExceptionPolicy(m_streamExceptionPolicy));
  }

  if(m_flowTimeoutsHasBeenSet)
  {
   payload.WithObject("FlowTimeouts", m_flowTimeouts.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
