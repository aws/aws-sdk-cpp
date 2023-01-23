/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/Font.h>
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

Font::Font() : 
    m_fontFamilyHasBeenSet(false)
{
}

Font::Font(JsonView jsonValue) : 
    m_fontFamilyHasBeenSet(false)
{
  *this = jsonValue;
}

Font& Font::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FontFamily"))
  {
    m_fontFamily = jsonValue.GetString("FontFamily");

    m_fontFamilyHasBeenSet = true;
  }

  return *this;
}

JsonValue Font::Jsonize() const
{
  JsonValue payload;

  if(m_fontFamilyHasBeenSet)
  {
   payload.WithString("FontFamily", m_fontFamily);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
