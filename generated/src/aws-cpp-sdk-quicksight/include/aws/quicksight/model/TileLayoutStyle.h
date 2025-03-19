/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GutterStyle.h>
#include <aws/quicksight/model/MarginStyle.h>
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
   * <p>The display options for the layout of tiles on a sheet.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TileLayoutStyle">AWS
   * API Reference</a></p>
   */
  class TileLayoutStyle
  {
  public:
    AWS_QUICKSIGHT_API TileLayoutStyle() = default;
    AWS_QUICKSIGHT_API TileLayoutStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TileLayoutStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The gutter settings that apply between tiles. </p>
     */
    inline const GutterStyle& GetGutter() const { return m_gutter; }
    inline bool GutterHasBeenSet() const { return m_gutterHasBeenSet; }
    template<typename GutterT = GutterStyle>
    void SetGutter(GutterT&& value) { m_gutterHasBeenSet = true; m_gutter = std::forward<GutterT>(value); }
    template<typename GutterT = GutterStyle>
    TileLayoutStyle& WithGutter(GutterT&& value) { SetGutter(std::forward<GutterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The margin settings that apply around the outside edge of sheets.</p>
     */
    inline const MarginStyle& GetMargin() const { return m_margin; }
    inline bool MarginHasBeenSet() const { return m_marginHasBeenSet; }
    template<typename MarginT = MarginStyle>
    void SetMargin(MarginT&& value) { m_marginHasBeenSet = true; m_margin = std::forward<MarginT>(value); }
    template<typename MarginT = MarginStyle>
    TileLayoutStyle& WithMargin(MarginT&& value) { SetMargin(std::forward<MarginT>(value)); return *this;}
    ///@}
  private:

    GutterStyle m_gutter;
    bool m_gutterHasBeenSet = false;

    MarginStyle m_margin;
    bool m_marginHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
