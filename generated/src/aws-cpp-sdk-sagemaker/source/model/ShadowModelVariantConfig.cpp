/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ShadowModelVariantConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ShadowModelVariantConfig::ShadowModelVariantConfig() : 
    m_shadowModelVariantNameHasBeenSet(false),
    m_samplingPercentage(0),
    m_samplingPercentageHasBeenSet(false)
{
}

ShadowModelVariantConfig::ShadowModelVariantConfig(JsonView jsonValue) : 
    m_shadowModelVariantNameHasBeenSet(false),
    m_samplingPercentage(0),
    m_samplingPercentageHasBeenSet(false)
{
  *this = jsonValue;
}

ShadowModelVariantConfig& ShadowModelVariantConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ShadowModelVariantName"))
  {
    m_shadowModelVariantName = jsonValue.GetString("ShadowModelVariantName");

    m_shadowModelVariantNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SamplingPercentage"))
  {
    m_samplingPercentage = jsonValue.GetInteger("SamplingPercentage");

    m_samplingPercentageHasBeenSet = true;
  }

  return *this;
}

JsonValue ShadowModelVariantConfig::Jsonize() const
{
  JsonValue payload;

  if(m_shadowModelVariantNameHasBeenSet)
  {
   payload.WithString("ShadowModelVariantName", m_shadowModelVariantName);

  }

  if(m_samplingPercentageHasBeenSet)
  {
   payload.WithInteger("SamplingPercentage", m_samplingPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
