/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/BoxPlotStyleOptions.h>
#include <aws/quicksight/model/Visibility.h>
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
   * <p>The options of a box plot visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BoxPlotOptions">AWS
   * API Reference</a></p>
   */
  class BoxPlotOptions
  {
  public:
    AWS_QUICKSIGHT_API BoxPlotOptions() = default;
    AWS_QUICKSIGHT_API BoxPlotOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BoxPlotOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The style options of the box plot.</p>
     */
    inline const BoxPlotStyleOptions& GetStyleOptions() const { return m_styleOptions; }
    inline bool StyleOptionsHasBeenSet() const { return m_styleOptionsHasBeenSet; }
    template<typename StyleOptionsT = BoxPlotStyleOptions>
    void SetStyleOptions(StyleOptionsT&& value) { m_styleOptionsHasBeenSet = true; m_styleOptions = std::forward<StyleOptionsT>(value); }
    template<typename StyleOptionsT = BoxPlotStyleOptions>
    BoxPlotOptions& WithStyleOptions(StyleOptionsT&& value) { SetStyleOptions(std::forward<StyleOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the visibility of the outlier in a box plot.</p>
     */
    inline Visibility GetOutlierVisibility() const { return m_outlierVisibility; }
    inline bool OutlierVisibilityHasBeenSet() const { return m_outlierVisibilityHasBeenSet; }
    inline void SetOutlierVisibility(Visibility value) { m_outlierVisibilityHasBeenSet = true; m_outlierVisibility = value; }
    inline BoxPlotOptions& WithOutlierVisibility(Visibility value) { SetOutlierVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the visibility of all data points of the box plot.</p>
     */
    inline Visibility GetAllDataPointsVisibility() const { return m_allDataPointsVisibility; }
    inline bool AllDataPointsVisibilityHasBeenSet() const { return m_allDataPointsVisibilityHasBeenSet; }
    inline void SetAllDataPointsVisibility(Visibility value) { m_allDataPointsVisibilityHasBeenSet = true; m_allDataPointsVisibility = value; }
    inline BoxPlotOptions& WithAllDataPointsVisibility(Visibility value) { SetAllDataPointsVisibility(value); return *this;}
    ///@}
  private:

    BoxPlotStyleOptions m_styleOptions;
    bool m_styleOptionsHasBeenSet = false;

    Visibility m_outlierVisibility{Visibility::NOT_SET};
    bool m_outlierVisibilityHasBeenSet = false;

    Visibility m_allDataPointsVisibility{Visibility::NOT_SET};
    bool m_allDataPointsVisibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
