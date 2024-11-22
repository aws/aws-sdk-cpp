/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/BaseMapStyleType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The map style properties for a map.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialMapStyle">AWS
   * API Reference</a></p>
   */
  class GeospatialMapStyle
  {
  public:
    AWS_QUICKSIGHT_API GeospatialMapStyle();
    AWS_QUICKSIGHT_API GeospatialMapStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialMapStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The selected base map style.</p>
     */
    inline const BaseMapStyleType& GetBaseMapStyle() const{ return m_baseMapStyle; }
    inline bool BaseMapStyleHasBeenSet() const { return m_baseMapStyleHasBeenSet; }
    inline void SetBaseMapStyle(const BaseMapStyleType& value) { m_baseMapStyleHasBeenSet = true; m_baseMapStyle = value; }
    inline void SetBaseMapStyle(BaseMapStyleType&& value) { m_baseMapStyleHasBeenSet = true; m_baseMapStyle = std::move(value); }
    inline GeospatialMapStyle& WithBaseMapStyle(const BaseMapStyleType& value) { SetBaseMapStyle(value); return *this;}
    inline GeospatialMapStyle& WithBaseMapStyle(BaseMapStyleType&& value) { SetBaseMapStyle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The background color and opacity values for a map.</p>
     */
    inline const Aws::String& GetBackgroundColor() const{ return m_backgroundColor; }
    inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }
    inline void SetBackgroundColor(const Aws::String& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = value; }
    inline void SetBackgroundColor(Aws::String&& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = std::move(value); }
    inline void SetBackgroundColor(const char* value) { m_backgroundColorHasBeenSet = true; m_backgroundColor.assign(value); }
    inline GeospatialMapStyle& WithBackgroundColor(const Aws::String& value) { SetBackgroundColor(value); return *this;}
    inline GeospatialMapStyle& WithBackgroundColor(Aws::String&& value) { SetBackgroundColor(std::move(value)); return *this;}
    inline GeospatialMapStyle& WithBackgroundColor(const char* value) { SetBackgroundColor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of visibility for the base map.</p>
     */
    inline const Visibility& GetBaseMapVisibility() const{ return m_baseMapVisibility; }
    inline bool BaseMapVisibilityHasBeenSet() const { return m_baseMapVisibilityHasBeenSet; }
    inline void SetBaseMapVisibility(const Visibility& value) { m_baseMapVisibilityHasBeenSet = true; m_baseMapVisibility = value; }
    inline void SetBaseMapVisibility(Visibility&& value) { m_baseMapVisibilityHasBeenSet = true; m_baseMapVisibility = std::move(value); }
    inline GeospatialMapStyle& WithBaseMapVisibility(const Visibility& value) { SetBaseMapVisibility(value); return *this;}
    inline GeospatialMapStyle& WithBaseMapVisibility(Visibility&& value) { SetBaseMapVisibility(std::move(value)); return *this;}
    ///@}
  private:

    BaseMapStyleType m_baseMapStyle;
    bool m_baseMapStyleHasBeenSet = false;

    Aws::String m_backgroundColor;
    bool m_backgroundColorHasBeenSet = false;

    Visibility m_baseMapVisibility;
    bool m_baseMapVisibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
