/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HyperbandStrategyConfig.h>
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

HyperbandStrategyConfig::HyperbandStrategyConfig() : 
    m_minResource(0),
    m_minResourceHasBeenSet(false),
    m_maxResource(0),
    m_maxResourceHasBeenSet(false)
{
}

HyperbandStrategyConfig::HyperbandStrategyConfig(JsonView jsonValue) : 
    m_minResource(0),
    m_minResourceHasBeenSet(false),
    m_maxResource(0),
    m_maxResourceHasBeenSet(false)
{
  *this = jsonValue;
}

HyperbandStrategyConfig& HyperbandStrategyConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MinResource"))
  {
    m_minResource = jsonValue.GetInteger("MinResource");

    m_minResourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxResource"))
  {
    m_maxResource = jsonValue.GetInteger("MaxResource");

    m_maxResourceHasBeenSet = true;
  }

  return *this;
}

JsonValue HyperbandStrategyConfig::Jsonize() const
{
  JsonValue payload;

  if(m_minResourceHasBeenSet)
  {
   payload.WithInteger("MinResource", m_minResource);

  }

  if(m_maxResourceHasBeenSet)
  {
   payload.WithInteger("MaxResource", m_maxResource);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
