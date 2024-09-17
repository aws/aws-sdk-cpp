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
    AWS_QUICKSIGHT_API TableBorderOptions();
    AWS_QUICKSIGHT_API TableBorderOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableBorderOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The color of a table border.</p>
     */
    inline const Aws::String& GetColor() const{ return m_color; }
    inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
    inline void SetColor(const Aws::String& value) { m_colorHasBeenSet = true; m_color = value; }
    inline void SetColor(Aws::String&& value) { m_colorHasBeenSet = true; m_color = std::move(value); }
    inline void SetColor(const char* value) { m_colorHasBeenSet = true; m_color.assign(value); }
    inline TableBorderOptions& WithColor(const Aws::String& value) { SetColor(value); return *this;}
    inline TableBorderOptions& WithColor(Aws::String&& value) { SetColor(std::move(value)); return *this;}
    inline TableBorderOptions& WithColor(const char* value) { SetColor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thickness of a table border.</p>
     */
    inline int GetThickness() const{ return m_thickness; }
    inline bool ThicknessHasBeenSet() const { return m_thicknessHasBeenSet; }
    inline void SetThickness(int value) { m_thicknessHasBeenSet = true; m_thickness = value; }
    inline TableBorderOptions& WithThickness(int value) { SetThickness(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The style (none, solid) of a table border.</p>
     */
    inline const TableBorderStyle& GetStyle() const{ return m_style; }
    inline bool StyleHasBeenSet() const { return m_styleHasBeenSet; }
    inline void SetStyle(const TableBorderStyle& value) { m_styleHasBeenSet = true; m_style = value; }
    inline void SetStyle(TableBorderStyle&& value) { m_styleHasBeenSet = true; m_style = std::move(value); }
    inline TableBorderOptions& WithStyle(const TableBorderStyle& value) { SetStyle(value); return *this;}
    inline TableBorderOptions& WithStyle(TableBorderStyle&& value) { SetStyle(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_color;
    bool m_colorHasBeenSet = false;

    int m_thickness;
    bool m_thicknessHasBeenSet = false;

    TableBorderStyle m_style;
    bool m_styleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
