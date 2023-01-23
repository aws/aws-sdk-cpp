/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/Gender.h>
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

Gender::Gender() : 
    m_value(GenderType::NOT_SET),
    m_valueHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false)
{
}

Gender::Gender(JsonView jsonValue) : 
    m_value(GenderType::NOT_SET),
    m_valueHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false)
{
  *this = jsonValue;
}

Gender& Gender::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = GenderTypeMapper::GetGenderTypeForName(jsonValue.GetString("Value"));

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");

    m_confidenceHasBeenSet = true;
  }

  return *this;
}

JsonValue Gender::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", GenderTypeMapper::GetNameForGenderType(m_value));
  }

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("Confidence", m_confidence);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
