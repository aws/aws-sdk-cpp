/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GeospatialPolygonStyle.h>
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
   * <p>The geospatial polygon layer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialPolygonLayer">AWS
   * API Reference</a></p>
   */
  class GeospatialPolygonLayer
  {
  public:
    AWS_QUICKSIGHT_API GeospatialPolygonLayer() = default;
    AWS_QUICKSIGHT_API GeospatialPolygonLayer(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialPolygonLayer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The visualization style for a polygon layer.</p>
     */
    inline const GeospatialPolygonStyle& GetStyle() const { return m_style; }
    inline bool StyleHasBeenSet() const { return m_styleHasBeenSet; }
    template<typename StyleT = GeospatialPolygonStyle>
    void SetStyle(StyleT&& value) { m_styleHasBeenSet = true; m_style = std::forward<StyleT>(value); }
    template<typename StyleT = GeospatialPolygonStyle>
    GeospatialPolygonLayer& WithStyle(StyleT&& value) { SetStyle(std::forward<StyleT>(value)); return *this;}
    ///@}
  private:

    GeospatialPolygonStyle m_style;
    bool m_styleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
