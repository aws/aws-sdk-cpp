/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceComponentContainerSpecificationSummary.h>
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

InferenceComponentContainerSpecificationSummary::InferenceComponentContainerSpecificationSummary() : 
    m_deployedImageHasBeenSet(false),
    m_artifactUrlHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

InferenceComponentContainerSpecificationSummary::InferenceComponentContainerSpecificationSummary(JsonView jsonValue) : 
    m_deployedImageHasBeenSet(false),
    m_artifactUrlHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
  *this = jsonValue;
}

InferenceComponentContainerSpecificationSummary& InferenceComponentContainerSpecificationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeployedImage"))
  {
    m_deployedImage = jsonValue.GetObject("DeployedImage");

    m_deployedImageHasBeenSet = true;
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

JsonValue InferenceComponentContainerSpecificationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_deployedImageHasBeenSet)
  {
   payload.WithObject("DeployedImage", m_deployedImage.Jsonize());

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
