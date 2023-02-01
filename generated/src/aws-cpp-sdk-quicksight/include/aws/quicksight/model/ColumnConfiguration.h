/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/quicksight/model/FormatConfiguration.h>
#include <aws/quicksight/model/ColumnRole.h>
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
    AWS_QUICKSIGHT_API ColumnConfiguration();
    AWS_QUICKSIGHT_API ColumnConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ColumnConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The column.</p>
     */
    inline const ColumnIdentifier& GetColumn() const{ return m_column; }

    /**
     * <p>The column.</p>
     */
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }

    /**
     * <p>The column.</p>
     */
    inline void SetColumn(const ColumnIdentifier& value) { m_columnHasBeenSet = true; m_column = value; }

    /**
     * <p>The column.</p>
     */
    inline void SetColumn(ColumnIdentifier&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }

    /**
     * <p>The column.</p>
     */
    inline ColumnConfiguration& WithColumn(const ColumnIdentifier& value) { SetColumn(value); return *this;}

    /**
     * <p>The column.</p>
     */
    inline ColumnConfiguration& WithColumn(ColumnIdentifier&& value) { SetColumn(std::move(value)); return *this;}


    /**
     * <p>The format configuration of a column.</p>
     */
    inline const FormatConfiguration& GetFormatConfiguration() const{ return m_formatConfiguration; }

    /**
     * <p>The format configuration of a column.</p>
     */
    inline bool FormatConfigurationHasBeenSet() const { return m_formatConfigurationHasBeenSet; }

    /**
     * <p>The format configuration of a column.</p>
     */
    inline void SetFormatConfiguration(const FormatConfiguration& value) { m_formatConfigurationHasBeenSet = true; m_formatConfiguration = value; }

    /**
     * <p>The format configuration of a column.</p>
     */
    inline void SetFormatConfiguration(FormatConfiguration&& value) { m_formatConfigurationHasBeenSet = true; m_formatConfiguration = std::move(value); }

    /**
     * <p>The format configuration of a column.</p>
     */
    inline ColumnConfiguration& WithFormatConfiguration(const FormatConfiguration& value) { SetFormatConfiguration(value); return *this;}

    /**
     * <p>The format configuration of a column.</p>
     */
    inline ColumnConfiguration& WithFormatConfiguration(FormatConfiguration&& value) { SetFormatConfiguration(std::move(value)); return *this;}


    /**
     * <p>The role of the column.</p>
     */
    inline const ColumnRole& GetRole() const{ return m_role; }

    /**
     * <p>The role of the column.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The role of the column.</p>
     */
    inline void SetRole(const ColumnRole& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The role of the column.</p>
     */
    inline void SetRole(ColumnRole&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The role of the column.</p>
     */
    inline ColumnConfiguration& WithRole(const ColumnRole& value) { SetRole(value); return *this;}

    /**
     * <p>The role of the column.</p>
     */
    inline ColumnConfiguration& WithRole(ColumnRole&& value) { SetRole(std::move(value)); return *this;}

  private:

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    FormatConfiguration m_formatConfiguration;
    bool m_formatConfigurationHasBeenSet = false;

    ColumnRole m_role;
    bool m_roleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
