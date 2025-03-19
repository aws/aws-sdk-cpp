/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BrandColorPalette.h>
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

BrandColorPalette::BrandColorPalette(JsonView jsonValue)
{
  *this = jsonValue;
}

BrandColorPalette& BrandColorPalette::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Primary"))
  {
    m_primary = jsonValue.GetObject("Primary");
    m_primaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Secondary"))
  {
    m_secondary = jsonValue.GetObject("Secondary");
    m_secondaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Accent"))
  {
    m_accent = jsonValue.GetObject("Accent");
    m_accentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Measure"))
  {
    m_measure = jsonValue.GetObject("Measure");
    m_measureHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Dimension"))
  {
    m_dimension = jsonValue.GetObject("Dimension");
    m_dimensionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Success"))
  {
    m_success = jsonValue.GetObject("Success");
    m_successHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Info"))
  {
    m_info = jsonValue.GetObject("Info");
    m_infoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Warning"))
  {
    m_warning = jsonValue.GetObject("Warning");
    m_warningHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Danger"))
  {
    m_danger = jsonValue.GetObject("Danger");
    m_dangerHasBeenSet = true;
  }
  return *this;
}

JsonValue BrandColorPalette::Jsonize() const
{
  JsonValue payload;

  if(m_primaryHasBeenSet)
  {
   payload.WithObject("Primary", m_primary.Jsonize());

  }

  if(m_secondaryHasBeenSet)
  {
   payload.WithObject("Secondary", m_secondary.Jsonize());

  }

  if(m_accentHasBeenSet)
  {
   payload.WithObject("Accent", m_accent.Jsonize());

  }

  if(m_measureHasBeenSet)
  {
   payload.WithObject("Measure", m_measure.Jsonize());

  }

  if(m_dimensionHasBeenSet)
  {
   payload.WithObject("Dimension", m_dimension.Jsonize());

  }

  if(m_successHasBeenSet)
  {
   payload.WithObject("Success", m_success.Jsonize());

  }

  if(m_infoHasBeenSet)
  {
   payload.WithObject("Info", m_info.Jsonize());

  }

  if(m_warningHasBeenSet)
  {
   payload.WithObject("Warning", m_warning.Jsonize());

  }

  if(m_dangerHasBeenSet)
  {
   payload.WithObject("Danger", m_danger.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
