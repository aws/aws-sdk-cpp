/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/quicksight/model/InnerFilter.h>
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
   * <p>A <code>NestedFilter</code> filters data with a subset of data that is
   * defined by the nested inner filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NestedFilter">AWS
   * API Reference</a></p>
   */
  class NestedFilter
  {
  public:
    AWS_QUICKSIGHT_API NestedFilter() = default;
    AWS_QUICKSIGHT_API NestedFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NestedFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline const Aws::String& GetFilterId() const { return m_filterId; }
    inline bool FilterIdHasBeenSet() const { return m_filterIdHasBeenSet; }
    template<typename FilterIdT = Aws::String>
    void SetFilterId(FilterIdT&& value) { m_filterIdHasBeenSet = true; m_filterId = std::forward<FilterIdT>(value); }
    template<typename FilterIdT = Aws::String>
    NestedFilter& WithFilterId(FilterIdT&& value) { SetFilterId(std::forward<FilterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline const ColumnIdentifier& GetColumn() const { return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    template<typename ColumnT = ColumnIdentifier>
    void SetColumn(ColumnT&& value) { m_columnHasBeenSet = true; m_column = std::forward<ColumnT>(value); }
    template<typename ColumnT = ColumnIdentifier>
    NestedFilter& WithColumn(ColumnT&& value) { SetColumn(std::forward<ColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean condition to include or exclude the subset that is defined by the
     * values of the nested inner filter.</p>
     */
    inline bool GetIncludeInnerSet() const { return m_includeInnerSet; }
    inline bool IncludeInnerSetHasBeenSet() const { return m_includeInnerSetHasBeenSet; }
    inline void SetIncludeInnerSet(bool value) { m_includeInnerSetHasBeenSet = true; m_includeInnerSet = value; }
    inline NestedFilter& WithIncludeInnerSet(bool value) { SetIncludeInnerSet(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>InnerFilter</code> defines the subset of data to be used with the
     * <code>NestedFilter</code>.</p>
     */
    inline const InnerFilter& GetInnerFilter() const { return m_innerFilter; }
    inline bool InnerFilterHasBeenSet() const { return m_innerFilterHasBeenSet; }
    template<typename InnerFilterT = InnerFilter>
    void SetInnerFilter(InnerFilterT&& value) { m_innerFilterHasBeenSet = true; m_innerFilter = std::forward<InnerFilterT>(value); }
    template<typename InnerFilterT = InnerFilter>
    NestedFilter& WithInnerFilter(InnerFilterT&& value) { SetInnerFilter(std::forward<InnerFilterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_filterId;
    bool m_filterIdHasBeenSet = false;

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    bool m_includeInnerSet{false};
    bool m_includeInnerSetHasBeenSet = false;

    InnerFilter m_innerFilter;
    bool m_innerFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
