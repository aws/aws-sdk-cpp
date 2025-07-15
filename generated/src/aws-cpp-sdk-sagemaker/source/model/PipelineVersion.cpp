/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/PipelineVersion.h>
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

PipelineVersion::PipelineVersion(JsonView jsonValue)
{
  *this = jsonValue;
}

PipelineVersion& PipelineVersion::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("PipelineVersionDisplayName"))
  {
    m_pipelineVersionDisplayName = jsonValue.GetString("PipelineVersionDisplayName");
    m_pipelineVersionDisplayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PipelineVersionDescription"))
  {
    m_pipelineVersionDescription = jsonValue.GetString("PipelineVersionDescription");
    m_pipelineVersionDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetObject("LastModifiedBy");
    m_lastModifiedByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastExecutedPipelineExecutionArn"))
  {
    m_lastExecutedPipelineExecutionArn = jsonValue.GetString("LastExecutedPipelineExecutionArn");
    m_lastExecutedPipelineExecutionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastExecutedPipelineExecutionDisplayName"))
  {
    m_lastExecutedPipelineExecutionDisplayName = jsonValue.GetString("LastExecutedPipelineExecutionDisplayName");
    m_lastExecutedPipelineExecutionDisplayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastExecutedPipelineExecutionStatus"))
  {
    m_lastExecutedPipelineExecutionStatus = PipelineExecutionStatusMapper::GetPipelineExecutionStatusForName(jsonValue.GetString("LastExecutedPipelineExecutionStatus"));
    m_lastExecutedPipelineExecutionStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue PipelineVersion::Jsonize() const
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

  if(m_pipelineVersionDisplayNameHasBeenSet)
  {
   payload.WithString("PipelineVersionDisplayName", m_pipelineVersionDisplayName);

  }

  if(m_pipelineVersionDescriptionHasBeenSet)
  {
   payload.WithString("PipelineVersionDescription", m_pipelineVersionDescription);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithObject("CreatedBy", m_createdBy.Jsonize());

  }

  if(m_lastModifiedByHasBeenSet)
  {
   payload.WithObject("LastModifiedBy", m_lastModifiedBy.Jsonize());

  }

  if(m_lastExecutedPipelineExecutionArnHasBeenSet)
  {
   payload.WithString("LastExecutedPipelineExecutionArn", m_lastExecutedPipelineExecutionArn);

  }

  if(m_lastExecutedPipelineExecutionDisplayNameHasBeenSet)
  {
   payload.WithString("LastExecutedPipelineExecutionDisplayName", m_lastExecutedPipelineExecutionDisplayName);

  }

  if(m_lastExecutedPipelineExecutionStatusHasBeenSet)
  {
   payload.WithString("LastExecutedPipelineExecutionStatus", PipelineExecutionStatusMapper::GetNameForPipelineExecutionStatus(m_lastExecutedPipelineExecutionStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
