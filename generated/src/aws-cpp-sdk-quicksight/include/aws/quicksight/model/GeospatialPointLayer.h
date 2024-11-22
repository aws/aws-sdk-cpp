/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GeospatialPointStyle.h>
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
   * <p>The geospatial Point layer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialPointLayer">AWS
   * API Reference</a></p>
   */
  class GeospatialPointLayer
  {
  public:
    AWS_QUICKSIGHT_API GeospatialPointLayer();
    AWS_QUICKSIGHT_API GeospatialPointLayer(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialPointLayer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The visualization style for a point layer.</p>
     */
    inline const GeospatialPointStyle& GetStyle() const{ return m_style; }
    inline bool StyleHasBeenSet() const { return m_styleHasBeenSet; }
    inline void SetStyle(const GeospatialPointStyle& value) { m_styleHasBeenSet = true; m_style = value; }
    inline void SetStyle(GeospatialPointStyle&& value) { m_styleHasBeenSet = true; m_style = std::move(value); }
    inline GeospatialPointLayer& WithStyle(const GeospatialPointStyle& value) { SetStyle(value); return *this;}
    inline GeospatialPointLayer& WithStyle(GeospatialPointStyle&& value) { SetStyle(std::move(value)); return *this;}
    ///@}
  private:

    GeospatialPointStyle m_style;
    bool m_styleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
