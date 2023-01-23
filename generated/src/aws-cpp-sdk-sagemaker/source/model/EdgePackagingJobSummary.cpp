/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EdgePackagingJobSummary.h>
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

EdgePackagingJobSummary::EdgePackagingJobSummary() : 
    m_edgePackagingJobArnHasBeenSet(false),
    m_edgePackagingJobNameHasBeenSet(false),
    m_edgePackagingJobStatus(EdgePackagingJobStatus::NOT_SET),
    m_edgePackagingJobStatusHasBeenSet(false),
    m_compilationJobNameHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

EdgePackagingJobSummary::EdgePackagingJobSummary(JsonView jsonValue) : 
    m_edgePackagingJobArnHasBeenSet(false),
    m_edgePackagingJobNameHasBeenSet(false),
    m_edgePackagingJobStatus(EdgePackagingJobStatus::NOT_SET),
    m_edgePackagingJobStatusHasBeenSet(false),
    m_compilationJobNameHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

EdgePackagingJobSummary& EdgePackagingJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EdgePackagingJobArn"))
  {
    m_edgePackagingJobArn = jsonValue.GetString("EdgePackagingJobArn");

    m_edgePackagingJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EdgePackagingJobName"))
  {
    m_edgePackagingJobName = jsonValue.GetString("EdgePackagingJobName");

    m_edgePackagingJobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EdgePackagingJobStatus"))
  {
    m_edgePackagingJobStatus = EdgePackagingJobStatusMapper::GetEdgePackagingJobStatusForName(jsonValue.GetString("EdgePackagingJobStatus"));

    m_edgePackagingJobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompilationJobName"))
  {
    m_compilationJobName = jsonValue.GetString("CompilationJobName");

    m_compilationJobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelName"))
  {
    m_modelName = jsonValue.GetString("ModelName");

    m_modelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelVersion"))
  {
    m_modelVersion = jsonValue.GetString("ModelVersion");

    m_modelVersionHasBeenSet = true;
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

  return *this;
}

JsonValue EdgePackagingJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_edgePackagingJobArnHasBeenSet)
  {
   payload.WithString("EdgePackagingJobArn", m_edgePackagingJobArn);

  }

  if(m_edgePackagingJobNameHasBeenSet)
  {
   payload.WithString("EdgePackagingJobName", m_edgePackagingJobName);

  }

  if(m_edgePackagingJobStatusHasBeenSet)
  {
   payload.WithString("EdgePackagingJobStatus", EdgePackagingJobStatusMapper::GetNameForEdgePackagingJobStatus(m_edgePackagingJobStatus));
  }

  if(m_compilationJobNameHasBeenSet)
  {
   payload.WithString("CompilationJobName", m_compilationJobName);

  }

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  if(m_modelVersionHasBeenSet)
  {
   payload.WithString("ModelVersion", m_modelVersion);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
