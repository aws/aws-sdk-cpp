/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PanelTitleOptions.h>
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

PanelTitleOptions::PanelTitleOptions() : 
    m_visibility(Visibility::NOT_SET),
    m_visibilityHasBeenSet(false),
    m_fontConfigurationHasBeenSet(false),
    m_horizontalTextAlignment(HorizontalTextAlignment::NOT_SET),
    m_horizontalTextAlignmentHasBeenSet(false)
{
}

PanelTitleOptions::PanelTitleOptions(JsonView jsonValue) : 
    m_visibility(Visibility::NOT_SET),
    m_visibilityHasBeenSet(false),
    m_fontConfigurationHasBeenSet(false),
    m_horizontalTextAlignment(HorizontalTextAlignment::NOT_SET),
    m_horizontalTextAlignmentHasBeenSet(false)
{
  *this = jsonValue;
}

PanelTitleOptions& PanelTitleOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("Visibility"));

    m_visibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FontConfiguration"))
  {
    m_fontConfiguration = jsonValue.GetObject("FontConfiguration");

    m_fontConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HorizontalTextAlignment"))
  {
    m_horizontalTextAlignment = HorizontalTextAlignmentMapper::GetHorizontalTextAlignmentForName(jsonValue.GetString("HorizontalTextAlignment"));

    m_horizontalTextAlignmentHasBeenSet = true;
  }

  return *this;
}

JsonValue PanelTitleOptions::Jsonize() const
{
  JsonValue payload;

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", VisibilityMapper::GetNameForVisibility(m_visibility));
  }

  if(m_fontConfigurationHasBeenSet)
  {
   payload.WithObject("FontConfiguration", m_fontConfiguration.Jsonize());

  }

  if(m_horizontalTextAlignmentHasBeenSet)
  {
   payload.WithString("HorizontalTextAlignment", HorizontalTextAlignmentMapper::GetNameForHorizontalTextAlignment(m_horizontalTextAlignment));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
