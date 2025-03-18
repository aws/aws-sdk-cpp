/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterSummary.h>
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

ClusterSummary::ClusterSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ClusterSummary& ClusterSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClusterArn"))
  {
    m_clusterArn = jsonValue.GetString("ClusterArn");
    m_clusterArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClusterName"))
  {
    m_clusterName = jsonValue.GetString("ClusterName");
    m_clusterNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClusterStatus"))
  {
    m_clusterStatus = ClusterStatusMapper::GetClusterStatusForName(jsonValue.GetString("ClusterStatus"));
    m_clusterStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrainingPlanArns"))
  {
    Aws::Utils::Array<JsonView> trainingPlanArnsJsonList = jsonValue.GetArray("TrainingPlanArns");
    for(unsigned trainingPlanArnsIndex = 0; trainingPlanArnsIndex < trainingPlanArnsJsonList.GetLength(); ++trainingPlanArnsIndex)
    {
      m_trainingPlanArns.push_back(trainingPlanArnsJsonList[trainingPlanArnsIndex].AsString());
    }
    m_trainingPlanArnsHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterSummary::Jsonize() const
{
  JsonValue payload;

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("ClusterArn", m_clusterArn);

  }

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("ClusterName", m_clusterName);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_clusterStatusHasBeenSet)
  {
   payload.WithString("ClusterStatus", ClusterStatusMapper::GetNameForClusterStatus(m_clusterStatus));
  }

  if(m_trainingPlanArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> trainingPlanArnsJsonList(m_trainingPlanArns.size());
   for(unsigned trainingPlanArnsIndex = 0; trainingPlanArnsIndex < trainingPlanArnsJsonList.GetLength(); ++trainingPlanArnsIndex)
   {
     trainingPlanArnsJsonList[trainingPlanArnsIndex].AsString(m_trainingPlanArns[trainingPlanArnsIndex]);
   }
   payload.WithArray("TrainingPlanArns", std::move(trainingPlanArnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
