/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelCompilationConfig.h>
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

ModelCompilationConfig::ModelCompilationConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ModelCompilationConfig& ModelCompilationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Image"))
  {
    m_image = jsonValue.GetString("Image");
    m_imageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OverrideEnvironment"))
  {
    Aws::Map<Aws::String, JsonView> overrideEnvironmentJsonMap = jsonValue.GetObject("OverrideEnvironment").GetAllObjects();
    for(auto& overrideEnvironmentItem : overrideEnvironmentJsonMap)
    {
      m_overrideEnvironment[overrideEnvironmentItem.first] = overrideEnvironmentItem.second.AsString();
    }
    m_overrideEnvironmentHasBeenSet = true;
  }
  return *this;
}

JsonValue ModelCompilationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_imageHasBeenSet)
  {
   payload.WithString("Image", m_image);

  }

  if(m_overrideEnvironmentHasBeenSet)
  {
   JsonValue overrideEnvironmentJsonMap;
   for(auto& overrideEnvironmentItem : m_overrideEnvironment)
   {
     overrideEnvironmentJsonMap.WithString(overrideEnvironmentItem.first, overrideEnvironmentItem.second);
   }
   payload.WithObject("OverrideEnvironment", std::move(overrideEnvironmentJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
