/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClarifyExplainerConfig.h>
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

ClarifyExplainerConfig::ClarifyExplainerConfig() : 
    m_enableExplanationsHasBeenSet(false),
    m_inferenceConfigHasBeenSet(false),
    m_shapConfigHasBeenSet(false)
{
}

ClarifyExplainerConfig::ClarifyExplainerConfig(JsonView jsonValue) : 
    m_enableExplanationsHasBeenSet(false),
    m_inferenceConfigHasBeenSet(false),
    m_shapConfigHasBeenSet(false)
{
  *this = jsonValue;
}

ClarifyExplainerConfig& ClarifyExplainerConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableExplanations"))
  {
    m_enableExplanations = jsonValue.GetString("EnableExplanations");

    m_enableExplanationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InferenceConfig"))
  {
    m_inferenceConfig = jsonValue.GetObject("InferenceConfig");

    m_inferenceConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShapConfig"))
  {
    m_shapConfig = jsonValue.GetObject("ShapConfig");

    m_shapConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue ClarifyExplainerConfig::Jsonize() const
{
  JsonValue payload;

  if(m_enableExplanationsHasBeenSet)
  {
   payload.WithString("EnableExplanations", m_enableExplanations);

  }

  if(m_inferenceConfigHasBeenSet)
  {
   payload.WithObject("InferenceConfig", m_inferenceConfig.Jsonize());

  }

  if(m_shapConfigHasBeenSet)
  {
   payload.WithObject("ShapConfig", m_shapConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
