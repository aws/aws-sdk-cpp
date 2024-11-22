/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GeospatialLineStyle.h>
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
   * <p>The geospatial Line layer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialLineLayer">AWS
   * API Reference</a></p>
   */
  class GeospatialLineLayer
  {
  public:
    AWS_QUICKSIGHT_API GeospatialLineLayer();
    AWS_QUICKSIGHT_API GeospatialLineLayer(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialLineLayer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The visualization style for a line layer.</p>
     */
    inline const GeospatialLineStyle& GetStyle() const{ return m_style; }
    inline bool StyleHasBeenSet() const { return m_styleHasBeenSet; }
    inline void SetStyle(const GeospatialLineStyle& value) { m_styleHasBeenSet = true; m_style = value; }
    inline void SetStyle(GeospatialLineStyle&& value) { m_styleHasBeenSet = true; m_style = std::move(value); }
    inline GeospatialLineLayer& WithStyle(const GeospatialLineStyle& value) { SetStyle(value); return *this;}
    inline GeospatialLineLayer& WithStyle(GeospatialLineStyle&& value) { SetStyle(std::move(value)); return *this;}
    ///@}
  private:

    GeospatialLineStyle m_style;
    bool m_styleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
