/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EndpointPerformance.h>
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

EndpointPerformance::EndpointPerformance() : 
    m_metricsHasBeenSet(false),
    m_endpointInfoHasBeenSet(false)
{
}

EndpointPerformance::EndpointPerformance(JsonView jsonValue) : 
    m_metricsHasBeenSet(false),
    m_endpointInfoHasBeenSet(false)
{
  *this = jsonValue;
}

EndpointPerformance& EndpointPerformance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Metrics"))
  {
    m_metrics = jsonValue.GetObject("Metrics");

    m_metricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointInfo"))
  {
    m_endpointInfo = jsonValue.GetObject("EndpointInfo");

    m_endpointInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue EndpointPerformance::Jsonize() const
{
  JsonValue payload;

  if(m_metricsHasBeenSet)
  {
   payload.WithObject("Metrics", m_metrics.Jsonize());

  }

  if(m_endpointInfoHasBeenSet)
  {
   payload.WithObject("EndpointInfo", m_endpointInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
