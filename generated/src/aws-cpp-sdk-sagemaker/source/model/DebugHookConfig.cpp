/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DebugHookConfig.h>
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

DebugHookConfig::DebugHookConfig() : 
    m_localPathHasBeenSet(false),
    m_s3OutputPathHasBeenSet(false),
    m_hookParametersHasBeenSet(false),
    m_collectionConfigurationsHasBeenSet(false)
{
}

DebugHookConfig::DebugHookConfig(JsonView jsonValue) : 
    m_localPathHasBeenSet(false),
    m_s3OutputPathHasBeenSet(false),
    m_hookParametersHasBeenSet(false),
    m_collectionConfigurationsHasBeenSet(false)
{
  *this = jsonValue;
}

DebugHookConfig& DebugHookConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LocalPath"))
  {
    m_localPath = jsonValue.GetString("LocalPath");

    m_localPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3OutputPath"))
  {
    m_s3OutputPath = jsonValue.GetString("S3OutputPath");

    m_s3OutputPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HookParameters"))
  {
    Aws::Map<Aws::String, JsonView> hookParametersJsonMap = jsonValue.GetObject("HookParameters").GetAllObjects();
    for(auto& hookParametersItem : hookParametersJsonMap)
    {
      m_hookParameters[hookParametersItem.first] = hookParametersItem.second.AsString();
    }
    m_hookParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CollectionConfigurations"))
  {
    Aws::Utils::Array<JsonView> collectionConfigurationsJsonList = jsonValue.GetArray("CollectionConfigurations");
    for(unsigned collectionConfigurationsIndex = 0; collectionConfigurationsIndex < collectionConfigurationsJsonList.GetLength(); ++collectionConfigurationsIndex)
    {
      m_collectionConfigurations.push_back(collectionConfigurationsJsonList[collectionConfigurationsIndex].AsObject());
    }
    m_collectionConfigurationsHasBeenSet = true;
  }

  return *this;
}

JsonValue DebugHookConfig::Jsonize() const
{
  JsonValue payload;

  if(m_localPathHasBeenSet)
  {
   payload.WithString("LocalPath", m_localPath);

  }

  if(m_s3OutputPathHasBeenSet)
  {
   payload.WithString("S3OutputPath", m_s3OutputPath);

  }

  if(m_hookParametersHasBeenSet)
  {
   JsonValue hookParametersJsonMap;
   for(auto& hookParametersItem : m_hookParameters)
   {
     hookParametersJsonMap.WithString(hookParametersItem.first, hookParametersItem.second);
   }
   payload.WithObject("HookParameters", std::move(hookParametersJsonMap));

  }

  if(m_collectionConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> collectionConfigurationsJsonList(m_collectionConfigurations.size());
   for(unsigned collectionConfigurationsIndex = 0; collectionConfigurationsIndex < collectionConfigurationsJsonList.GetLength(); ++collectionConfigurationsIndex)
   {
     collectionConfigurationsJsonList[collectionConfigurationsIndex].AsObject(m_collectionConfigurations[collectionConfigurationsIndex].Jsonize());
   }
   payload.WithArray("CollectionConfigurations", std::move(collectionConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
