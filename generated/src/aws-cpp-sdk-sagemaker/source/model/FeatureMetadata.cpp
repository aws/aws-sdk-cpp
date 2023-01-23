/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/FeatureMetadata.h>
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

FeatureMetadata::FeatureMetadata() : 
    m_featureGroupArnHasBeenSet(false),
    m_featureGroupNameHasBeenSet(false),
    m_featureNameHasBeenSet(false),
    m_featureType(FeatureType::NOT_SET),
    m_featureTypeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

FeatureMetadata::FeatureMetadata(JsonView jsonValue) : 
    m_featureGroupArnHasBeenSet(false),
    m_featureGroupNameHasBeenSet(false),
    m_featureNameHasBeenSet(false),
    m_featureType(FeatureType::NOT_SET),
    m_featureTypeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
  *this = jsonValue;
}

FeatureMetadata& FeatureMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FeatureGroupArn"))
  {
    m_featureGroupArn = jsonValue.GetString("FeatureGroupArn");

    m_featureGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeatureGroupName"))
  {
    m_featureGroupName = jsonValue.GetString("FeatureGroupName");

    m_featureGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeatureName"))
  {
    m_featureName = jsonValue.GetString("FeatureName");

    m_featureNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeatureType"))
  {
    m_featureType = FeatureTypeMapper::GetFeatureTypeForName(jsonValue.GetString("FeatureType"));

    m_featureTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Utils::Array<JsonView> parametersJsonList = jsonValue.GetArray("Parameters");
    for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
    {
      m_parameters.push_back(parametersJsonList[parametersIndex].AsObject());
    }
    m_parametersHasBeenSet = true;
  }

  return *this;
}

JsonValue FeatureMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_featureGroupArnHasBeenSet)
  {
   payload.WithString("FeatureGroupArn", m_featureGroupArn);

  }

  if(m_featureGroupNameHasBeenSet)
  {
   payload.WithString("FeatureGroupName", m_featureGroupName);

  }

  if(m_featureNameHasBeenSet)
  {
   payload.WithString("FeatureName", m_featureName);

  }

  if(m_featureTypeHasBeenSet)
  {
   payload.WithString("FeatureType", FeatureTypeMapper::GetNameForFeatureType(m_featureType));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_parametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parametersJsonList(m_parameters.size());
   for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
   {
     parametersJsonList[parametersIndex].AsObject(m_parameters[parametersIndex].Jsonize());
   }
   payload.WithArray("Parameters", std::move(parametersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
