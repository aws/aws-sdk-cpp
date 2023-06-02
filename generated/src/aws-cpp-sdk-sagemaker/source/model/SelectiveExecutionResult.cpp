/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SelectiveExecutionResult.h>
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

SelectiveExecutionResult::SelectiveExecutionResult() : 
    m_sourcePipelineExecutionArnHasBeenSet(false)
{
}

SelectiveExecutionResult::SelectiveExecutionResult(JsonView jsonValue) : 
    m_sourcePipelineExecutionArnHasBeenSet(false)
{
  *this = jsonValue;
}

SelectiveExecutionResult& SelectiveExecutionResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourcePipelineExecutionArn"))
  {
    m_sourcePipelineExecutionArn = jsonValue.GetString("SourcePipelineExecutionArn");

    m_sourcePipelineExecutionArnHasBeenSet = true;
  }

  return *this;
}

JsonValue SelectiveExecutionResult::Jsonize() const
{
  JsonValue payload;

  if(m_sourcePipelineExecutionArnHasBeenSet)
  {
   payload.WithString("SourcePipelineExecutionArn", m_sourcePipelineExecutionArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
