/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-featurestore-runtime/model/FeatureValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerFeatureStoreRuntime
{
namespace Model
{

FeatureValue::FeatureValue() : 
    m_featureNameHasBeenSet(false),
    m_valueAsStringHasBeenSet(false),
    m_valueAsStringListHasBeenSet(false)
{
}

FeatureValue::FeatureValue(JsonView jsonValue) : 
    m_featureNameHasBeenSet(false),
    m_valueAsStringHasBeenSet(false),
    m_valueAsStringListHasBeenSet(false)
{
  *this = jsonValue;
}

FeatureValue& FeatureValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FeatureName"))
  {
    m_featureName = jsonValue.GetString("FeatureName");

    m_featureNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValueAsString"))
  {
    m_valueAsString = jsonValue.GetString("ValueAsString");

    m_valueAsStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValueAsStringList"))
  {
    Aws::Utils::Array<JsonView> valueAsStringListJsonList = jsonValue.GetArray("ValueAsStringList");
    for(unsigned valueAsStringListIndex = 0; valueAsStringListIndex < valueAsStringListJsonList.GetLength(); ++valueAsStringListIndex)
    {
      m_valueAsStringList.push_back(valueAsStringListJsonList[valueAsStringListIndex].AsString());
    }
    m_valueAsStringListHasBeenSet = true;
  }

  return *this;
}

JsonValue FeatureValue::Jsonize() const
{
  JsonValue payload;

  if(m_featureNameHasBeenSet)
  {
   payload.WithString("FeatureName", m_featureName);

  }

  if(m_valueAsStringHasBeenSet)
  {
   payload.WithString("ValueAsString", m_valueAsString);

  }

  if(m_valueAsStringListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valueAsStringListJsonList(m_valueAsStringList.size());
   for(unsigned valueAsStringListIndex = 0; valueAsStringListIndex < valueAsStringListJsonList.GetLength(); ++valueAsStringListIndex)
   {
     valueAsStringListJsonList[valueAsStringListIndex].AsString(m_valueAsStringList[valueAsStringListIndex]);
   }
   payload.WithArray("ValueAsStringList", std::move(valueAsStringListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
