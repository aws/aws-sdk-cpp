/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FontSize.h>
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

FontSize::FontSize() : 
    m_relative(RelativeFontSize::NOT_SET),
    m_relativeHasBeenSet(false)
{
}

FontSize::FontSize(JsonView jsonValue) : 
    m_relative(RelativeFontSize::NOT_SET),
    m_relativeHasBeenSet(false)
{
  *this = jsonValue;
}

FontSize& FontSize::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Relative"))
  {
    m_relative = RelativeFontSizeMapper::GetRelativeFontSizeForName(jsonValue.GetString("Relative"));

    m_relativeHasBeenSet = true;
  }

  return *this;
}

JsonValue FontSize::Jsonize() const
{
  JsonValue payload;

  if(m_relativeHasBeenSet)
  {
   payload.WithString("Relative", RelativeFontSizeMapper::GetNameForRelativeFontSize(m_relative));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
