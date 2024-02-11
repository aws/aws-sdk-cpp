/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProductionVariantRoutingConfig.h>
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

ProductionVariantRoutingConfig::ProductionVariantRoutingConfig() : 
    m_routingStrategy(RoutingStrategy::NOT_SET),
    m_routingStrategyHasBeenSet(false)
{
}

ProductionVariantRoutingConfig::ProductionVariantRoutingConfig(JsonView jsonValue) : 
    m_routingStrategy(RoutingStrategy::NOT_SET),
    m_routingStrategyHasBeenSet(false)
{
  *this = jsonValue;
}

ProductionVariantRoutingConfig& ProductionVariantRoutingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoutingStrategy"))
  {
    m_routingStrategy = RoutingStrategyMapper::GetRoutingStrategyForName(jsonValue.GetString("RoutingStrategy"));

    m_routingStrategyHasBeenSet = true;
  }

  return *this;
}

JsonValue ProductionVariantRoutingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_routingStrategyHasBeenSet)
  {
   payload.WithString("RoutingStrategy", RoutingStrategyMapper::GetNameForRoutingStrategy(m_routingStrategy));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
