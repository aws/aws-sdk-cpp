/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/quicksight/model/FormatConfiguration.h>
#include <aws/quicksight/model/ColumnRole.h>
#include <aws/quicksight/model/ColorsConfiguration.h>
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
   * <p>The general configuration of a column.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ColumnConfiguration">AWS
   * API Reference</a></p>
   */
  class ColumnConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ColumnConfiguration() = default;
    AWS_QUICKSIGHT_API ColumnConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ColumnConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The column.</p>
     */
    inline const ColumnIdentifier& GetColumn() const { return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    template<typename ColumnT = ColumnIdentifier>
    void SetColumn(ColumnT&& value) { m_columnHasBeenSet = true; m_column = std::forward<ColumnT>(value); }
    template<typename ColumnT = ColumnIdentifier>
    ColumnConfiguration& WithColumn(ColumnT&& value) { SetColumn(std::forward<ColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format configuration of a column.</p>
     */
    inline const FormatConfiguration& GetFormatConfiguration() const { return m_formatConfiguration; }
    inline bool FormatConfigurationHasBeenSet() const { return m_formatConfigurationHasBeenSet; }
    template<typename FormatConfigurationT = FormatConfiguration>
    void SetFormatConfiguration(FormatConfigurationT&& value) { m_formatConfigurationHasBeenSet = true; m_formatConfiguration = std::forward<FormatConfigurationT>(value); }
    template<typename FormatConfigurationT = FormatConfiguration>
    ColumnConfiguration& WithFormatConfiguration(FormatConfigurationT&& value) { SetFormatConfiguration(std::forward<FormatConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role of the column.</p>
     */
    inline ColumnRole GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(ColumnRole value) { m_roleHasBeenSet = true; m_role = value; }
    inline ColumnConfiguration& WithRole(ColumnRole value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color configurations of the column.</p>
     */
    inline const ColorsConfiguration& GetColorsConfiguration() const { return m_colorsConfiguration; }
    inline bool ColorsConfigurationHasBeenSet() const { return m_colorsConfigurationHasBeenSet; }
    template<typename ColorsConfigurationT = ColorsConfiguration>
    void SetColorsConfiguration(ColorsConfigurationT&& value) { m_colorsConfigurationHasBeenSet = true; m_colorsConfiguration = std::forward<ColorsConfigurationT>(value); }
    template<typename ColorsConfigurationT = ColorsConfiguration>
    ColumnConfiguration& WithColorsConfiguration(ColorsConfigurationT&& value) { SetColorsConfiguration(std::forward<ColorsConfigurationT>(value)); return *this;}
    ///@}
  private:

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    FormatConfiguration m_formatConfiguration;
    bool m_formatConfigurationHasBeenSet = false;

    ColumnRole m_role{ColumnRole::NOT_SET};
    bool m_roleHasBeenSet = false;

    ColorsConfiguration m_colorsConfiguration;
    bool m_colorsConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
