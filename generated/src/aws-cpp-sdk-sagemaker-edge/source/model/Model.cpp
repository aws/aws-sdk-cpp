/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-edge/model/Model.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SagemakerEdgeManager
{
namespace Model
{

Model::Model() : 
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_latestSampleTimeHasBeenSet(false),
    m_latestInferenceHasBeenSet(false),
    m_modelMetricsHasBeenSet(false)
{
}

Model::Model(JsonView jsonValue) : 
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_latestSampleTimeHasBeenSet(false),
    m_latestInferenceHasBeenSet(false),
    m_modelMetricsHasBeenSet(false)
{
  *this = jsonValue;
}

Model& Model::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("LatestSampleTime"))
  {
    m_latestSampleTime = jsonValue.GetDouble("LatestSampleTime");

    m_latestSampleTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestInference"))
  {
    m_latestInference = jsonValue.GetDouble("LatestInference");

    m_latestInferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelMetrics"))
  {
    Aws::Utils::Array<JsonView> modelMetricsJsonList = jsonValue.GetArray("ModelMetrics");
    for(unsigned modelMetricsIndex = 0; modelMetricsIndex < modelMetricsJsonList.GetLength(); ++modelMetricsIndex)
    {
      m_modelMetrics.push_back(modelMetricsJsonList[modelMetricsIndex].AsObject());
    }
    m_modelMetricsHasBeenSet = true;
  }

  return *this;
}

JsonValue Model::Jsonize() const
{
  JsonValue payload;

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  if(m_modelVersionHasBeenSet)
  {
   payload.WithString("ModelVersion", m_modelVersion);

  }

  if(m_latestSampleTimeHasBeenSet)
  {
   payload.WithDouble("LatestSampleTime", m_latestSampleTime.SecondsWithMSPrecision());
  }

  if(m_latestInferenceHasBeenSet)
  {
   payload.WithDouble("LatestInference", m_latestInference.SecondsWithMSPrecision());
  }

  if(m_modelMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> modelMetricsJsonList(m_modelMetrics.size());
   for(unsigned modelMetricsIndex = 0; modelMetricsIndex < modelMetricsJsonList.GetLength(); ++modelMetricsIndex)
   {
     modelMetricsJsonList[modelMetricsIndex].AsObject(m_modelMetrics[modelMetricsIndex].Jsonize());
   }
   payload.WithArray("ModelMetrics", std::move(modelMetricsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
