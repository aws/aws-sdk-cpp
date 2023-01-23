/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TileLayoutStyle.h>
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

TileLayoutStyle::TileLayoutStyle() : 
    m_gutterHasBeenSet(false),
    m_marginHasBeenSet(false)
{
}

TileLayoutStyle::TileLayoutStyle(JsonView jsonValue) : 
    m_gutterHasBeenSet(false),
    m_marginHasBeenSet(false)
{
  *this = jsonValue;
}

TileLayoutStyle& TileLayoutStyle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Gutter"))
  {
    m_gutter = jsonValue.GetObject("Gutter");

    m_gutterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Margin"))
  {
    m_margin = jsonValue.GetObject("Margin");

    m_marginHasBeenSet = true;
  }

  return *this;
}

JsonValue TileLayoutStyle::Jsonize() const
{
  JsonValue payload;

  if(m_gutterHasBeenSet)
  {
   payload.WithObject("Gutter", m_gutter.Jsonize());

  }

  if(m_marginHasBeenSet)
  {
   payload.WithObject("Margin", m_margin.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
