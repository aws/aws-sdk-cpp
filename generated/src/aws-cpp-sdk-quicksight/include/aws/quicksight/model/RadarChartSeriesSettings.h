/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/RadarChartAreaStyleSettings.h>
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
   * <p>The series settings of a radar chart.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RadarChartSeriesSettings">AWS
   * API Reference</a></p>
   */
  class RadarChartSeriesSettings
  {
  public:
    AWS_QUICKSIGHT_API RadarChartSeriesSettings();
    AWS_QUICKSIGHT_API RadarChartSeriesSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RadarChartSeriesSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The area style settings of a radar chart.</p>
     */
    inline const RadarChartAreaStyleSettings& GetAreaStyleSettings() const{ return m_areaStyleSettings; }
    inline bool AreaStyleSettingsHasBeenSet() const { return m_areaStyleSettingsHasBeenSet; }
    inline void SetAreaStyleSettings(const RadarChartAreaStyleSettings& value) { m_areaStyleSettingsHasBeenSet = true; m_areaStyleSettings = value; }
    inline void SetAreaStyleSettings(RadarChartAreaStyleSettings&& value) { m_areaStyleSettingsHasBeenSet = true; m_areaStyleSettings = std::move(value); }
    inline RadarChartSeriesSettings& WithAreaStyleSettings(const RadarChartAreaStyleSettings& value) { SetAreaStyleSettings(value); return *this;}
    inline RadarChartSeriesSettings& WithAreaStyleSettings(RadarChartAreaStyleSettings&& value) { SetAreaStyleSettings(std::move(value)); return *this;}
    ///@}
  private:

    RadarChartAreaStyleSettings m_areaStyleSettings;
    bool m_areaStyleSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
