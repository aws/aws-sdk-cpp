/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PivotTableFieldCollapseStateOption.h>
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

PivotTableFieldCollapseStateOption::PivotTableFieldCollapseStateOption() : 
    m_targetHasBeenSet(false),
    m_state(PivotTableFieldCollapseState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

PivotTableFieldCollapseStateOption::PivotTableFieldCollapseStateOption(JsonView jsonValue) : 
    m_targetHasBeenSet(false),
    m_state(PivotTableFieldCollapseState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

PivotTableFieldCollapseStateOption& PivotTableFieldCollapseStateOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetObject("Target");

    m_targetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = PivotTableFieldCollapseStateMapper::GetPivotTableFieldCollapseStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue PivotTableFieldCollapseStateOption::Jsonize() const
{
  JsonValue payload;

  if(m_targetHasBeenSet)
  {
   payload.WithObject("Target", m_target.Jsonize());

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", PivotTableFieldCollapseStateMapper::GetNameForPivotTableFieldCollapseState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
