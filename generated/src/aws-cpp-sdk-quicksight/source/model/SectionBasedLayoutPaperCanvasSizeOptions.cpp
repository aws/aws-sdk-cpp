/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SectionBasedLayoutPaperCanvasSizeOptions.h>
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

SectionBasedLayoutPaperCanvasSizeOptions::SectionBasedLayoutPaperCanvasSizeOptions() : 
    m_paperSize(PaperSize::NOT_SET),
    m_paperSizeHasBeenSet(false),
    m_paperOrientation(PaperOrientation::NOT_SET),
    m_paperOrientationHasBeenSet(false),
    m_paperMarginHasBeenSet(false)
{
}

SectionBasedLayoutPaperCanvasSizeOptions::SectionBasedLayoutPaperCanvasSizeOptions(JsonView jsonValue) : 
    m_paperSize(PaperSize::NOT_SET),
    m_paperSizeHasBeenSet(false),
    m_paperOrientation(PaperOrientation::NOT_SET),
    m_paperOrientationHasBeenSet(false),
    m_paperMarginHasBeenSet(false)
{
  *this = jsonValue;
}

SectionBasedLayoutPaperCanvasSizeOptions& SectionBasedLayoutPaperCanvasSizeOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PaperSize"))
  {
    m_paperSize = PaperSizeMapper::GetPaperSizeForName(jsonValue.GetString("PaperSize"));

    m_paperSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PaperOrientation"))
  {
    m_paperOrientation = PaperOrientationMapper::GetPaperOrientationForName(jsonValue.GetString("PaperOrientation"));

    m_paperOrientationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PaperMargin"))
  {
    m_paperMargin = jsonValue.GetObject("PaperMargin");

    m_paperMarginHasBeenSet = true;
  }

  return *this;
}

JsonValue SectionBasedLayoutPaperCanvasSizeOptions::Jsonize() const
{
  JsonValue payload;

  if(m_paperSizeHasBeenSet)
  {
   payload.WithString("PaperSize", PaperSizeMapper::GetNameForPaperSize(m_paperSize));
  }

  if(m_paperOrientationHasBeenSet)
  {
   payload.WithString("PaperOrientation", PaperOrientationMapper::GetNameForPaperOrientation(m_paperOrientation));
  }

  if(m_paperMarginHasBeenSet)
  {
   payload.WithObject("PaperMargin", m_paperMargin.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
