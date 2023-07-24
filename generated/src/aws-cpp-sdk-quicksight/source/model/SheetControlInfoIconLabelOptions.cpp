/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SheetControlInfoIconLabelOptions.h>
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

SheetControlInfoIconLabelOptions::SheetControlInfoIconLabelOptions() : 
    m_visibility(Visibility::NOT_SET),
    m_visibilityHasBeenSet(false),
    m_infoIconTextHasBeenSet(false)
{
}

SheetControlInfoIconLabelOptions::SheetControlInfoIconLabelOptions(JsonView jsonValue) : 
    m_visibility(Visibility::NOT_SET),
    m_visibilityHasBeenSet(false),
    m_infoIconTextHasBeenSet(false)
{
  *this = jsonValue;
}

SheetControlInfoIconLabelOptions& SheetControlInfoIconLabelOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("Visibility"));

    m_visibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InfoIconText"))
  {
    m_infoIconText = jsonValue.GetString("InfoIconText");

    m_infoIconTextHasBeenSet = true;
  }

  return *this;
}

JsonValue SheetControlInfoIconLabelOptions::Jsonize() const
{
  JsonValue payload;

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", VisibilityMapper::GetNameForVisibility(m_visibility));
  }

  if(m_infoIconTextHasBeenSet)
  {
   payload.WithString("InfoIconText", m_infoIconText);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
