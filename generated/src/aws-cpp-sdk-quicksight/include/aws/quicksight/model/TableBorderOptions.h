/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TableBorderStyle.h>
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
   * <p>The border options for a table border.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableBorderOptions">AWS
   * API Reference</a></p>
   */
  class TableBorderOptions
  {
  public:
    AWS_QUICKSIGHT_API TableBorderOptions() = default;
    AWS_QUICKSIGHT_API TableBorderOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableBorderOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The color of a table border.</p>
     */
    inline const Aws::String& GetColor() const { return m_color; }
    inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
    template<typename ColorT = Aws::String>
    void SetColor(ColorT&& value) { m_colorHasBeenSet = true; m_color = std::forward<ColorT>(value); }
    template<typename ColorT = Aws::String>
    TableBorderOptions& WithColor(ColorT&& value) { SetColor(std::forward<ColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thickness of a table border.</p>
     */
    inline int GetThickness() const { return m_thickness; }
    inline bool ThicknessHasBeenSet() const { return m_thicknessHasBeenSet; }
    inline void SetThickness(int value) { m_thicknessHasBeenSet = true; m_thickness = value; }
    inline TableBorderOptions& WithThickness(int value) { SetThickness(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The style (none, solid) of a table border.</p>
     */
    inline TableBorderStyle GetStyle() const { return m_style; }
    inline bool StyleHasBeenSet() const { return m_styleHasBeenSet; }
    inline void SetStyle(TableBorderStyle value) { m_styleHasBeenSet = true; m_style = value; }
    inline TableBorderOptions& WithStyle(TableBorderStyle value) { SetStyle(value); return *this;}
    ///@}
  private:

    Aws::String m_color;
    bool m_colorHasBeenSet = false;

    int m_thickness{0};
    bool m_thicknessHasBeenSet = false;

    TableBorderStyle m_style{TableBorderStyle::NOT_SET};
    bool m_styleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
