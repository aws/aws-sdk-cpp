/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/VectorConfig.h>
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

VectorConfig::VectorConfig() : 
    m_dimension(0),
    m_dimensionHasBeenSet(false)
{
}

VectorConfig::VectorConfig(JsonView jsonValue) : 
    m_dimension(0),
    m_dimensionHasBeenSet(false)
{
  *this = jsonValue;
}

VectorConfig& VectorConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Dimension"))
  {
    m_dimension = jsonValue.GetInteger("Dimension");

    m_dimensionHasBeenSet = true;
  }

  return *this;
}

JsonValue VectorConfig::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionHasBeenSet)
  {
   payload.WithInteger("Dimension", m_dimension);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
