/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GeospatialCircleSymbolStyle.h>
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
   * <p>The point style for a point layer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialPointStyle">AWS
   * API Reference</a></p>
   */
  class GeospatialPointStyle
  {
  public:
    AWS_QUICKSIGHT_API GeospatialPointStyle();
    AWS_QUICKSIGHT_API GeospatialPointStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialPointStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The circle symbol style for a point layer.</p>
     */
    inline const GeospatialCircleSymbolStyle& GetCircleSymbolStyle() const{ return m_circleSymbolStyle; }
    inline bool CircleSymbolStyleHasBeenSet() const { return m_circleSymbolStyleHasBeenSet; }
    inline void SetCircleSymbolStyle(const GeospatialCircleSymbolStyle& value) { m_circleSymbolStyleHasBeenSet = true; m_circleSymbolStyle = value; }
    inline void SetCircleSymbolStyle(GeospatialCircleSymbolStyle&& value) { m_circleSymbolStyleHasBeenSet = true; m_circleSymbolStyle = std::move(value); }
    inline GeospatialPointStyle& WithCircleSymbolStyle(const GeospatialCircleSymbolStyle& value) { SetCircleSymbolStyle(value); return *this;}
    inline GeospatialPointStyle& WithCircleSymbolStyle(GeospatialCircleSymbolStyle&& value) { SetCircleSymbolStyle(std::move(value)); return *this;}
    ///@}
  private:

    GeospatialCircleSymbolStyle m_circleSymbolStyle;
    bool m_circleSymbolStyleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
