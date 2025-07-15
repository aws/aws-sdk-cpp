/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/PipelineVersionSummary.h>
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

PipelineVersionSummary::PipelineVersionSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

PipelineVersionSummary& PipelineVersionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PipelineArn"))
  {
    m_pipelineArn = jsonValue.GetString("PipelineArn");
    m_pipelineArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PipelineVersionId"))
  {
    m_pipelineVersionId = jsonValue.GetInt64("PipelineVersionId");
    m_pipelineVersionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PipelineVersionDescription"))
  {
    m_pipelineVersionDescription = jsonValue.GetString("PipelineVersionDescription");
    m_pipelineVersionDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PipelineVersionDisplayName"))
  {
    m_pipelineVersionDisplayName = jsonValue.GetString("PipelineVersionDisplayName");
    m_pipelineVersionDisplayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastExecutionPipelineExecutionArn"))
  {
    m_lastExecutionPipelineExecutionArn = jsonValue.GetString("LastExecutionPipelineExecutionArn");
    m_lastExecutionPipelineExecutionArnHasBeenSet = true;
  }
  return *this;
}

JsonValue PipelineVersionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_pipelineArnHasBeenSet)
  {
   payload.WithString("PipelineArn", m_pipelineArn);

  }

  if(m_pipelineVersionIdHasBeenSet)
  {
   payload.WithInt64("PipelineVersionId", m_pipelineVersionId);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_pipelineVersionDescriptionHasBeenSet)
  {
   payload.WithString("PipelineVersionDescription", m_pipelineVersionDescription);

  }

  if(m_pipelineVersionDisplayNameHasBeenSet)
  {
   payload.WithString("PipelineVersionDisplayName", m_pipelineVersionDisplayName);

  }

  if(m_lastExecutionPipelineExecutionArnHasBeenSet)
  {
   payload.WithString("LastExecutionPipelineExecutionArn", m_lastExecutionPipelineExecutionArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
