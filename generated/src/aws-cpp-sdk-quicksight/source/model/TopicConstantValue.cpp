/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicConstantValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

TopicConstantValue::TopicConstantValue(JsonView jsonValue)
{
  *this = jsonValue;
}

TopicConstantValue& TopicConstantValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConstantType"))
  {
    m_constantType = ConstantTypeMapper::GetConstantTypeForName(jsonValue.GetString("ConstantType"));
    m_constantTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Minimum"))
  {
    m_minimum = jsonValue.GetString("Minimum");
    m_minimumHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Maximum"))
  {
    m_maximum = jsonValue.GetString("Maximum");
    m_maximumHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ValueList"))
  {
    Aws::Utils::Array<JsonView> valueListJsonList = jsonValue.GetArray("ValueList");
    for(unsigned valueListIndex = 0; valueListIndex < valueListJsonList.GetLength(); ++valueListIndex)
    {
      m_valueList.push_back(valueListJsonList[valueListIndex].AsObject());
    }
    m_valueListHasBeenSet = true;
  }
  return *this;
}

JsonValue TopicConstantValue::Jsonize() const
{
  JsonValue payload;

  if(m_constantTypeHasBeenSet)
  {
   payload.WithString("ConstantType", ConstantTypeMapper::GetNameForConstantType(m_constantType));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_minimumHasBeenSet)
  {
   payload.WithString("Minimum", m_minimum);

  }

  if(m_maximumHasBeenSet)
  {
   payload.WithString("Maximum", m_maximum);

  }

  if(m_valueListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valueListJsonList(m_valueList.size());
   for(unsigned valueListIndex = 0; valueListIndex < valueListJsonList.GetLength(); ++valueListIndex)
   {
     valueListJsonList[valueListIndex].AsObject(m_valueList[valueListIndex].Jsonize());
   }
   payload.WithArray("ValueList", std::move(valueListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
