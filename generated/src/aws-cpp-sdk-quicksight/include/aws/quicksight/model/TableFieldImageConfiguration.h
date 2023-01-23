/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TableCellImageSizingConfiguration.h>
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
   * <p>The image configuration of a table field URL.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableFieldImageConfiguration">AWS
   * API Reference</a></p>
   */
  class TableFieldImageConfiguration
  {
  public:
    AWS_QUICKSIGHT_API TableFieldImageConfiguration();
    AWS_QUICKSIGHT_API TableFieldImageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableFieldImageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The sizing options for the table image configuration.</p>
     */
    inline const TableCellImageSizingConfiguration& GetSizingOptions() const{ return m_sizingOptions; }

    /**
     * <p>The sizing options for the table image configuration.</p>
     */
    inline bool SizingOptionsHasBeenSet() const { return m_sizingOptionsHasBeenSet; }

    /**
     * <p>The sizing options for the table image configuration.</p>
     */
    inline void SetSizingOptions(const TableCellImageSizingConfiguration& value) { m_sizingOptionsHasBeenSet = true; m_sizingOptions = value; }

    /**
     * <p>The sizing options for the table image configuration.</p>
     */
    inline void SetSizingOptions(TableCellImageSizingConfiguration&& value) { m_sizingOptionsHasBeenSet = true; m_sizingOptions = std::move(value); }

    /**
     * <p>The sizing options for the table image configuration.</p>
     */
    inline TableFieldImageConfiguration& WithSizingOptions(const TableCellImageSizingConfiguration& value) { SetSizingOptions(value); return *this;}

    /**
     * <p>The sizing options for the table image configuration.</p>
     */
    inline TableFieldImageConfiguration& WithSizingOptions(TableCellImageSizingConfiguration&& value) { SetSizingOptions(std::move(value)); return *this;}

  private:

    TableCellImageSizingConfiguration m_sizingOptions;
    bool m_sizingOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
