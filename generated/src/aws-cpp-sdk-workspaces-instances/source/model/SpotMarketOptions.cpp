/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/SpotMarketOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{

SpotMarketOptions::SpotMarketOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

SpotMarketOptions& SpotMarketOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BlockDurationMinutes"))
  {
    m_blockDurationMinutes = jsonValue.GetInteger("BlockDurationMinutes");
    m_blockDurationMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceInterruptionBehavior"))
  {
    m_instanceInterruptionBehavior = InstanceInterruptionBehaviorEnumMapper::GetInstanceInterruptionBehaviorEnumForName(jsonValue.GetString("InstanceInterruptionBehavior"));
    m_instanceInterruptionBehaviorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxPrice"))
  {
    m_maxPrice = jsonValue.GetString("MaxPrice");
    m_maxPriceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SpotInstanceType"))
  {
    m_spotInstanceType = SpotInstanceTypeEnumMapper::GetSpotInstanceTypeEnumForName(jsonValue.GetString("SpotInstanceType"));
    m_spotInstanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ValidUntilUtc"))
  {
    m_validUntilUtc = jsonValue.GetDouble("ValidUntilUtc");
    m_validUntilUtcHasBeenSet = true;
  }
  return *this;
}

JsonValue SpotMarketOptions::Jsonize() const
{
  JsonValue payload;

  if(m_blockDurationMinutesHasBeenSet)
  {
   payload.WithInteger("BlockDurationMinutes", m_blockDurationMinutes);

  }

  if(m_instanceInterruptionBehaviorHasBeenSet)
  {
   payload.WithString("InstanceInterruptionBehavior", InstanceInterruptionBehaviorEnumMapper::GetNameForInstanceInterruptionBehaviorEnum(m_instanceInterruptionBehavior));
  }

  if(m_maxPriceHasBeenSet)
  {
   payload.WithString("MaxPrice", m_maxPrice);

  }

  if(m_spotInstanceTypeHasBeenSet)
  {
   payload.WithString("SpotInstanceType", SpotInstanceTypeEnumMapper::GetNameForSpotInstanceTypeEnum(m_spotInstanceType));
  }

  if(m_validUntilUtcHasBeenSet)
  {
   payload.WithDouble("ValidUntilUtc", m_validUntilUtc.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
