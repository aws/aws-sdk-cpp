/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GeospatialLineSymbolStyle.h>
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
   * <p>The visualization style for a line layer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialLineStyle">AWS
   * API Reference</a></p>
   */
  class GeospatialLineStyle
  {
  public:
    AWS_QUICKSIGHT_API GeospatialLineStyle() = default;
    AWS_QUICKSIGHT_API GeospatialLineStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialLineStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The symbol style for a line style.</p>
     */
    inline const GeospatialLineSymbolStyle& GetLineSymbolStyle() const { return m_lineSymbolStyle; }
    inline bool LineSymbolStyleHasBeenSet() const { return m_lineSymbolStyleHasBeenSet; }
    template<typename LineSymbolStyleT = GeospatialLineSymbolStyle>
    void SetLineSymbolStyle(LineSymbolStyleT&& value) { m_lineSymbolStyleHasBeenSet = true; m_lineSymbolStyle = std::forward<LineSymbolStyleT>(value); }
    template<typename LineSymbolStyleT = GeospatialLineSymbolStyle>
    GeospatialLineStyle& WithLineSymbolStyle(LineSymbolStyleT&& value) { SetLineSymbolStyle(std::forward<LineSymbolStyleT>(value)); return *this;}
    ///@}
  private:

    GeospatialLineSymbolStyle m_lineSymbolStyle;
    bool m_lineSymbolStyleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
