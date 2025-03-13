/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DashboardUIState.h>
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
   * <p>Sheet controls option.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SheetControlsOption">AWS
   * API Reference</a></p>
   */
  class SheetControlsOption
  {
  public:
    AWS_QUICKSIGHT_API SheetControlsOption() = default;
    AWS_QUICKSIGHT_API SheetControlsOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SheetControlsOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Visibility state.</p>
     */
    inline DashboardUIState GetVisibilityState() const { return m_visibilityState; }
    inline bool VisibilityStateHasBeenSet() const { return m_visibilityStateHasBeenSet; }
    inline void SetVisibilityState(DashboardUIState value) { m_visibilityStateHasBeenSet = true; m_visibilityState = value; }
    inline SheetControlsOption& WithVisibilityState(DashboardUIState value) { SetVisibilityState(value); return *this;}
    ///@}
  private:

    DashboardUIState m_visibilityState{DashboardUIState::NOT_SET};
    bool m_visibilityStateHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
