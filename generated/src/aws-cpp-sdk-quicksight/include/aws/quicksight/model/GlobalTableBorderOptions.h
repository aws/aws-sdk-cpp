/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TableBorderOptions.h>
#include <aws/quicksight/model/TableSideBorderOptions.h>
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
   * <p>Determines the border options for a table visual.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GlobalTableBorderOptions">AWS
   * API Reference</a></p>
   */
  class GlobalTableBorderOptions
  {
  public:
    AWS_QUICKSIGHT_API GlobalTableBorderOptions() = default;
    AWS_QUICKSIGHT_API GlobalTableBorderOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GlobalTableBorderOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines the options for uniform border.</p>
     */
    inline const TableBorderOptions& GetUniformBorder() const { return m_uniformBorder; }
    inline bool UniformBorderHasBeenSet() const { return m_uniformBorderHasBeenSet; }
    template<typename UniformBorderT = TableBorderOptions>
    void SetUniformBorder(UniformBorderT&& value) { m_uniformBorderHasBeenSet = true; m_uniformBorder = std::forward<UniformBorderT>(value); }
    template<typename UniformBorderT = TableBorderOptions>
    GlobalTableBorderOptions& WithUniformBorder(UniformBorderT&& value) { SetUniformBorder(std::forward<UniformBorderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the options for side specific border.</p>
     */
    inline const TableSideBorderOptions& GetSideSpecificBorder() const { return m_sideSpecificBorder; }
    inline bool SideSpecificBorderHasBeenSet() const { return m_sideSpecificBorderHasBeenSet; }
    template<typename SideSpecificBorderT = TableSideBorderOptions>
    void SetSideSpecificBorder(SideSpecificBorderT&& value) { m_sideSpecificBorderHasBeenSet = true; m_sideSpecificBorder = std::forward<SideSpecificBorderT>(value); }
    template<typename SideSpecificBorderT = TableSideBorderOptions>
    GlobalTableBorderOptions& WithSideSpecificBorder(SideSpecificBorderT&& value) { SetSideSpecificBorder(std::forward<SideSpecificBorderT>(value)); return *this;}
    ///@}
  private:

    TableBorderOptions m_uniformBorder;
    bool m_uniformBorderHasBeenSet = false;

    TableSideBorderOptions m_sideSpecificBorder;
    bool m_sideSpecificBorderHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
