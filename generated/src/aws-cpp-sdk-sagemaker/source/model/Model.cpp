/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/Model.h>
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

Model::Model() : 
    m_modelNameHasBeenSet(false),
    m_primaryContainerHasBeenSet(false),
    m_containersHasBeenSet(false),
    m_inferenceExecutionConfigHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_modelArnHasBeenSet(false),
    m_enableNetworkIsolation(false),
    m_enableNetworkIsolationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Model::Model(JsonView jsonValue) : 
    m_modelNameHasBeenSet(false),
    m_primaryContainerHasBeenSet(false),
    m_containersHasBeenSet(false),
    m_inferenceExecutionConfigHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_modelArnHasBeenSet(false),
    m_enableNetworkIsolation(false),
    m_enableNetworkIsolationHasBeenSet(false),
    m_tagsHasBeenSet(false)
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

  if(jsonValue.ValueExists("PrimaryContainer"))
  {
    m_primaryContainer = jsonValue.GetObject("PrimaryContainer");

    m_primaryContainerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Containers"))
  {
    Aws::Utils::Array<JsonView> containersJsonList = jsonValue.GetArray("Containers");
    for(unsigned containersIndex = 0; containersIndex < containersJsonList.GetLength(); ++containersIndex)
    {
      m_containers.push_back(containersJsonList[containersIndex].AsObject());
    }
    m_containersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InferenceExecutionConfig"))
  {
    m_inferenceExecutionConfig = jsonValue.GetObject("InferenceExecutionConfig");

    m_inferenceExecutionConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionRoleArn"))
  {
    m_executionRoleArn = jsonValue.GetString("ExecutionRoleArn");

    m_executionRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");

    m_vpcConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelArn"))
  {
    m_modelArn = jsonValue.GetString("ModelArn");

    m_modelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableNetworkIsolation"))
  {
    m_enableNetworkIsolation = jsonValue.GetBool("EnableNetworkIsolation");

    m_enableNetworkIsolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
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

  if(m_primaryContainerHasBeenSet)
  {
   payload.WithObject("PrimaryContainer", m_primaryContainer.Jsonize());

  }

  if(m_containersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containersJsonList(m_containers.size());
   for(unsigned containersIndex = 0; containersIndex < containersJsonList.GetLength(); ++containersIndex)
   {
     containersJsonList[containersIndex].AsObject(m_containers[containersIndex].Jsonize());
   }
   payload.WithArray("Containers", std::move(containersJsonList));

  }

  if(m_inferenceExecutionConfigHasBeenSet)
  {
   payload.WithObject("InferenceExecutionConfig", m_inferenceExecutionConfig.Jsonize());

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("ExecutionRoleArn", m_executionRoleArn);

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_modelArnHasBeenSet)
  {
   payload.WithString("ModelArn", m_modelArn);

  }

  if(m_enableNetworkIsolationHasBeenSet)
  {
   payload.WithBool("EnableNetworkIsolation", m_enableNetworkIsolation);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
