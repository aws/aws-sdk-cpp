﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-control-config/model/NewGatingRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53RecoveryControlConfig
{
namespace Model
{

NewGatingRule::NewGatingRule(JsonView jsonValue)
{
  *this = jsonValue;
}

NewGatingRule& NewGatingRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ControlPanelArn"))
  {
    m_controlPanelArn = jsonValue.GetString("ControlPanelArn");
    m_controlPanelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GatingControls"))
  {
    Aws::Utils::Array<JsonView> gatingControlsJsonList = jsonValue.GetArray("GatingControls");
    for(unsigned gatingControlsIndex = 0; gatingControlsIndex < gatingControlsJsonList.GetLength(); ++gatingControlsIndex)
    {
      m_gatingControls.push_back(gatingControlsJsonList[gatingControlsIndex].AsString());
    }
    m_gatingControlsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuleConfig"))
  {
    m_ruleConfig = jsonValue.GetObject("RuleConfig");
    m_ruleConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetControls"))
  {
    Aws::Utils::Array<JsonView> targetControlsJsonList = jsonValue.GetArray("TargetControls");
    for(unsigned targetControlsIndex = 0; targetControlsIndex < targetControlsJsonList.GetLength(); ++targetControlsIndex)
    {
      m_targetControls.push_back(targetControlsJsonList[targetControlsIndex].AsString());
    }
    m_targetControlsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WaitPeriodMs"))
  {
    m_waitPeriodMs = jsonValue.GetInteger("WaitPeriodMs");
    m_waitPeriodMsHasBeenSet = true;
  }
  return *this;
}

JsonValue NewGatingRule::Jsonize() const
{
  JsonValue payload;

  if(m_controlPanelArnHasBeenSet)
  {
   payload.WithString("ControlPanelArn", m_controlPanelArn);

  }

  if(m_gatingControlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> gatingControlsJsonList(m_gatingControls.size());
   for(unsigned gatingControlsIndex = 0; gatingControlsIndex < gatingControlsJsonList.GetLength(); ++gatingControlsIndex)
   {
     gatingControlsJsonList[gatingControlsIndex].AsString(m_gatingControls[gatingControlsIndex]);
   }
   payload.WithArray("GatingControls", std::move(gatingControlsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_ruleConfigHasBeenSet)
  {
   payload.WithObject("RuleConfig", m_ruleConfig.Jsonize());

  }

  if(m_targetControlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetControlsJsonList(m_targetControls.size());
   for(unsigned targetControlsIndex = 0; targetControlsIndex < targetControlsJsonList.GetLength(); ++targetControlsIndex)
   {
     targetControlsJsonList[targetControlsIndex].AsString(m_targetControls[targetControlsIndex]);
   }
   payload.WithArray("TargetControls", std::move(targetControlsJsonList));

  }

  if(m_waitPeriodMsHasBeenSet)
  {
   payload.WithInteger("WaitPeriodMs", m_waitPeriodMs);

  }

  return payload;
}

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
