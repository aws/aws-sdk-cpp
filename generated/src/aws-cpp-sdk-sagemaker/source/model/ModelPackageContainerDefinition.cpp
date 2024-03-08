/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelPackageContainerDefinition.h>
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

ModelPackageContainerDefinition::ModelPackageContainerDefinition() : 
    m_containerHostnameHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_imageDigestHasBeenSet(false),
    m_modelDataUrlHasBeenSet(false),
    m_modelDataSourceHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_modelInputHasBeenSet(false),
    m_frameworkHasBeenSet(false),
    m_frameworkVersionHasBeenSet(false),
    m_nearestModelNameHasBeenSet(false),
    m_additionalS3DataSourceHasBeenSet(false)
{
}

ModelPackageContainerDefinition::ModelPackageContainerDefinition(JsonView jsonValue) : 
    m_containerHostnameHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_imageDigestHasBeenSet(false),
    m_modelDataUrlHasBeenSet(false),
    m_modelDataSourceHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_modelInputHasBeenSet(false),
    m_frameworkHasBeenSet(false),
    m_frameworkVersionHasBeenSet(false),
    m_nearestModelNameHasBeenSet(false),
    m_additionalS3DataSourceHasBeenSet(false)
{
  *this = jsonValue;
}

ModelPackageContainerDefinition& ModelPackageContainerDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContainerHostname"))
  {
    m_containerHostname = jsonValue.GetString("ContainerHostname");

    m_containerHostnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Image"))
  {
    m_image = jsonValue.GetString("Image");

    m_imageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageDigest"))
  {
    m_imageDigest = jsonValue.GetString("ImageDigest");

    m_imageDigestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelDataUrl"))
  {
    m_modelDataUrl = jsonValue.GetString("ModelDataUrl");

    m_modelDataUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelDataSource"))
  {
    m_modelDataSource = jsonValue.GetObject("ModelDataSource");

    m_modelDataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductId"))
  {
    m_productId = jsonValue.GetString("ProductId");

    m_productIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("ModelInput"))
  {
    m_modelInput = jsonValue.GetObject("ModelInput");

    m_modelInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Framework"))
  {
    m_framework = jsonValue.GetString("Framework");

    m_frameworkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FrameworkVersion"))
  {
    m_frameworkVersion = jsonValue.GetString("FrameworkVersion");

    m_frameworkVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NearestModelName"))
  {
    m_nearestModelName = jsonValue.GetString("NearestModelName");

    m_nearestModelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalS3DataSource"))
  {
    m_additionalS3DataSource = jsonValue.GetObject("AdditionalS3DataSource");

    m_additionalS3DataSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelPackageContainerDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_containerHostnameHasBeenSet)
  {
   payload.WithString("ContainerHostname", m_containerHostname);

  }

  if(m_imageHasBeenSet)
  {
   payload.WithString("Image", m_image);

  }

  if(m_imageDigestHasBeenSet)
  {
   payload.WithString("ImageDigest", m_imageDigest);

  }

  if(m_modelDataUrlHasBeenSet)
  {
   payload.WithString("ModelDataUrl", m_modelDataUrl);

  }

  if(m_modelDataSourceHasBeenSet)
  {
   payload.WithObject("ModelDataSource", m_modelDataSource.Jsonize());

  }

  if(m_productIdHasBeenSet)
  {
   payload.WithString("ProductId", m_productId);

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

  if(m_modelInputHasBeenSet)
  {
   payload.WithObject("ModelInput", m_modelInput.Jsonize());

  }

  if(m_frameworkHasBeenSet)
  {
   payload.WithString("Framework", m_framework);

  }

  if(m_frameworkVersionHasBeenSet)
  {
   payload.WithString("FrameworkVersion", m_frameworkVersion);

  }

  if(m_nearestModelNameHasBeenSet)
  {
   payload.WithString("NearestModelName", m_nearestModelName);

  }

  if(m_additionalS3DataSourceHasBeenSet)
  {
   payload.WithObject("AdditionalS3DataSource", m_additionalS3DataSource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
