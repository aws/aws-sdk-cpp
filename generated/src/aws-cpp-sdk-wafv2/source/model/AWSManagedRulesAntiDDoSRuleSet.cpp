/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/AWSManagedRulesAntiDDoSRuleSet.h>
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

AWSManagedRulesAntiDDoSRuleSet::AWSManagedRulesAntiDDoSRuleSet(JsonView jsonValue)
{
  *this = jsonValue;
}

AWSManagedRulesAntiDDoSRuleSet& AWSManagedRulesAntiDDoSRuleSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClientSideActionConfig"))
  {
    m_clientSideActionConfig = jsonValue.GetObject("ClientSideActionConfig");
    m_clientSideActionConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SensitivityToBlock"))
  {
    m_sensitivityToBlock = SensitivityToActMapper::GetSensitivityToActForName(jsonValue.GetString("SensitivityToBlock"));
    m_sensitivityToBlockHasBeenSet = true;
  }
  return *this;
}

JsonValue AWSManagedRulesAntiDDoSRuleSet::Jsonize() const
{
  JsonValue payload;

  if(m_clientSideActionConfigHasBeenSet)
  {
   payload.WithObject("ClientSideActionConfig", m_clientSideActionConfig.Jsonize());

  }

  if(m_sensitivityToBlockHasBeenSet)
  {
   payload.WithString("SensitivityToBlock", SensitivityToActMapper::GetNameForSensitivityToAct(m_sensitivityToBlock));
  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
