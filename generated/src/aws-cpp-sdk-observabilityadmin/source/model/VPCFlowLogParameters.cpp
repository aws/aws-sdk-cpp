/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/model/VPCFlowLogParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ObservabilityAdmin
{
namespace Model
{

VPCFlowLogParameters::VPCFlowLogParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

VPCFlowLogParameters& VPCFlowLogParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogFormat"))
  {
    m_logFormat = jsonValue.GetString("LogFormat");
    m_logFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrafficType"))
  {
    m_trafficType = jsonValue.GetString("TrafficType");
    m_trafficTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxAggregationInterval"))
  {
    m_maxAggregationInterval = jsonValue.GetInteger("MaxAggregationInterval");
    m_maxAggregationIntervalHasBeenSet = true;
  }
  return *this;
}

JsonValue VPCFlowLogParameters::Jsonize() const
{
  JsonValue payload;

  if(m_logFormatHasBeenSet)
  {
   payload.WithString("LogFormat", m_logFormat);

  }

  if(m_trafficTypeHasBeenSet)
  {
   payload.WithString("TrafficType", m_trafficType);

  }

  if(m_maxAggregationIntervalHasBeenSet)
  {
   payload.WithInteger("MaxAggregationInterval", m_maxAggregationInterval);

  }

  return payload;
}

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
