/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/SelectedFieldOptions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
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
   * <p>The configuration of selected fields in
   * the<code>CustomActionFilterOperation</code>.</p> <p>This is a union type
   * structure. For this structure to be valid, only one of the attributes can be
   * defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FilterOperationSelectedFieldsConfiguration">AWS
   * API Reference</a></p>
   */
  class FilterOperationSelectedFieldsConfiguration
  {
  public:
    AWS_QUICKSIGHT_API FilterOperationSelectedFieldsConfiguration() = default;
    AWS_QUICKSIGHT_API FilterOperationSelectedFieldsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilterOperationSelectedFieldsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Chooses the fields that are filtered in
     * <code>CustomActionFilterOperation</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSelectedFields() const { return m_selectedFields; }
    inline bool SelectedFieldsHasBeenSet() const { return m_selectedFieldsHasBeenSet; }
    template<typename SelectedFieldsT = Aws::Vector<Aws::String>>
    void SetSelectedFields(SelectedFieldsT&& value) { m_selectedFieldsHasBeenSet = true; m_selectedFields = std::forward<SelectedFieldsT>(value); }
    template<typename SelectedFieldsT = Aws::Vector<Aws::String>>
    FilterOperationSelectedFieldsConfiguration& WithSelectedFields(SelectedFieldsT&& value) { SetSelectedFields(std::forward<SelectedFieldsT>(value)); return *this;}
    template<typename SelectedFieldsT = Aws::String>
    FilterOperationSelectedFieldsConfiguration& AddSelectedFields(SelectedFieldsT&& value) { m_selectedFieldsHasBeenSet = true; m_selectedFields.emplace_back(std::forward<SelectedFieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A structure that contains the options that choose which fields are filtered
     * in the <code>CustomActionFilterOperation</code>.</p> <p>Valid values are defined
     * as follows:</p> <ul> <li> <p> <code>ALL_FIELDS</code>: Applies the filter
     * operation to all fields.</p> </li> </ul>
     */
    inline SelectedFieldOptions GetSelectedFieldOptions() const { return m_selectedFieldOptions; }
    inline bool SelectedFieldOptionsHasBeenSet() const { return m_selectedFieldOptionsHasBeenSet; }
    inline void SetSelectedFieldOptions(SelectedFieldOptions value) { m_selectedFieldOptionsHasBeenSet = true; m_selectedFieldOptions = value; }
    inline FilterOperationSelectedFieldsConfiguration& WithSelectedFieldOptions(SelectedFieldOptions value) { SetSelectedFieldOptions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The selected columns of a dataset.</p>
     */
    inline const Aws::Vector<ColumnIdentifier>& GetSelectedColumns() const { return m_selectedColumns; }
    inline bool SelectedColumnsHasBeenSet() const { return m_selectedColumnsHasBeenSet; }
    template<typename SelectedColumnsT = Aws::Vector<ColumnIdentifier>>
    void SetSelectedColumns(SelectedColumnsT&& value) { m_selectedColumnsHasBeenSet = true; m_selectedColumns = std::forward<SelectedColumnsT>(value); }
    template<typename SelectedColumnsT = Aws::Vector<ColumnIdentifier>>
    FilterOperationSelectedFieldsConfiguration& WithSelectedColumns(SelectedColumnsT&& value) { SetSelectedColumns(std::forward<SelectedColumnsT>(value)); return *this;}
    template<typename SelectedColumnsT = ColumnIdentifier>
    FilterOperationSelectedFieldsConfiguration& AddSelectedColumns(SelectedColumnsT&& value) { m_selectedColumnsHasBeenSet = true; m_selectedColumns.emplace_back(std::forward<SelectedColumnsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_selectedFields;
    bool m_selectedFieldsHasBeenSet = false;

    SelectedFieldOptions m_selectedFieldOptions{SelectedFieldOptions::NOT_SET};
    bool m_selectedFieldOptionsHasBeenSet = false;

    Aws::Vector<ColumnIdentifier> m_selectedColumns;
    bool m_selectedColumnsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
