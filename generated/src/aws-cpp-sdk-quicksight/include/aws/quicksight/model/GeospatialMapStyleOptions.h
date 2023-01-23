/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/BaseMapStyleType.h>
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
   * <p>The map style options of the geospatial map.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialMapStyleOptions">AWS
   * API Reference</a></p>
   */
  class GeospatialMapStyleOptions
  {
  public:
    AWS_QUICKSIGHT_API GeospatialMapStyleOptions();
    AWS_QUICKSIGHT_API GeospatialMapStyleOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialMapStyleOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The base map style of the geospatial map.</p>
     */
    inline const BaseMapStyleType& GetBaseMapStyle() const{ return m_baseMapStyle; }

    /**
     * <p>The base map style of the geospatial map.</p>
     */
    inline bool BaseMapStyleHasBeenSet() const { return m_baseMapStyleHasBeenSet; }

    /**
     * <p>The base map style of the geospatial map.</p>
     */
    inline void SetBaseMapStyle(const BaseMapStyleType& value) { m_baseMapStyleHasBeenSet = true; m_baseMapStyle = value; }

    /**
     * <p>The base map style of the geospatial map.</p>
     */
    inline void SetBaseMapStyle(BaseMapStyleType&& value) { m_baseMapStyleHasBeenSet = true; m_baseMapStyle = std::move(value); }

    /**
     * <p>The base map style of the geospatial map.</p>
     */
    inline GeospatialMapStyleOptions& WithBaseMapStyle(const BaseMapStyleType& value) { SetBaseMapStyle(value); return *this;}

    /**
     * <p>The base map style of the geospatial map.</p>
     */
    inline GeospatialMapStyleOptions& WithBaseMapStyle(BaseMapStyleType&& value) { SetBaseMapStyle(std::move(value)); return *this;}

  private:

    BaseMapStyleType m_baseMapStyle;
    bool m_baseMapStyleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
