/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/OptimizationModelAccessConfig.h>
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

OptimizationModelAccessConfig::OptimizationModelAccessConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

OptimizationModelAccessConfig& OptimizationModelAccessConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AcceptEula"))
  {
    m_acceptEula = jsonValue.GetBool("AcceptEula");
    m_acceptEulaHasBeenSet = true;
  }
  return *this;
}

JsonValue OptimizationModelAccessConfig::Jsonize() const
{
  JsonValue payload;

  if(m_acceptEulaHasBeenSet)
  {
   payload.WithBool("AcceptEula", m_acceptEula);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
