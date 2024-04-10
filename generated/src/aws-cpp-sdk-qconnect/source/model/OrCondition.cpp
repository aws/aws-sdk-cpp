/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/OrCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

OrCondition::OrCondition() : 
    m_andConditionsHasBeenSet(false),
    m_tagConditionHasBeenSet(false)
{
}

OrCondition::OrCondition(JsonView jsonValue) : 
    m_andConditionsHasBeenSet(false),
    m_tagConditionHasBeenSet(false)
{
  *this = jsonValue;
}

OrCondition& OrCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("andConditions"))
  {
    Aws::Utils::Array<JsonView> andConditionsJsonList = jsonValue.GetArray("andConditions");
    for(unsigned andConditionsIndex = 0; andConditionsIndex < andConditionsJsonList.GetLength(); ++andConditionsIndex)
    {
      m_andConditions.push_back(andConditionsJsonList[andConditionsIndex].AsObject());
    }
    m_andConditionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tagCondition"))
  {
    m_tagCondition = jsonValue.GetObject("tagCondition");

    m_tagConditionHasBeenSet = true;
  }

  return *this;
}

JsonValue OrCondition::Jsonize() const
{
  JsonValue payload;

  if(m_andConditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> andConditionsJsonList(m_andConditions.size());
   for(unsigned andConditionsIndex = 0; andConditionsIndex < andConditionsJsonList.GetLength(); ++andConditionsIndex)
   {
     andConditionsJsonList[andConditionsIndex].AsObject(m_andConditions[andConditionsIndex].Jsonize());
   }
   payload.WithArray("andConditions", std::move(andConditionsJsonList));

  }

  if(m_tagConditionHasBeenSet)
  {
   payload.WithObject("tagCondition", m_tagCondition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
