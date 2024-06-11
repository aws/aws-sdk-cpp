﻿/**
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
    AWS_QUICKSIGHT_API FilterOperationSelectedFieldsConfiguration();
    AWS_QUICKSIGHT_API FilterOperationSelectedFieldsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilterOperationSelectedFieldsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Chooses the fields that are filtered in
     * <code>CustomActionFilterOperation</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSelectedFields() const{ return m_selectedFields; }
    inline bool SelectedFieldsHasBeenSet() const { return m_selectedFieldsHasBeenSet; }
    inline void SetSelectedFields(const Aws::Vector<Aws::String>& value) { m_selectedFieldsHasBeenSet = true; m_selectedFields = value; }
    inline void SetSelectedFields(Aws::Vector<Aws::String>&& value) { m_selectedFieldsHasBeenSet = true; m_selectedFields = std::move(value); }
    inline FilterOperationSelectedFieldsConfiguration& WithSelectedFields(const Aws::Vector<Aws::String>& value) { SetSelectedFields(value); return *this;}
    inline FilterOperationSelectedFieldsConfiguration& WithSelectedFields(Aws::Vector<Aws::String>&& value) { SetSelectedFields(std::move(value)); return *this;}
    inline FilterOperationSelectedFieldsConfiguration& AddSelectedFields(const Aws::String& value) { m_selectedFieldsHasBeenSet = true; m_selectedFields.push_back(value); return *this; }
    inline FilterOperationSelectedFieldsConfiguration& AddSelectedFields(Aws::String&& value) { m_selectedFieldsHasBeenSet = true; m_selectedFields.push_back(std::move(value)); return *this; }
    inline FilterOperationSelectedFieldsConfiguration& AddSelectedFields(const char* value) { m_selectedFieldsHasBeenSet = true; m_selectedFields.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A structure that contains the options that choose which fields are filtered
     * in the <code>CustomActionFilterOperation</code>.</p> <p>Valid values are defined
     * as follows:</p> <ul> <li> <p> <code>ALL_FIELDS</code>: Applies the filter
     * operation to all fields.</p> </li> </ul>
     */
    inline const SelectedFieldOptions& GetSelectedFieldOptions() const{ return m_selectedFieldOptions; }
    inline bool SelectedFieldOptionsHasBeenSet() const { return m_selectedFieldOptionsHasBeenSet; }
    inline void SetSelectedFieldOptions(const SelectedFieldOptions& value) { m_selectedFieldOptionsHasBeenSet = true; m_selectedFieldOptions = value; }
    inline void SetSelectedFieldOptions(SelectedFieldOptions&& value) { m_selectedFieldOptionsHasBeenSet = true; m_selectedFieldOptions = std::move(value); }
    inline FilterOperationSelectedFieldsConfiguration& WithSelectedFieldOptions(const SelectedFieldOptions& value) { SetSelectedFieldOptions(value); return *this;}
    inline FilterOperationSelectedFieldsConfiguration& WithSelectedFieldOptions(SelectedFieldOptions&& value) { SetSelectedFieldOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The selected columns of a dataset.</p>
     */
    inline const Aws::Vector<ColumnIdentifier>& GetSelectedColumns() const{ return m_selectedColumns; }
    inline bool SelectedColumnsHasBeenSet() const { return m_selectedColumnsHasBeenSet; }
    inline void SetSelectedColumns(const Aws::Vector<ColumnIdentifier>& value) { m_selectedColumnsHasBeenSet = true; m_selectedColumns = value; }
    inline void SetSelectedColumns(Aws::Vector<ColumnIdentifier>&& value) { m_selectedColumnsHasBeenSet = true; m_selectedColumns = std::move(value); }
    inline FilterOperationSelectedFieldsConfiguration& WithSelectedColumns(const Aws::Vector<ColumnIdentifier>& value) { SetSelectedColumns(value); return *this;}
    inline FilterOperationSelectedFieldsConfiguration& WithSelectedColumns(Aws::Vector<ColumnIdentifier>&& value) { SetSelectedColumns(std::move(value)); return *this;}
    inline FilterOperationSelectedFieldsConfiguration& AddSelectedColumns(const ColumnIdentifier& value) { m_selectedColumnsHasBeenSet = true; m_selectedColumns.push_back(value); return *this; }
    inline FilterOperationSelectedFieldsConfiguration& AddSelectedColumns(ColumnIdentifier&& value) { m_selectedColumnsHasBeenSet = true; m_selectedColumns.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_selectedFields;
    bool m_selectedFieldsHasBeenSet = false;

    SelectedFieldOptions m_selectedFieldOptions;
    bool m_selectedFieldOptionsHasBeenSet = false;

    Aws::Vector<ColumnIdentifier> m_selectedColumns;
    bool m_selectedColumnsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
