/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ConditionalFormattingIconSet.h>
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

ConditionalFormattingIconSet::ConditionalFormattingIconSet() : 
    m_expressionHasBeenSet(false),
    m_iconSetType(ConditionalFormattingIconSetType::NOT_SET),
    m_iconSetTypeHasBeenSet(false)
{
}

ConditionalFormattingIconSet::ConditionalFormattingIconSet(JsonView jsonValue) : 
    m_expressionHasBeenSet(false),
    m_iconSetType(ConditionalFormattingIconSetType::NOT_SET),
    m_iconSetTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ConditionalFormattingIconSet& ConditionalFormattingIconSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Expression"))
  {
    m_expression = jsonValue.GetString("Expression");

    m_expressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IconSetType"))
  {
    m_iconSetType = ConditionalFormattingIconSetTypeMapper::GetConditionalFormattingIconSetTypeForName(jsonValue.GetString("IconSetType"));

    m_iconSetTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ConditionalFormattingIconSet::Jsonize() const
{
  JsonValue payload;

  if(m_expressionHasBeenSet)
  {
   payload.WithString("Expression", m_expression);

  }

  if(m_iconSetTypeHasBeenSet)
  {
   payload.WithString("IconSetType", ConditionalFormattingIconSetTypeMapper::GetNameForConditionalFormattingIconSetType(m_iconSetType));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
