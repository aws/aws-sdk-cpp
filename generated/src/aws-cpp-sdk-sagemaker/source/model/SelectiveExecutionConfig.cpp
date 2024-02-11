/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SelectiveExecutionConfig.h>
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

SelectiveExecutionConfig::SelectiveExecutionConfig() : 
    m_sourcePipelineExecutionArnHasBeenSet(false),
    m_selectedStepsHasBeenSet(false)
{
}

SelectiveExecutionConfig::SelectiveExecutionConfig(JsonView jsonValue) : 
    m_sourcePipelineExecutionArnHasBeenSet(false),
    m_selectedStepsHasBeenSet(false)
{
  *this = jsonValue;
}

SelectiveExecutionConfig& SelectiveExecutionConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourcePipelineExecutionArn"))
  {
    m_sourcePipelineExecutionArn = jsonValue.GetString("SourcePipelineExecutionArn");

    m_sourcePipelineExecutionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelectedSteps"))
  {
    Aws::Utils::Array<JsonView> selectedStepsJsonList = jsonValue.GetArray("SelectedSteps");
    for(unsigned selectedStepsIndex = 0; selectedStepsIndex < selectedStepsJsonList.GetLength(); ++selectedStepsIndex)
    {
      m_selectedSteps.push_back(selectedStepsJsonList[selectedStepsIndex].AsObject());
    }
    m_selectedStepsHasBeenSet = true;
  }

  return *this;
}

JsonValue SelectiveExecutionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_sourcePipelineExecutionArnHasBeenSet)
  {
   payload.WithString("SourcePipelineExecutionArn", m_sourcePipelineExecutionArn);

  }

  if(m_selectedStepsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selectedStepsJsonList(m_selectedSteps.size());
   for(unsigned selectedStepsIndex = 0; selectedStepsIndex < selectedStepsJsonList.GetLength(); ++selectedStepsIndex)
   {
     selectedStepsJsonList[selectedStepsIndex].AsObject(m_selectedSteps[selectedStepsIndex].Jsonize());
   }
   payload.WithArray("SelectedSteps", std::move(selectedStepsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
