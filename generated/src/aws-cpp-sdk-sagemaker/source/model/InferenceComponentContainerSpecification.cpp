/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceComponentContainerSpecification.h>
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

InferenceComponentContainerSpecification::InferenceComponentContainerSpecification() : 
    m_imageHasBeenSet(false),
    m_artifactUrlHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

InferenceComponentContainerSpecification::InferenceComponentContainerSpecification(JsonView jsonValue) : 
    m_imageHasBeenSet(false),
    m_artifactUrlHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
  *this = jsonValue;
}

InferenceComponentContainerSpecification& InferenceComponentContainerSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Image"))
  {
    m_image = jsonValue.GetString("Image");

    m_imageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ArtifactUrl"))
  {
    m_artifactUrl = jsonValue.GetString("ArtifactUrl");

    m_artifactUrlHasBeenSet = true;
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

JsonValue InferenceComponentContainerSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_imageHasBeenSet)
  {
   payload.WithString("Image", m_image);

  }

  if(m_artifactUrlHasBeenSet)
  {
   payload.WithString("ArtifactUrl", m_artifactUrl);

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
