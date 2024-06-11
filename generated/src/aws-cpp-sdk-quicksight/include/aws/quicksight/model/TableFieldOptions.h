﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/TablePinnedFieldOptions.h>
#include <aws/quicksight/model/TableFieldOption.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_QUICKSIGHT_API TableFieldOptions();
    AWS_QUICKSIGHT_API TableFieldOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableFieldOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field options to be configured to a table.</p>
     */
    inline const Aws::Vector<TableFieldOption>& GetSelectedFieldOptions() const{ return m_selectedFieldOptions; }
    inline bool SelectedFieldOptionsHasBeenSet() const { return m_selectedFieldOptionsHasBeenSet; }
    inline void SetSelectedFieldOptions(const Aws::Vector<TableFieldOption>& value) { m_selectedFieldOptionsHasBeenSet = true; m_selectedFieldOptions = value; }
    inline void SetSelectedFieldOptions(Aws::Vector<TableFieldOption>&& value) { m_selectedFieldOptionsHasBeenSet = true; m_selectedFieldOptions = std::move(value); }
    inline TableFieldOptions& WithSelectedFieldOptions(const Aws::Vector<TableFieldOption>& value) { SetSelectedFieldOptions(value); return *this;}
    inline TableFieldOptions& WithSelectedFieldOptions(Aws::Vector<TableFieldOption>&& value) { SetSelectedFieldOptions(std::move(value)); return *this;}
    inline TableFieldOptions& AddSelectedFieldOptions(const TableFieldOption& value) { m_selectedFieldOptionsHasBeenSet = true; m_selectedFieldOptions.push_back(value); return *this; }
    inline TableFieldOptions& AddSelectedFieldOptions(TableFieldOption&& value) { m_selectedFieldOptionsHasBeenSet = true; m_selectedFieldOptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The order of the field IDs that are configured as field options for a table
     * visual.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrder() const{ return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(const Aws::Vector<Aws::String>& value) { m_orderHasBeenSet = true; m_order = value; }
    inline void SetOrder(Aws::Vector<Aws::String>&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }
    inline TableFieldOptions& WithOrder(const Aws::Vector<Aws::String>& value) { SetOrder(value); return *this;}
    inline TableFieldOptions& WithOrder(Aws::Vector<Aws::String>&& value) { SetOrder(std::move(value)); return *this;}
    inline TableFieldOptions& AddOrder(const Aws::String& value) { m_orderHasBeenSet = true; m_order.push_back(value); return *this; }
    inline TableFieldOptions& AddOrder(Aws::String&& value) { m_orderHasBeenSet = true; m_order.push_back(std::move(value)); return *this; }
    inline TableFieldOptions& AddOrder(const char* value) { m_orderHasBeenSet = true; m_order.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The settings for the pinned columns of a table visual.</p>
     */
    inline const TablePinnedFieldOptions& GetPinnedFieldOptions() const{ return m_pinnedFieldOptions; }
    inline bool PinnedFieldOptionsHasBeenSet() const { return m_pinnedFieldOptionsHasBeenSet; }
    inline void SetPinnedFieldOptions(const TablePinnedFieldOptions& value) { m_pinnedFieldOptionsHasBeenSet = true; m_pinnedFieldOptions = value; }
    inline void SetPinnedFieldOptions(TablePinnedFieldOptions&& value) { m_pinnedFieldOptionsHasBeenSet = true; m_pinnedFieldOptions = std::move(value); }
    inline TableFieldOptions& WithPinnedFieldOptions(const TablePinnedFieldOptions& value) { SetPinnedFieldOptions(value); return *this;}
    inline TableFieldOptions& WithPinnedFieldOptions(TablePinnedFieldOptions&& value) { SetPinnedFieldOptions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TableFieldOption> m_selectedFieldOptions;
    bool m_selectedFieldOptionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_order;
    bool m_orderHasBeenSet = false;

    TablePinnedFieldOptions m_pinnedFieldOptions;
    bool m_pinnedFieldOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
