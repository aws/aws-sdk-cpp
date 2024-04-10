/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/TagFilter.h>
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

TagFilter::TagFilter() : 
    m_andConditionsHasBeenSet(false),
    m_orConditionsHasBeenSet(false),
    m_tagConditionHasBeenSet(false)
{
}

TagFilter::TagFilter(JsonView jsonValue) : 
    m_andConditionsHasBeenSet(false),
    m_orConditionsHasBeenSet(false),
    m_tagConditionHasBeenSet(false)
{
  *this = jsonValue;
}

TagFilter& TagFilter::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("orConditions"))
  {
    Aws::Utils::Array<JsonView> orConditionsJsonList = jsonValue.GetArray("orConditions");
    for(unsigned orConditionsIndex = 0; orConditionsIndex < orConditionsJsonList.GetLength(); ++orConditionsIndex)
    {
      m_orConditions.push_back(orConditionsJsonList[orConditionsIndex].AsObject());
    }
    m_orConditionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tagCondition"))
  {
    m_tagCondition = jsonValue.GetObject("tagCondition");

    m_tagConditionHasBeenSet = true;
  }

  return *this;
}

JsonValue TagFilter::Jsonize() const
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

  if(m_orConditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> orConditionsJsonList(m_orConditions.size());
   for(unsigned orConditionsIndex = 0; orConditionsIndex < orConditionsJsonList.GetLength(); ++orConditionsIndex)
   {
     orConditionsJsonList[orConditionsIndex].AsObject(m_orConditions[orConditionsIndex].Jsonize());
   }
   payload.WithArray("orConditions", std::move(orConditionsJsonList));

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
