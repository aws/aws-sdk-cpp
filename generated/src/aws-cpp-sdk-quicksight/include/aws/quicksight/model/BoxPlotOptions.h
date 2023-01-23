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
    AWS_QUICKSIGHT_API BoxPlotOptions();
    AWS_QUICKSIGHT_API BoxPlotOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BoxPlotOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The style options of the box plot.</p>
     */
    inline const BoxPlotStyleOptions& GetStyleOptions() const{ return m_styleOptions; }

    /**
     * <p>The style options of the box plot.</p>
     */
    inline bool StyleOptionsHasBeenSet() const { return m_styleOptionsHasBeenSet; }

    /**
     * <p>The style options of the box plot.</p>
     */
    inline void SetStyleOptions(const BoxPlotStyleOptions& value) { m_styleOptionsHasBeenSet = true; m_styleOptions = value; }

    /**
     * <p>The style options of the box plot.</p>
     */
    inline void SetStyleOptions(BoxPlotStyleOptions&& value) { m_styleOptionsHasBeenSet = true; m_styleOptions = std::move(value); }

    /**
     * <p>The style options of the box plot.</p>
     */
    inline BoxPlotOptions& WithStyleOptions(const BoxPlotStyleOptions& value) { SetStyleOptions(value); return *this;}

    /**
     * <p>The style options of the box plot.</p>
     */
    inline BoxPlotOptions& WithStyleOptions(BoxPlotStyleOptions&& value) { SetStyleOptions(std::move(value)); return *this;}


    /**
     * <p>Determines the visibility of the outlier in a box plot.</p>
     */
    inline const Visibility& GetOutlierVisibility() const{ return m_outlierVisibility; }

    /**
     * <p>Determines the visibility of the outlier in a box plot.</p>
     */
    inline bool OutlierVisibilityHasBeenSet() const { return m_outlierVisibilityHasBeenSet; }

    /**
     * <p>Determines the visibility of the outlier in a box plot.</p>
     */
    inline void SetOutlierVisibility(const Visibility& value) { m_outlierVisibilityHasBeenSet = true; m_outlierVisibility = value; }

    /**
     * <p>Determines the visibility of the outlier in a box plot.</p>
     */
    inline void SetOutlierVisibility(Visibility&& value) { m_outlierVisibilityHasBeenSet = true; m_outlierVisibility = std::move(value); }

    /**
     * <p>Determines the visibility of the outlier in a box plot.</p>
     */
    inline BoxPlotOptions& WithOutlierVisibility(const Visibility& value) { SetOutlierVisibility(value); return *this;}

    /**
     * <p>Determines the visibility of the outlier in a box plot.</p>
     */
    inline BoxPlotOptions& WithOutlierVisibility(Visibility&& value) { SetOutlierVisibility(std::move(value)); return *this;}


    /**
     * <p>Determines the visibility of all data points of the box plot.</p>
     */
    inline const Visibility& GetAllDataPointsVisibility() const{ return m_allDataPointsVisibility; }

    /**
     * <p>Determines the visibility of all data points of the box plot.</p>
     */
    inline bool AllDataPointsVisibilityHasBeenSet() const { return m_allDataPointsVisibilityHasBeenSet; }

    /**
     * <p>Determines the visibility of all data points of the box plot.</p>
     */
    inline void SetAllDataPointsVisibility(const Visibility& value) { m_allDataPointsVisibilityHasBeenSet = true; m_allDataPointsVisibility = value; }

    /**
     * <p>Determines the visibility of all data points of the box plot.</p>
     */
    inline void SetAllDataPointsVisibility(Visibility&& value) { m_allDataPointsVisibilityHasBeenSet = true; m_allDataPointsVisibility = std::move(value); }

    /**
     * <p>Determines the visibility of all data points of the box plot.</p>
     */
    inline BoxPlotOptions& WithAllDataPointsVisibility(const Visibility& value) { SetAllDataPointsVisibility(value); return *this;}

    /**
     * <p>Determines the visibility of all data points of the box plot.</p>
     */
    inline BoxPlotOptions& WithAllDataPointsVisibility(Visibility&& value) { SetAllDataPointsVisibility(std::move(value)); return *this;}

  private:

    BoxPlotStyleOptions m_styleOptions;
    bool m_styleOptionsHasBeenSet = false;

    Visibility m_outlierVisibility;
    bool m_outlierVisibilityHasBeenSet = false;

    Visibility m_allDataPointsVisibility;
    bool m_allDataPointsVisibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
