/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/PipeTargetSageMakerPipelineParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

PipeTargetSageMakerPipelineParameters::PipeTargetSageMakerPipelineParameters() : 
    m_pipelineParameterListHasBeenSet(false)
{
}

PipeTargetSageMakerPipelineParameters::PipeTargetSageMakerPipelineParameters(JsonView jsonValue) : 
    m_pipelineParameterListHasBeenSet(false)
{
  *this = jsonValue;
}

PipeTargetSageMakerPipelineParameters& PipeTargetSageMakerPipelineParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PipelineParameterList"))
  {
    Aws::Utils::Array<JsonView> pipelineParameterListJsonList = jsonValue.GetArray("PipelineParameterList");
    for(unsigned pipelineParameterListIndex = 0; pipelineParameterListIndex < pipelineParameterListJsonList.GetLength(); ++pipelineParameterListIndex)
    {
      m_pipelineParameterList.push_back(pipelineParameterListJsonList[pipelineParameterListIndex].AsObject());
    }
    m_pipelineParameterListHasBeenSet = true;
  }

  return *this;
}

JsonValue PipeTargetSageMakerPipelineParameters::Jsonize() const
{
  JsonValue payload;

  if(m_pipelineParameterListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pipelineParameterListJsonList(m_pipelineParameterList.size());
   for(unsigned pipelineParameterListIndex = 0; pipelineParameterListIndex < pipelineParameterListJsonList.GetLength(); ++pipelineParameterListIndex)
   {
     pipelineParameterListJsonList[pipelineParameterListIndex].AsObject(m_pipelineParameterList[pipelineParameterListIndex].Jsonize());
   }
   payload.WithArray("PipelineParameterList", std::move(pipelineParameterListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
