/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/LendingField.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

LendingField::LendingField() : 
    m_typeHasBeenSet(false),
    m_keyDetectionHasBeenSet(false),
    m_valueDetectionsHasBeenSet(false)
{
}

LendingField::LendingField(JsonView jsonValue) : 
    m_typeHasBeenSet(false),
    m_keyDetectionHasBeenSet(false),
    m_valueDetectionsHasBeenSet(false)
{
  *this = jsonValue;
}

LendingField& LendingField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyDetection"))
  {
    m_keyDetection = jsonValue.GetObject("KeyDetection");

    m_keyDetectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValueDetections"))
  {
    Aws::Utils::Array<JsonView> valueDetectionsJsonList = jsonValue.GetArray("ValueDetections");
    for(unsigned valueDetectionsIndex = 0; valueDetectionsIndex < valueDetectionsJsonList.GetLength(); ++valueDetectionsIndex)
    {
      m_valueDetections.push_back(valueDetectionsJsonList[valueDetectionsIndex].AsObject());
    }
    m_valueDetectionsHasBeenSet = true;
  }

  return *this;
}

JsonValue LendingField::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_keyDetectionHasBeenSet)
  {
   payload.WithObject("KeyDetection", m_keyDetection.Jsonize());

  }

  if(m_valueDetectionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valueDetectionsJsonList(m_valueDetections.size());
   for(unsigned valueDetectionsIndex = 0; valueDetectionsIndex < valueDetectionsJsonList.GetLength(); ++valueDetectionsIndex)
   {
     valueDetectionsJsonList[valueDetectionsIndex].AsObject(m_valueDetections[valueDetectionsIndex].Jsonize());
   }
   payload.WithArray("ValueDetections", std::move(valueDetectionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
