/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/VisualTitleLabelOptions.h>
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

VisualTitleLabelOptions::VisualTitleLabelOptions() : 
    m_visibility(Visibility::NOT_SET),
    m_visibilityHasBeenSet(false),
    m_formatTextHasBeenSet(false)
{
}

VisualTitleLabelOptions::VisualTitleLabelOptions(JsonView jsonValue) : 
    m_visibility(Visibility::NOT_SET),
    m_visibilityHasBeenSet(false),
    m_formatTextHasBeenSet(false)
{
  *this = jsonValue;
}

VisualTitleLabelOptions& VisualTitleLabelOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("Visibility"));

    m_visibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FormatText"))
  {
    m_formatText = jsonValue.GetObject("FormatText");

    m_formatTextHasBeenSet = true;
  }

  return *this;
}

JsonValue VisualTitleLabelOptions::Jsonize() const
{
  JsonValue payload;

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", VisibilityMapper::GetNameForVisibility(m_visibility));
  }

  if(m_formatTextHasBeenSet)
  {
   payload.WithObject("FormatText", m_formatText.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
