/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/StringListConfigurationOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

StringListConfigurationOptions::StringListConfigurationOptions() : 
    m_defaultValueHasBeenSet(false),
    m_re2ExpressionHasBeenSet(false),
    m_maxItems(0),
    m_maxItemsHasBeenSet(false),
    m_expressionDescriptionHasBeenSet(false)
{
}

StringListConfigurationOptions::StringListConfigurationOptions(JsonView jsonValue) : 
    m_defaultValueHasBeenSet(false),
    m_re2ExpressionHasBeenSet(false),
    m_maxItems(0),
    m_maxItemsHasBeenSet(false),
    m_expressionDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

StringListConfigurationOptions& StringListConfigurationOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultValue"))
  {
    Aws::Utils::Array<JsonView> defaultValueJsonList = jsonValue.GetArray("DefaultValue");
    for(unsigned defaultValueIndex = 0; defaultValueIndex < defaultValueJsonList.GetLength(); ++defaultValueIndex)
    {
      m_defaultValue.push_back(defaultValueJsonList[defaultValueIndex].AsString());
    }
    m_defaultValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Re2Expression"))
  {
    m_re2Expression = jsonValue.GetString("Re2Expression");

    m_re2ExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxItems"))
  {
    m_maxItems = jsonValue.GetInteger("MaxItems");

    m_maxItemsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpressionDescription"))
  {
    m_expressionDescription = jsonValue.GetString("ExpressionDescription");

    m_expressionDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue StringListConfigurationOptions::Jsonize() const
{
  JsonValue payload;

  if(m_defaultValueHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> defaultValueJsonList(m_defaultValue.size());
   for(unsigned defaultValueIndex = 0; defaultValueIndex < defaultValueJsonList.GetLength(); ++defaultValueIndex)
   {
     defaultValueJsonList[defaultValueIndex].AsString(m_defaultValue[defaultValueIndex]);
   }
   payload.WithArray("DefaultValue", std::move(defaultValueJsonList));

  }

  if(m_re2ExpressionHasBeenSet)
  {
   payload.WithString("Re2Expression", m_re2Expression);

  }

  if(m_maxItemsHasBeenSet)
  {
   payload.WithInteger("MaxItems", m_maxItems);

  }

  if(m_expressionDescriptionHasBeenSet)
  {
   payload.WithString("ExpressionDescription", m_expressionDescription);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
