/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/OptimizationJobSummary.h>
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

OptimizationJobSummary::OptimizationJobSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

OptimizationJobSummary& OptimizationJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OptimizationJobName"))
  {
    m_optimizationJobName = jsonValue.GetString("OptimizationJobName");
    m_optimizationJobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OptimizationJobArn"))
  {
    m_optimizationJobArn = jsonValue.GetString("OptimizationJobArn");
    m_optimizationJobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OptimizationJobStatus"))
  {
    m_optimizationJobStatus = OptimizationJobStatusMapper::GetOptimizationJobStatusForName(jsonValue.GetString("OptimizationJobStatus"));
    m_optimizationJobStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OptimizationStartTime"))
  {
    m_optimizationStartTime = jsonValue.GetDouble("OptimizationStartTime");
    m_optimizationStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OptimizationEndTime"))
  {
    m_optimizationEndTime = jsonValue.GetDouble("OptimizationEndTime");
    m_optimizationEndTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeploymentInstanceType"))
  {
    m_deploymentInstanceType = OptimizationJobDeploymentInstanceTypeMapper::GetOptimizationJobDeploymentInstanceTypeForName(jsonValue.GetString("DeploymentInstanceType"));
    m_deploymentInstanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OptimizationTypes"))
  {
    Aws::Utils::Array<JsonView> optimizationTypesJsonList = jsonValue.GetArray("OptimizationTypes");
    for(unsigned optimizationTypesIndex = 0; optimizationTypesIndex < optimizationTypesJsonList.GetLength(); ++optimizationTypesIndex)
    {
      m_optimizationTypes.push_back(optimizationTypesJsonList[optimizationTypesIndex].AsString());
    }
    m_optimizationTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue OptimizationJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_optimizationJobNameHasBeenSet)
  {
   payload.WithString("OptimizationJobName", m_optimizationJobName);

  }

  if(m_optimizationJobArnHasBeenSet)
  {
   payload.WithString("OptimizationJobArn", m_optimizationJobArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_optimizationJobStatusHasBeenSet)
  {
   payload.WithString("OptimizationJobStatus", OptimizationJobStatusMapper::GetNameForOptimizationJobStatus(m_optimizationJobStatus));
  }

  if(m_optimizationStartTimeHasBeenSet)
  {
   payload.WithDouble("OptimizationStartTime", m_optimizationStartTime.SecondsWithMSPrecision());
  }

  if(m_optimizationEndTimeHasBeenSet)
  {
   payload.WithDouble("OptimizationEndTime", m_optimizationEndTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_deploymentInstanceTypeHasBeenSet)
  {
   payload.WithString("DeploymentInstanceType", OptimizationJobDeploymentInstanceTypeMapper::GetNameForOptimizationJobDeploymentInstanceType(m_deploymentInstanceType));
  }

  if(m_optimizationTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> optimizationTypesJsonList(m_optimizationTypes.size());
   for(unsigned optimizationTypesIndex = 0; optimizationTypesIndex < optimizationTypesJsonList.GetLength(); ++optimizationTypesIndex)
   {
     optimizationTypesJsonList[optimizationTypesIndex].AsString(m_optimizationTypes[optimizationTypesIndex]);
   }
   payload.WithArray("OptimizationTypes", std::move(optimizationTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
