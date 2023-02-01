/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GridLayoutScreenCanvasSizeOptions.h>
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

GridLayoutScreenCanvasSizeOptions::GridLayoutScreenCanvasSizeOptions() : 
    m_resizeOption(ResizeOption::NOT_SET),
    m_resizeOptionHasBeenSet(false),
    m_optimizedViewPortWidthHasBeenSet(false)
{
}

GridLayoutScreenCanvasSizeOptions::GridLayoutScreenCanvasSizeOptions(JsonView jsonValue) : 
    m_resizeOption(ResizeOption::NOT_SET),
    m_resizeOptionHasBeenSet(false),
    m_optimizedViewPortWidthHasBeenSet(false)
{
  *this = jsonValue;
}

GridLayoutScreenCanvasSizeOptions& GridLayoutScreenCanvasSizeOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResizeOption"))
  {
    m_resizeOption = ResizeOptionMapper::GetResizeOptionForName(jsonValue.GetString("ResizeOption"));

    m_resizeOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OptimizedViewPortWidth"))
  {
    m_optimizedViewPortWidth = jsonValue.GetString("OptimizedViewPortWidth");

    m_optimizedViewPortWidthHasBeenSet = true;
  }

  return *this;
}

JsonValue GridLayoutScreenCanvasSizeOptions::Jsonize() const
{
  JsonValue payload;

  if(m_resizeOptionHasBeenSet)
  {
   payload.WithString("ResizeOption", ResizeOptionMapper::GetNameForResizeOption(m_resizeOption));
  }

  if(m_optimizedViewPortWidthHasBeenSet)
  {
   payload.WithString("OptimizedViewPortWidth", m_optimizedViewPortWidth);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
