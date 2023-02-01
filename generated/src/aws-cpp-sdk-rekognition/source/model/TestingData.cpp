/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/TestingData.h>
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

TestingData::TestingData() : 
    m_assetsHasBeenSet(false),
    m_autoCreate(false),
    m_autoCreateHasBeenSet(false)
{
}

TestingData::TestingData(JsonView jsonValue) : 
    m_assetsHasBeenSet(false),
    m_autoCreate(false),
    m_autoCreateHasBeenSet(false)
{
  *this = jsonValue;
}

TestingData& TestingData::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("AutoCreate"))
  {
    m_autoCreate = jsonValue.GetBool("AutoCreate");

    m_autoCreateHasBeenSet = true;
  }

  return *this;
}

JsonValue TestingData::Jsonize() const
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

  if(m_autoCreateHasBeenSet)
  {
   payload.WithBool("AutoCreate", m_autoCreate);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
