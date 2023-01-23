/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ConditionalFormattingIcon.h>
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

ConditionalFormattingIcon::ConditionalFormattingIcon() : 
    m_iconSetHasBeenSet(false),
    m_customConditionHasBeenSet(false)
{
}

ConditionalFormattingIcon::ConditionalFormattingIcon(JsonView jsonValue) : 
    m_iconSetHasBeenSet(false),
    m_customConditionHasBeenSet(false)
{
  *this = jsonValue;
}

ConditionalFormattingIcon& ConditionalFormattingIcon::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IconSet"))
  {
    m_iconSet = jsonValue.GetObject("IconSet");

    m_iconSetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomCondition"))
  {
    m_customCondition = jsonValue.GetObject("CustomCondition");

    m_customConditionHasBeenSet = true;
  }

  return *this;
}

JsonValue ConditionalFormattingIcon::Jsonize() const
{
  JsonValue payload;

  if(m_iconSetHasBeenSet)
  {
   payload.WithObject("IconSet", m_iconSet.Jsonize());

  }

  if(m_customConditionHasBeenSet)
  {
   payload.WithObject("CustomCondition", m_customCondition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
