/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SheetImageTooltipText.h>
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

SheetImageTooltipText::SheetImageTooltipText(JsonView jsonValue)
{
  *this = jsonValue;
}

SheetImageTooltipText& SheetImageTooltipText::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PlainText"))
  {
    m_plainText = jsonValue.GetString("PlainText");
    m_plainTextHasBeenSet = true;
  }
  return *this;
}

JsonValue SheetImageTooltipText::Jsonize() const
{
  JsonValue payload;

  if(m_plainTextHasBeenSet)
  {
   payload.WithString("PlainText", m_plainText);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
