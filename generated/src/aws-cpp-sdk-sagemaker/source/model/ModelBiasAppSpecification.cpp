/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelBiasAppSpecification.h>
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

ModelBiasAppSpecification::ModelBiasAppSpecification() : 
    m_imageUriHasBeenSet(false),
    m_configUriHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

ModelBiasAppSpecification::ModelBiasAppSpecification(JsonView jsonValue) : 
    m_imageUriHasBeenSet(false),
    m_configUriHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
  *this = jsonValue;
}

ModelBiasAppSpecification& ModelBiasAppSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ImageUri"))
  {
    m_imageUri = jsonValue.GetString("ImageUri");

    m_imageUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfigUri"))
  {
    m_configUri = jsonValue.GetString("ConfigUri");

    m_configUriHasBeenSet = true;
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

  return *this;
}

JsonValue ModelBiasAppSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_imageUriHasBeenSet)
  {
   payload.WithString("ImageUri", m_imageUri);

  }

  if(m_configUriHasBeenSet)
  {
   payload.WithString("ConfigUri", m_configUri);

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

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
