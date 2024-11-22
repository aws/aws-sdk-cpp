/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GeospatialPolygonSymbolStyle.h>
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
   * <p>The polygon style for a polygon layer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialPolygonStyle">AWS
   * API Reference</a></p>
   */
  class GeospatialPolygonStyle
  {
  public:
    AWS_QUICKSIGHT_API GeospatialPolygonStyle();
    AWS_QUICKSIGHT_API GeospatialPolygonStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialPolygonStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The polygon symbol style for a polygon layer.</p>
     */
    inline const GeospatialPolygonSymbolStyle& GetPolygonSymbolStyle() const{ return m_polygonSymbolStyle; }
    inline bool PolygonSymbolStyleHasBeenSet() const { return m_polygonSymbolStyleHasBeenSet; }
    inline void SetPolygonSymbolStyle(const GeospatialPolygonSymbolStyle& value) { m_polygonSymbolStyleHasBeenSet = true; m_polygonSymbolStyle = value; }
    inline void SetPolygonSymbolStyle(GeospatialPolygonSymbolStyle&& value) { m_polygonSymbolStyleHasBeenSet = true; m_polygonSymbolStyle = std::move(value); }
    inline GeospatialPolygonStyle& WithPolygonSymbolStyle(const GeospatialPolygonSymbolStyle& value) { SetPolygonSymbolStyle(value); return *this;}
    inline GeospatialPolygonStyle& WithPolygonSymbolStyle(GeospatialPolygonSymbolStyle&& value) { SetPolygonSymbolStyle(std::move(value)); return *this;}
    ///@}
  private:

    GeospatialPolygonSymbolStyle m_polygonSymbolStyle;
    bool m_polygonSymbolStyleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
