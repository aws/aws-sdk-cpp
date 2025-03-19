/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SheetControlsOption.h>
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

SheetControlsOption::SheetControlsOption(JsonView jsonValue)
{
  *this = jsonValue;
}

SheetControlsOption& SheetControlsOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VisibilityState"))
  {
    m_visibilityState = DashboardUIStateMapper::GetDashboardUIStateForName(jsonValue.GetString("VisibilityState"));
    m_visibilityStateHasBeenSet = true;
  }
  return *this;
}

JsonValue SheetControlsOption::Jsonize() const
{
  JsonValue payload;

  if(m_visibilityStateHasBeenSet)
  {
   payload.WithString("VisibilityState", DashboardUIStateMapper::GetNameForDashboardUIState(m_visibilityState));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
