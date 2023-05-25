/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceMetrics.h>
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

InferenceMetrics::InferenceMetrics() : 
    m_maxInvocations(0),
    m_maxInvocationsHasBeenSet(false),
    m_modelLatency(0),
    m_modelLatencyHasBeenSet(false)
{
}

InferenceMetrics::InferenceMetrics(JsonView jsonValue) : 
    m_maxInvocations(0),
    m_maxInvocationsHasBeenSet(false),
    m_modelLatency(0),
    m_modelLatencyHasBeenSet(false)
{
  *this = jsonValue;
}

InferenceMetrics& InferenceMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxInvocations"))
  {
    m_maxInvocations = jsonValue.GetInteger("MaxInvocations");

    m_maxInvocationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelLatency"))
  {
    m_modelLatency = jsonValue.GetInteger("ModelLatency");

    m_modelLatencyHasBeenSet = true;
  }

  return *this;
}

JsonValue InferenceMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_maxInvocationsHasBeenSet)
  {
   payload.WithInteger("MaxInvocations", m_maxInvocations);

  }

  if(m_modelLatencyHasBeenSet)
  {
   payload.WithInteger("ModelLatency", m_modelLatency);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
