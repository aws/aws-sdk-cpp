/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/PivotTableFieldOption.h>
#include <aws/quicksight/model/PivotTableDataPathOption.h>
#include <aws/quicksight/model/PivotTableFieldCollapseStateOption.h>
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
   * <p>The field options for a pivot table visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotTableFieldOptions">AWS
   * API Reference</a></p>
   */
  class PivotTableFieldOptions
  {
  public:
    AWS_QUICKSIGHT_API PivotTableFieldOptions() = default;
    AWS_QUICKSIGHT_API PivotTableFieldOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableFieldOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The selected field options for the pivot table field options.</p>
     */
    inline const Aws::Vector<PivotTableFieldOption>& GetSelectedFieldOptions() const { return m_selectedFieldOptions; }
    inline bool SelectedFieldOptionsHasBeenSet() const { return m_selectedFieldOptionsHasBeenSet; }
    template<typename SelectedFieldOptionsT = Aws::Vector<PivotTableFieldOption>>
    void SetSelectedFieldOptions(SelectedFieldOptionsT&& value) { m_selectedFieldOptionsHasBeenSet = true; m_selectedFieldOptions = std::forward<SelectedFieldOptionsT>(value); }
    template<typename SelectedFieldOptionsT = Aws::Vector<PivotTableFieldOption>>
    PivotTableFieldOptions& WithSelectedFieldOptions(SelectedFieldOptionsT&& value) { SetSelectedFieldOptions(std::forward<SelectedFieldOptionsT>(value)); return *this;}
    template<typename SelectedFieldOptionsT = PivotTableFieldOption>
    PivotTableFieldOptions& AddSelectedFieldOptions(SelectedFieldOptionsT&& value) { m_selectedFieldOptionsHasBeenSet = true; m_selectedFieldOptions.emplace_back(std::forward<SelectedFieldOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data path options for the pivot table field options.</p>
     */
    inline const Aws::Vector<PivotTableDataPathOption>& GetDataPathOptions() const { return m_dataPathOptions; }
    inline bool DataPathOptionsHasBeenSet() const { return m_dataPathOptionsHasBeenSet; }
    template<typename DataPathOptionsT = Aws::Vector<PivotTableDataPathOption>>
    void SetDataPathOptions(DataPathOptionsT&& value) { m_dataPathOptionsHasBeenSet = true; m_dataPathOptions = std::forward<DataPathOptionsT>(value); }
    template<typename DataPathOptionsT = Aws::Vector<PivotTableDataPathOption>>
    PivotTableFieldOptions& WithDataPathOptions(DataPathOptionsT&& value) { SetDataPathOptions(std::forward<DataPathOptionsT>(value)); return *this;}
    template<typename DataPathOptionsT = PivotTableDataPathOption>
    PivotTableFieldOptions& AddDataPathOptions(DataPathOptionsT&& value) { m_dataPathOptionsHasBeenSet = true; m_dataPathOptions.emplace_back(std::forward<DataPathOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The collapse state options for the pivot table field options.</p>
     */
    inline const Aws::Vector<PivotTableFieldCollapseStateOption>& GetCollapseStateOptions() const { return m_collapseStateOptions; }
    inline bool CollapseStateOptionsHasBeenSet() const { return m_collapseStateOptionsHasBeenSet; }
    template<typename CollapseStateOptionsT = Aws::Vector<PivotTableFieldCollapseStateOption>>
    void SetCollapseStateOptions(CollapseStateOptionsT&& value) { m_collapseStateOptionsHasBeenSet = true; m_collapseStateOptions = std::forward<CollapseStateOptionsT>(value); }
    template<typename CollapseStateOptionsT = Aws::Vector<PivotTableFieldCollapseStateOption>>
    PivotTableFieldOptions& WithCollapseStateOptions(CollapseStateOptionsT&& value) { SetCollapseStateOptions(std::forward<CollapseStateOptionsT>(value)); return *this;}
    template<typename CollapseStateOptionsT = PivotTableFieldCollapseStateOption>
    PivotTableFieldOptions& AddCollapseStateOptions(CollapseStateOptionsT&& value) { m_collapseStateOptionsHasBeenSet = true; m_collapseStateOptions.emplace_back(std::forward<CollapseStateOptionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<PivotTableFieldOption> m_selectedFieldOptions;
    bool m_selectedFieldOptionsHasBeenSet = false;

    Aws::Vector<PivotTableDataPathOption> m_dataPathOptions;
    bool m_dataPathOptionsHasBeenSet = false;

    Aws::Vector<PivotTableFieldCollapseStateOption> m_collapseStateOptions;
    bool m_collapseStateOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
