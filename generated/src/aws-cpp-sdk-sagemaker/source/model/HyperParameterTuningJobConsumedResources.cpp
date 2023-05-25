/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HyperParameterTuningJobConsumedResources.h>
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

HyperParameterTuningJobConsumedResources::HyperParameterTuningJobConsumedResources() : 
    m_runtimeInSeconds(0),
    m_runtimeInSecondsHasBeenSet(false)
{
}

HyperParameterTuningJobConsumedResources::HyperParameterTuningJobConsumedResources(JsonView jsonValue) : 
    m_runtimeInSeconds(0),
    m_runtimeInSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

HyperParameterTuningJobConsumedResources& HyperParameterTuningJobConsumedResources::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuntimeInSeconds"))
  {
    m_runtimeInSeconds = jsonValue.GetInteger("RuntimeInSeconds");

    m_runtimeInSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue HyperParameterTuningJobConsumedResources::Jsonize() const
{
  JsonValue payload;

  if(m_runtimeInSecondsHasBeenSet)
  {
   payload.WithInteger("RuntimeInSeconds", m_runtimeInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
