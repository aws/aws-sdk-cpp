/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/OptimizationConfig.h>
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

OptimizationConfig::OptimizationConfig() : 
    m_modelQuantizationConfigHasBeenSet(false),
    m_modelCompilationConfigHasBeenSet(false)
{
}

OptimizationConfig::OptimizationConfig(JsonView jsonValue)
  : OptimizationConfig()
{
  *this = jsonValue;
}

OptimizationConfig& OptimizationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelQuantizationConfig"))
  {
    m_modelQuantizationConfig = jsonValue.GetObject("ModelQuantizationConfig");

    m_modelQuantizationConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelCompilationConfig"))
  {
    m_modelCompilationConfig = jsonValue.GetObject("ModelCompilationConfig");

    m_modelCompilationConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue OptimizationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_modelQuantizationConfigHasBeenSet)
  {
   payload.WithObject("ModelQuantizationConfig", m_modelQuantizationConfig.Jsonize());

  }

  if(m_modelCompilationConfigHasBeenSet)
  {
   payload.WithObject("ModelCompilationConfig", m_modelCompilationConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
