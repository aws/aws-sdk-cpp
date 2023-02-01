/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-control-config/model/RuleConfig.h>
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

RuleConfig::RuleConfig() : 
    m_inverted(false),
    m_invertedHasBeenSet(false),
    m_threshold(0),
    m_thresholdHasBeenSet(false),
    m_type(RuleType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

RuleConfig::RuleConfig(JsonView jsonValue) : 
    m_inverted(false),
    m_invertedHasBeenSet(false),
    m_threshold(0),
    m_thresholdHasBeenSet(false),
    m_type(RuleType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

RuleConfig& RuleConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Inverted"))
  {
    m_inverted = jsonValue.GetBool("Inverted");

    m_invertedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Threshold"))
  {
    m_threshold = jsonValue.GetInteger("Threshold");

    m_thresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = RuleTypeMapper::GetRuleTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleConfig::Jsonize() const
{
  JsonValue payload;

  if(m_invertedHasBeenSet)
  {
   payload.WithBool("Inverted", m_inverted);

  }

  if(m_thresholdHasBeenSet)
  {
   payload.WithInteger("Threshold", m_threshold);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", RuleTypeMapper::GetNameForRuleType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
