/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/EffectivePolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Organizations
{
namespace Model
{

EffectivePolicy::EffectivePolicy() : 
    m_policyContentHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_targetIdHasBeenSet(false),
    m_policyType(EffectivePolicyType::NOT_SET),
    m_policyTypeHasBeenSet(false)
{
}

EffectivePolicy::EffectivePolicy(JsonView jsonValue) : 
    m_policyContentHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_targetIdHasBeenSet(false),
    m_policyType(EffectivePolicyType::NOT_SET),
    m_policyTypeHasBeenSet(false)
{
  *this = jsonValue;
}

EffectivePolicy& EffectivePolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicyContent"))
  {
    m_policyContent = jsonValue.GetString("PolicyContent");

    m_policyContentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("LastUpdatedTimestamp");

    m_lastUpdatedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetId"))
  {
    m_targetId = jsonValue.GetString("TargetId");

    m_targetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyType"))
  {
    m_policyType = EffectivePolicyTypeMapper::GetEffectivePolicyTypeForName(jsonValue.GetString("PolicyType"));

    m_policyTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue EffectivePolicy::Jsonize() const
{
  JsonValue payload;

  if(m_policyContentHasBeenSet)
  {
   payload.WithString("PolicyContent", m_policyContent);

  }

  if(m_lastUpdatedTimestampHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTimestamp", m_lastUpdatedTimestamp.SecondsWithMSPrecision());
  }

  if(m_targetIdHasBeenSet)
  {
   payload.WithString("TargetId", m_targetId);

  }

  if(m_policyTypeHasBeenSet)
  {
   payload.WithString("PolicyType", EffectivePolicyTypeMapper::GetNameForEffectivePolicyType(m_policyType));
  }

  return payload;
}

} // namespace Model
} // namespace Organizations
} // namespace Aws
