/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ManagedRuleGroupConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

ManagedRuleGroupConfig::ManagedRuleGroupConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ManagedRuleGroupConfig& ManagedRuleGroupConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AWSManagedRulesBotControlRuleSet"))
  {
    m_aWSManagedRulesBotControlRuleSet = jsonValue.GetObject("AWSManagedRulesBotControlRuleSet");
    m_aWSManagedRulesBotControlRuleSetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AWSManagedRulesATPRuleSet"))
  {
    m_aWSManagedRulesATPRuleSet = jsonValue.GetObject("AWSManagedRulesATPRuleSet");
    m_aWSManagedRulesATPRuleSetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AWSManagedRulesACFPRuleSet"))
  {
    m_aWSManagedRulesACFPRuleSet = jsonValue.GetObject("AWSManagedRulesACFPRuleSet");
    m_aWSManagedRulesACFPRuleSetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AWSManagedRulesAntiDDoSRuleSet"))
  {
    m_aWSManagedRulesAntiDDoSRuleSet = jsonValue.GetObject("AWSManagedRulesAntiDDoSRuleSet");
    m_aWSManagedRulesAntiDDoSRuleSetHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedRuleGroupConfig::Jsonize() const
{
  JsonValue payload;

  if(m_aWSManagedRulesBotControlRuleSetHasBeenSet)
  {
   payload.WithObject("AWSManagedRulesBotControlRuleSet", m_aWSManagedRulesBotControlRuleSet.Jsonize());

  }

  if(m_aWSManagedRulesATPRuleSetHasBeenSet)
  {
   payload.WithObject("AWSManagedRulesATPRuleSet", m_aWSManagedRulesATPRuleSet.Jsonize());

  }

  if(m_aWSManagedRulesACFPRuleSetHasBeenSet)
  {
   payload.WithObject("AWSManagedRulesACFPRuleSet", m_aWSManagedRulesACFPRuleSet.Jsonize());

  }

  if(m_aWSManagedRulesAntiDDoSRuleSetHasBeenSet)
  {
   payload.WithObject("AWSManagedRulesAntiDDoSRuleSet", m_aWSManagedRulesAntiDDoSRuleSet.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
