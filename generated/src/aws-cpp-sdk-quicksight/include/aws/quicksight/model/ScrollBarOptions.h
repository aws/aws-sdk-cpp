/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/quicksight/model/VisibleRangeOptions.h>
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
   * <p>The visual display options for a data zoom scroll bar.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ScrollBarOptions">AWS
   * API Reference</a></p>
   */
  class ScrollBarOptions
  {
  public:
    AWS_QUICKSIGHT_API ScrollBarOptions();
    AWS_QUICKSIGHT_API ScrollBarOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ScrollBarOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The visibility of the data zoom scroll bar.</p>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }
    inline ScrollBarOptions& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}
    inline ScrollBarOptions& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility range for the data zoom scroll bar.</p>
     */
    inline const VisibleRangeOptions& GetVisibleRange() const{ return m_visibleRange; }
    inline bool VisibleRangeHasBeenSet() const { return m_visibleRangeHasBeenSet; }
    inline void SetVisibleRange(const VisibleRangeOptions& value) { m_visibleRangeHasBeenSet = true; m_visibleRange = value; }
    inline void SetVisibleRange(VisibleRangeOptions&& value) { m_visibleRangeHasBeenSet = true; m_visibleRange = std::move(value); }
    inline ScrollBarOptions& WithVisibleRange(const VisibleRangeOptions& value) { SetVisibleRange(value); return *this;}
    inline ScrollBarOptions& WithVisibleRange(VisibleRangeOptions&& value) { SetVisibleRange(std::move(value)); return *this;}
    ///@}
  private:

    Visibility m_visibility;
    bool m_visibilityHasBeenSet = false;

    VisibleRangeOptions m_visibleRange;
    bool m_visibleRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
