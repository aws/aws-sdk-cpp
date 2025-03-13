/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/Palette.h>
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

Palette::Palette(JsonView jsonValue)
{
  *this = jsonValue;
}

Palette& Palette::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Foreground"))
  {
    m_foreground = jsonValue.GetString("Foreground");
    m_foregroundHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Background"))
  {
    m_background = jsonValue.GetString("Background");
    m_backgroundHasBeenSet = true;
  }
  return *this;
}

JsonValue Palette::Jsonize() const
{
  JsonValue payload;

  if(m_foregroundHasBeenSet)
  {
   payload.WithString("Foreground", m_foreground);

  }

  if(m_backgroundHasBeenSet)
  {
   payload.WithString("Background", m_background);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
