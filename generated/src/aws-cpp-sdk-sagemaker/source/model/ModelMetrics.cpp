/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelMetrics.h>
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

ModelMetrics::ModelMetrics() : 
    m_modelQualityHasBeenSet(false),
    m_modelDataQualityHasBeenSet(false),
    m_biasHasBeenSet(false),
    m_explainabilityHasBeenSet(false)
{
}

ModelMetrics::ModelMetrics(JsonView jsonValue) : 
    m_modelQualityHasBeenSet(false),
    m_modelDataQualityHasBeenSet(false),
    m_biasHasBeenSet(false),
    m_explainabilityHasBeenSet(false)
{
  *this = jsonValue;
}

ModelMetrics& ModelMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelQuality"))
  {
    m_modelQuality = jsonValue.GetObject("ModelQuality");

    m_modelQualityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelDataQuality"))
  {
    m_modelDataQuality = jsonValue.GetObject("ModelDataQuality");

    m_modelDataQualityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Bias"))
  {
    m_bias = jsonValue.GetObject("Bias");

    m_biasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Explainability"))
  {
    m_explainability = jsonValue.GetObject("Explainability");

    m_explainabilityHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_modelQualityHasBeenSet)
  {
   payload.WithObject("ModelQuality", m_modelQuality.Jsonize());

  }

  if(m_modelDataQualityHasBeenSet)
  {
   payload.WithObject("ModelDataQuality", m_modelDataQuality.Jsonize());

  }

  if(m_biasHasBeenSet)
  {
   payload.WithObject("Bias", m_bias.Jsonize());

  }

  if(m_explainabilityHasBeenSet)
  {
   payload.WithObject("Explainability", m_explainability.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
