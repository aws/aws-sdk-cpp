/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ReferenceLineLabelConfiguration.h>
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

ReferenceLineLabelConfiguration::ReferenceLineLabelConfiguration() : 
    m_valueLabelConfigurationHasBeenSet(false),
    m_customLabelConfigurationHasBeenSet(false),
    m_fontConfigurationHasBeenSet(false),
    m_fontColorHasBeenSet(false),
    m_horizontalPosition(ReferenceLineLabelHorizontalPosition::NOT_SET),
    m_horizontalPositionHasBeenSet(false),
    m_verticalPosition(ReferenceLineLabelVerticalPosition::NOT_SET),
    m_verticalPositionHasBeenSet(false)
{
}

ReferenceLineLabelConfiguration::ReferenceLineLabelConfiguration(JsonView jsonValue) : 
    m_valueLabelConfigurationHasBeenSet(false),
    m_customLabelConfigurationHasBeenSet(false),
    m_fontConfigurationHasBeenSet(false),
    m_fontColorHasBeenSet(false),
    m_horizontalPosition(ReferenceLineLabelHorizontalPosition::NOT_SET),
    m_horizontalPositionHasBeenSet(false),
    m_verticalPosition(ReferenceLineLabelVerticalPosition::NOT_SET),
    m_verticalPositionHasBeenSet(false)
{
  *this = jsonValue;
}

ReferenceLineLabelConfiguration& ReferenceLineLabelConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ValueLabelConfiguration"))
  {
    m_valueLabelConfiguration = jsonValue.GetObject("ValueLabelConfiguration");

    m_valueLabelConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomLabelConfiguration"))
  {
    m_customLabelConfiguration = jsonValue.GetObject("CustomLabelConfiguration");

    m_customLabelConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FontConfiguration"))
  {
    m_fontConfiguration = jsonValue.GetObject("FontConfiguration");

    m_fontConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FontColor"))
  {
    m_fontColor = jsonValue.GetString("FontColor");

    m_fontColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HorizontalPosition"))
  {
    m_horizontalPosition = ReferenceLineLabelHorizontalPositionMapper::GetReferenceLineLabelHorizontalPositionForName(jsonValue.GetString("HorizontalPosition"));

    m_horizontalPositionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VerticalPosition"))
  {
    m_verticalPosition = ReferenceLineLabelVerticalPositionMapper::GetReferenceLineLabelVerticalPositionForName(jsonValue.GetString("VerticalPosition"));

    m_verticalPositionHasBeenSet = true;
  }

  return *this;
}

JsonValue ReferenceLineLabelConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_valueLabelConfigurationHasBeenSet)
  {
   payload.WithObject("ValueLabelConfiguration", m_valueLabelConfiguration.Jsonize());

  }

  if(m_customLabelConfigurationHasBeenSet)
  {
   payload.WithObject("CustomLabelConfiguration", m_customLabelConfiguration.Jsonize());

  }

  if(m_fontConfigurationHasBeenSet)
  {
   payload.WithObject("FontConfiguration", m_fontConfiguration.Jsonize());

  }

  if(m_fontColorHasBeenSet)
  {
   payload.WithString("FontColor", m_fontColor);

  }

  if(m_horizontalPositionHasBeenSet)
  {
   payload.WithString("HorizontalPosition", ReferenceLineLabelHorizontalPositionMapper::GetNameForReferenceLineLabelHorizontalPosition(m_horizontalPosition));
  }

  if(m_verticalPositionHasBeenSet)
  {
   payload.WithString("VerticalPosition", ReferenceLineLabelVerticalPositionMapper::GetNameForReferenceLineLabelVerticalPosition(m_verticalPosition));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
