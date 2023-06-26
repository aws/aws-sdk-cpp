/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CacheHitResult.h>
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

CacheHitResult::CacheHitResult() : 
    m_sourcePipelineExecutionArnHasBeenSet(false)
{
}

CacheHitResult::CacheHitResult(JsonView jsonValue) : 
    m_sourcePipelineExecutionArnHasBeenSet(false)
{
  *this = jsonValue;
}

CacheHitResult& CacheHitResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourcePipelineExecutionArn"))
  {
    m_sourcePipelineExecutionArn = jsonValue.GetString("SourcePipelineExecutionArn");

    m_sourcePipelineExecutionArnHasBeenSet = true;
  }

  return *this;
}

JsonValue CacheHitResult::Jsonize() const
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
