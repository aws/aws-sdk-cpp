/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails::AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails() : 
    m_blockDurationMinutes(0),
    m_blockDurationMinutesHasBeenSet(false),
    m_instanceInterruptionBehaviorHasBeenSet(false),
    m_maxPriceHasBeenSet(false),
    m_spotInstanceTypeHasBeenSet(false),
    m_validUntilHasBeenSet(false)
{
}

AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails::AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails(JsonView jsonValue) : 
    m_blockDurationMinutes(0),
    m_blockDurationMinutesHasBeenSet(false),
    m_instanceInterruptionBehaviorHasBeenSet(false),
    m_maxPriceHasBeenSet(false),
    m_spotInstanceTypeHasBeenSet(false),
    m_validUntilHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails& AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BlockDurationMinutes"))
  {
    m_blockDurationMinutes = jsonValue.GetInteger("BlockDurationMinutes");

    m_blockDurationMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceInterruptionBehavior"))
  {
    m_instanceInterruptionBehavior = jsonValue.GetString("InstanceInterruptionBehavior");

    m_instanceInterruptionBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxPrice"))
  {
    m_maxPrice = jsonValue.GetString("MaxPrice");

    m_maxPriceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpotInstanceType"))
  {
    m_spotInstanceType = jsonValue.GetString("SpotInstanceType");

    m_spotInstanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidUntil"))
  {
    m_validUntil = jsonValue.GetString("ValidUntil");

    m_validUntilHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_blockDurationMinutesHasBeenSet)
  {
   payload.WithInteger("BlockDurationMinutes", m_blockDurationMinutes);

  }

  if(m_instanceInterruptionBehaviorHasBeenSet)
  {
   payload.WithString("InstanceInterruptionBehavior", m_instanceInterruptionBehavior);

  }

  if(m_maxPriceHasBeenSet)
  {
   payload.WithString("MaxPrice", m_maxPrice);

  }

  if(m_spotInstanceTypeHasBeenSet)
  {
   payload.WithString("SpotInstanceType", m_spotInstanceType);

  }

  if(m_validUntilHasBeenSet)
  {
   payload.WithString("ValidUntil", m_validUntil);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
