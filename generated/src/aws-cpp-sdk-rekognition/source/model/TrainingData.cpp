/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/TrainingData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

TrainingData::TrainingData() : 
    m_assetsHasBeenSet(false)
{
}

TrainingData::TrainingData(JsonView jsonValue) : 
    m_assetsHasBeenSet(false)
{
  *this = jsonValue;
}

TrainingData& TrainingData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Assets"))
  {
    Aws::Utils::Array<JsonView> assetsJsonList = jsonValue.GetArray("Assets");
    for(unsigned assetsIndex = 0; assetsIndex < assetsJsonList.GetLength(); ++assetsIndex)
    {
      m_assets.push_back(assetsJsonList[assetsIndex].AsObject());
    }
    m_assetsHasBeenSet = true;
  }

  return *this;
}

JsonValue TrainingData::Jsonize() const
{
  JsonValue payload;

  if(m_assetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assetsJsonList(m_assets.size());
   for(unsigned assetsIndex = 0; assetsIndex < assetsJsonList.GetLength(); ++assetsIndex)
   {
     assetsJsonList[assetsIndex].AsObject(m_assets[assetsIndex].Jsonize());
   }
   payload.WithArray("Assets", std::move(assetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
