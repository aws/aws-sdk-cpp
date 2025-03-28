/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/TablePinnedFieldOptions.h>
#include <aws/quicksight/model/TableFieldOption.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TransposedTableOption.h>
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
   * <p>The field options of a table visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableFieldOptions">AWS
   * API Reference</a></p>
   */
  class TableFieldOptions
  {
  public:
    AWS_QUICKSIGHT_API TableFieldOptions() = default;
    AWS_QUICKSIGHT_API TableFieldOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableFieldOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field options to be configured to a table.</p>
     */
    inline const Aws::Vector<TableFieldOption>& GetSelectedFieldOptions() const { return m_selectedFieldOptions; }
    inline bool SelectedFieldOptionsHasBeenSet() const { return m_selectedFieldOptionsHasBeenSet; }
    template<typename SelectedFieldOptionsT = Aws::Vector<TableFieldOption>>
    void SetSelectedFieldOptions(SelectedFieldOptionsT&& value) { m_selectedFieldOptionsHasBeenSet = true; m_selectedFieldOptions = std::forward<SelectedFieldOptionsT>(value); }
    template<typename SelectedFieldOptionsT = Aws::Vector<TableFieldOption>>
    TableFieldOptions& WithSelectedFieldOptions(SelectedFieldOptionsT&& value) { SetSelectedFieldOptions(std::forward<SelectedFieldOptionsT>(value)); return *this;}
    template<typename SelectedFieldOptionsT = TableFieldOption>
    TableFieldOptions& AddSelectedFieldOptions(SelectedFieldOptionsT&& value) { m_selectedFieldOptionsHasBeenSet = true; m_selectedFieldOptions.emplace_back(std::forward<SelectedFieldOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The order of the field IDs that are configured as field options for a table
     * visual.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrder() const { return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    template<typename OrderT = Aws::Vector<Aws::String>>
    void SetOrder(OrderT&& value) { m_orderHasBeenSet = true; m_order = std::forward<OrderT>(value); }
    template<typename OrderT = Aws::Vector<Aws::String>>
    TableFieldOptions& WithOrder(OrderT&& value) { SetOrder(std::forward<OrderT>(value)); return *this;}
    template<typename OrderT = Aws::String>
    TableFieldOptions& AddOrder(OrderT&& value) { m_orderHasBeenSet = true; m_order.emplace_back(std::forward<OrderT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The settings for the pinned columns of a table visual.</p>
     */
    inline const TablePinnedFieldOptions& GetPinnedFieldOptions() const { return m_pinnedFieldOptions; }
    inline bool PinnedFieldOptionsHasBeenSet() const { return m_pinnedFieldOptionsHasBeenSet; }
    template<typename PinnedFieldOptionsT = TablePinnedFieldOptions>
    void SetPinnedFieldOptions(PinnedFieldOptionsT&& value) { m_pinnedFieldOptionsHasBeenSet = true; m_pinnedFieldOptions = std::forward<PinnedFieldOptionsT>(value); }
    template<typename PinnedFieldOptionsT = TablePinnedFieldOptions>
    TableFieldOptions& WithPinnedFieldOptions(PinnedFieldOptionsT&& value) { SetPinnedFieldOptions(std::forward<PinnedFieldOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>TableOptions</code> of a transposed table.</p>
     */
    inline const Aws::Vector<TransposedTableOption>& GetTransposedTableOptions() const { return m_transposedTableOptions; }
    inline bool TransposedTableOptionsHasBeenSet() const { return m_transposedTableOptionsHasBeenSet; }
    template<typename TransposedTableOptionsT = Aws::Vector<TransposedTableOption>>
    void SetTransposedTableOptions(TransposedTableOptionsT&& value) { m_transposedTableOptionsHasBeenSet = true; m_transposedTableOptions = std::forward<TransposedTableOptionsT>(value); }
    template<typename TransposedTableOptionsT = Aws::Vector<TransposedTableOption>>
    TableFieldOptions& WithTransposedTableOptions(TransposedTableOptionsT&& value) { SetTransposedTableOptions(std::forward<TransposedTableOptionsT>(value)); return *this;}
    template<typename TransposedTableOptionsT = TransposedTableOption>
    TableFieldOptions& AddTransposedTableOptions(TransposedTableOptionsT&& value) { m_transposedTableOptionsHasBeenSet = true; m_transposedTableOptions.emplace_back(std::forward<TransposedTableOptionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<TableFieldOption> m_selectedFieldOptions;
    bool m_selectedFieldOptionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_order;
    bool m_orderHasBeenSet = false;

    TablePinnedFieldOptions m_pinnedFieldOptions;
    bool m_pinnedFieldOptionsHasBeenSet = false;

    Aws::Vector<TransposedTableOption> m_transposedTableOptions;
    bool m_transposedTableOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
