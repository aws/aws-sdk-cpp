/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TableCellImageScalingConfiguration.h>
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
   * <p>The sizing options for the table image configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableCellImageSizingConfiguration">AWS
   * API Reference</a></p>
   */
  class TableCellImageSizingConfiguration
  {
  public:
    AWS_QUICKSIGHT_API TableCellImageSizingConfiguration() = default;
    AWS_QUICKSIGHT_API TableCellImageSizingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableCellImageSizingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cell scaling configuration of the sizing options for the table image
     * configuration.</p>
     */
    inline TableCellImageScalingConfiguration GetTableCellImageScalingConfiguration() const { return m_tableCellImageScalingConfiguration; }
    inline bool TableCellImageScalingConfigurationHasBeenSet() const { return m_tableCellImageScalingConfigurationHasBeenSet; }
    inline void SetTableCellImageScalingConfiguration(TableCellImageScalingConfiguration value) { m_tableCellImageScalingConfigurationHasBeenSet = true; m_tableCellImageScalingConfiguration = value; }
    inline TableCellImageSizingConfiguration& WithTableCellImageScalingConfiguration(TableCellImageScalingConfiguration value) { SetTableCellImageScalingConfiguration(value); return *this;}
    ///@}
  private:

    TableCellImageScalingConfiguration m_tableCellImageScalingConfiguration{TableCellImageScalingConfiguration::NOT_SET};
    bool m_tableCellImageScalingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
