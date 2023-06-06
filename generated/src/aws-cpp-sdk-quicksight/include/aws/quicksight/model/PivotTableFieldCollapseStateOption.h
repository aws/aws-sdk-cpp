/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/PivotTableFieldCollapseStateTarget.h>
#include <aws/quicksight/model/PivotTableFieldCollapseState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The collapse state options for the pivot table field options.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotTableFieldCollapseStateOption">AWS
   * API Reference</a></p>
   */
  class PivotTableFieldCollapseStateOption
  {
  public:
    AWS_QUICKSIGHT_API PivotTableFieldCollapseStateOption();
    AWS_QUICKSIGHT_API PivotTableFieldCollapseStateOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableFieldCollapseStateOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A tagged-union object that sets the collapse state.</p>
     */
    inline const PivotTableFieldCollapseStateTarget& GetTarget() const{ return m_target; }

    /**
     * <p>A tagged-union object that sets the collapse state.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>A tagged-union object that sets the collapse state.</p>
     */
    inline void SetTarget(const PivotTableFieldCollapseStateTarget& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>A tagged-union object that sets the collapse state.</p>
     */
    inline void SetTarget(PivotTableFieldCollapseStateTarget&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>A tagged-union object that sets the collapse state.</p>
     */
    inline PivotTableFieldCollapseStateOption& WithTarget(const PivotTableFieldCollapseStateTarget& value) { SetTarget(value); return *this;}

    /**
     * <p>A tagged-union object that sets the collapse state.</p>
     */
    inline PivotTableFieldCollapseStateOption& WithTarget(PivotTableFieldCollapseStateTarget&& value) { SetTarget(std::move(value)); return *this;}


    /**
     * <p>The state of the field target of a pivot table. Choose one of the following
     * options:</p> <ul> <li> <p> <code>COLLAPSED</code> </p> </li> <li> <p>
     * <code>EXPANDED</code> </p> </li> </ul>
     */
    inline const PivotTableFieldCollapseState& GetState() const{ return m_state; }

    /**
     * <p>The state of the field target of a pivot table. Choose one of the following
     * options:</p> <ul> <li> <p> <code>COLLAPSED</code> </p> </li> <li> <p>
     * <code>EXPANDED</code> </p> </li> </ul>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the field target of a pivot table. Choose one of the following
     * options:</p> <ul> <li> <p> <code>COLLAPSED</code> </p> </li> <li> <p>
     * <code>EXPANDED</code> </p> </li> </ul>
     */
    inline void SetState(const PivotTableFieldCollapseState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the field target of a pivot table. Choose one of the following
     * options:</p> <ul> <li> <p> <code>COLLAPSED</code> </p> </li> <li> <p>
     * <code>EXPANDED</code> </p> </li> </ul>
     */
    inline void SetState(PivotTableFieldCollapseState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the field target of a pivot table. Choose one of the following
     * options:</p> <ul> <li> <p> <code>COLLAPSED</code> </p> </li> <li> <p>
     * <code>EXPANDED</code> </p> </li> </ul>
     */
    inline PivotTableFieldCollapseStateOption& WithState(const PivotTableFieldCollapseState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the field target of a pivot table. Choose one of the following
     * options:</p> <ul> <li> <p> <code>COLLAPSED</code> </p> </li> <li> <p>
     * <code>EXPANDED</code> </p> </li> </ul>
     */
    inline PivotTableFieldCollapseStateOption& WithState(PivotTableFieldCollapseState&& value) { SetState(std::move(value)); return *this;}

  private:

    PivotTableFieldCollapseStateTarget m_target;
    bool m_targetHasBeenSet = false;

    PivotTableFieldCollapseState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
