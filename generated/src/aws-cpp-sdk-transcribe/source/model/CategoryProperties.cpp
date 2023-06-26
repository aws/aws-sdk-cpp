/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/CategoryProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

CategoryProperties::CategoryProperties() : 
    m_categoryNameHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_inputType(InputType::NOT_SET),
    m_inputTypeHasBeenSet(false)
{
}

CategoryProperties::CategoryProperties(JsonView jsonValue) : 
    m_categoryNameHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_inputType(InputType::NOT_SET),
    m_inputTypeHasBeenSet(false)
{
  *this = jsonValue;
}

CategoryProperties& CategoryProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CategoryName"))
  {
    m_categoryName = jsonValue.GetString("CategoryName");

    m_categoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Rules"))
  {
    Aws::Utils::Array<JsonView> rulesJsonList = jsonValue.GetArray("Rules");
    for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
    {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
    m_rulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateTime"))
  {
    m_createTime = jsonValue.GetDouble("CreateTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("LastUpdateTime");

    m_lastUpdateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputType"))
  {
    m_inputType = InputTypeMapper::GetInputTypeForName(jsonValue.GetString("InputType"));

    m_inputTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue CategoryProperties::Jsonize() const
{
  JsonValue payload;

  if(m_categoryNameHasBeenSet)
  {
   payload.WithString("CategoryName", m_categoryName);

  }

  if(m_rulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rulesJsonList(m_rules.size());
   for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
   {
     rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
   }
   payload.WithArray("Rules", std::move(rulesJsonList));

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("CreateTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  if(m_inputTypeHasBeenSet)
  {
   payload.WithString("InputType", InputTypeMapper::GetNameForInputType(m_inputType));
  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
