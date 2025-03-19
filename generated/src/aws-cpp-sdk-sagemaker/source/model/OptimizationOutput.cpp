/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/OptimizationOutput.h>
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

OptimizationOutput::OptimizationOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

OptimizationOutput& OptimizationOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RecommendedInferenceImage"))
  {
    m_recommendedInferenceImage = jsonValue.GetString("RecommendedInferenceImage");
    m_recommendedInferenceImageHasBeenSet = true;
  }
  return *this;
}

JsonValue OptimizationOutput::Jsonize() const
{
  JsonValue payload;

  if(m_recommendedInferenceImageHasBeenSet)
  {
   payload.WithString("RecommendedInferenceImage", m_recommendedInferenceImage);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
