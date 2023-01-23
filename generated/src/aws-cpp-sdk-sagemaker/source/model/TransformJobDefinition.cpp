/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TransformJobDefinition.h>
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

TransformJobDefinition::TransformJobDefinition() : 
    m_maxConcurrentTransforms(0),
    m_maxConcurrentTransformsHasBeenSet(false),
    m_maxPayloadInMB(0),
    m_maxPayloadInMBHasBeenSet(false),
    m_batchStrategy(BatchStrategy::NOT_SET),
    m_batchStrategyHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_transformInputHasBeenSet(false),
    m_transformOutputHasBeenSet(false),
    m_transformResourcesHasBeenSet(false)
{
}

TransformJobDefinition::TransformJobDefinition(JsonView jsonValue) : 
    m_maxConcurrentTransforms(0),
    m_maxConcurrentTransformsHasBeenSet(false),
    m_maxPayloadInMB(0),
    m_maxPayloadInMBHasBeenSet(false),
    m_batchStrategy(BatchStrategy::NOT_SET),
    m_batchStrategyHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_transformInputHasBeenSet(false),
    m_transformOutputHasBeenSet(false),
    m_transformResourcesHasBeenSet(false)
{
  *this = jsonValue;
}

TransformJobDefinition& TransformJobDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxConcurrentTransforms"))
  {
    m_maxConcurrentTransforms = jsonValue.GetInteger("MaxConcurrentTransforms");

    m_maxConcurrentTransformsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxPayloadInMB"))
  {
    m_maxPayloadInMB = jsonValue.GetInteger("MaxPayloadInMB");

    m_maxPayloadInMBHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BatchStrategy"))
  {
    m_batchStrategy = BatchStrategyMapper::GetBatchStrategyForName(jsonValue.GetString("BatchStrategy"));

    m_batchStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Environment"))
  {
    Aws::Map<Aws::String, JsonView> environmentJsonMap = jsonValue.GetObject("Environment").GetAllObjects();
    for(auto& environmentItem : environmentJsonMap)
    {
      m_environment[environmentItem.first] = environmentItem.second.AsString();
    }
    m_environmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransformInput"))
  {
    m_transformInput = jsonValue.GetObject("TransformInput");

    m_transformInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransformOutput"))
  {
    m_transformOutput = jsonValue.GetObject("TransformOutput");

    m_transformOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransformResources"))
  {
    m_transformResources = jsonValue.GetObject("TransformResources");

    m_transformResourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue TransformJobDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_maxConcurrentTransformsHasBeenSet)
  {
   payload.WithInteger("MaxConcurrentTransforms", m_maxConcurrentTransforms);

  }

  if(m_maxPayloadInMBHasBeenSet)
  {
   payload.WithInteger("MaxPayloadInMB", m_maxPayloadInMB);

  }

  if(m_batchStrategyHasBeenSet)
  {
   payload.WithString("BatchStrategy", BatchStrategyMapper::GetNameForBatchStrategy(m_batchStrategy));
  }

  if(m_environmentHasBeenSet)
  {
   JsonValue environmentJsonMap;
   for(auto& environmentItem : m_environment)
   {
     environmentJsonMap.WithString(environmentItem.first, environmentItem.second);
   }
   payload.WithObject("Environment", std::move(environmentJsonMap));

  }

  if(m_transformInputHasBeenSet)
  {
   payload.WithObject("TransformInput", m_transformInput.Jsonize());

  }

  if(m_transformOutputHasBeenSet)
  {
   payload.WithObject("TransformOutput", m_transformOutput.Jsonize());

  }

  if(m_transformResourcesHasBeenSet)
  {
   payload.WithObject("TransformResources", m_transformResources.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
