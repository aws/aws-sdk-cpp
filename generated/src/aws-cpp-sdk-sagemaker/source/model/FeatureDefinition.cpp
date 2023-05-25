/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/FeatureDefinition.h>
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

FeatureDefinition::FeatureDefinition() : 
    m_featureNameHasBeenSet(false),
    m_featureType(FeatureType::NOT_SET),
    m_featureTypeHasBeenSet(false)
{
}

FeatureDefinition::FeatureDefinition(JsonView jsonValue) : 
    m_featureNameHasBeenSet(false),
    m_featureType(FeatureType::NOT_SET),
    m_featureTypeHasBeenSet(false)
{
  *this = jsonValue;
}

FeatureDefinition& FeatureDefinition::operator =(JsonView jsonValue)
{
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

  return *this;
}

JsonValue FeatureDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_featureNameHasBeenSet)
  {
   payload.WithString("FeatureName", m_featureName);

  }

  if(m_featureTypeHasBeenSet)
  {
   payload.WithString("FeatureType", FeatureTypeMapper::GetNameForFeatureType(m_featureType));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
