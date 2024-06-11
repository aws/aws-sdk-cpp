/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The color to be used in the heatmap point style.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialHeatmapDataColor">AWS
   * API Reference</a></p>
   */
  class GeospatialHeatmapDataColor
  {
  public:
    AWS_QUICKSIGHT_API GeospatialHeatmapDataColor();
    AWS_QUICKSIGHT_API GeospatialHeatmapDataColor(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialHeatmapDataColor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The hex color to be used in the heatmap point style.</p>
     */
    inline const Aws::String& GetColor() const{ return m_color; }
    inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
    inline void SetColor(const Aws::String& value) { m_colorHasBeenSet = true; m_color = value; }
    inline void SetColor(Aws::String&& value) { m_colorHasBeenSet = true; m_color = std::move(value); }
    inline void SetColor(const char* value) { m_colorHasBeenSet = true; m_color.assign(value); }
    inline GeospatialHeatmapDataColor& WithColor(const Aws::String& value) { SetColor(value); return *this;}
    inline GeospatialHeatmapDataColor& WithColor(Aws::String&& value) { SetColor(std::move(value)); return *this;}
    inline GeospatialHeatmapDataColor& WithColor(const char* value) { SetColor(value); return *this;}
    ///@}
  private:

    Aws::String m_color;
    bool m_colorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
