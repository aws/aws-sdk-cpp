/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrafficRoutingConfig.h>
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

TrafficRoutingConfig::TrafficRoutingConfig() : 
    m_type(TrafficRoutingConfigType::NOT_SET),
    m_typeHasBeenSet(false),
    m_waitIntervalInSeconds(0),
    m_waitIntervalInSecondsHasBeenSet(false),
    m_canarySizeHasBeenSet(false),
    m_linearStepSizeHasBeenSet(false)
{
}

TrafficRoutingConfig::TrafficRoutingConfig(JsonView jsonValue) : 
    m_type(TrafficRoutingConfigType::NOT_SET),
    m_typeHasBeenSet(false),
    m_waitIntervalInSeconds(0),
    m_waitIntervalInSecondsHasBeenSet(false),
    m_canarySizeHasBeenSet(false),
    m_linearStepSizeHasBeenSet(false)
{
  *this = jsonValue;
}

TrafficRoutingConfig& TrafficRoutingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = TrafficRoutingConfigTypeMapper::GetTrafficRoutingConfigTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WaitIntervalInSeconds"))
  {
    m_waitIntervalInSeconds = jsonValue.GetInteger("WaitIntervalInSeconds");

    m_waitIntervalInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CanarySize"))
  {
    m_canarySize = jsonValue.GetObject("CanarySize");

    m_canarySizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LinearStepSize"))
  {
    m_linearStepSize = jsonValue.GetObject("LinearStepSize");

    m_linearStepSizeHasBeenSet = true;
  }

  return *this;
}

JsonValue TrafficRoutingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", TrafficRoutingConfigTypeMapper::GetNameForTrafficRoutingConfigType(m_type));
  }

  if(m_waitIntervalInSecondsHasBeenSet)
  {
   payload.WithInteger("WaitIntervalInSeconds", m_waitIntervalInSeconds);

  }

  if(m_canarySizeHasBeenSet)
  {
   payload.WithObject("CanarySize", m_canarySize.Jsonize());

  }

  if(m_linearStepSizeHasBeenSet)
  {
   payload.WithObject("LinearStepSize", m_linearStepSize.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
