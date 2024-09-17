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
    AWS_QUICKSIGHT_API NestedFilter();
    AWS_QUICKSIGHT_API NestedFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NestedFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline const Aws::String& GetFilterId() const{ return m_filterId; }
    inline bool FilterIdHasBeenSet() const { return m_filterIdHasBeenSet; }
    inline void SetFilterId(const Aws::String& value) { m_filterIdHasBeenSet = true; m_filterId = value; }
    inline void SetFilterId(Aws::String&& value) { m_filterIdHasBeenSet = true; m_filterId = std::move(value); }
    inline void SetFilterId(const char* value) { m_filterIdHasBeenSet = true; m_filterId.assign(value); }
    inline NestedFilter& WithFilterId(const Aws::String& value) { SetFilterId(value); return *this;}
    inline NestedFilter& WithFilterId(Aws::String&& value) { SetFilterId(std::move(value)); return *this;}
    inline NestedFilter& WithFilterId(const char* value) { SetFilterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline const ColumnIdentifier& GetColumn() const{ return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    inline void SetColumn(const ColumnIdentifier& value) { m_columnHasBeenSet = true; m_column = value; }
    inline void SetColumn(ColumnIdentifier&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }
    inline NestedFilter& WithColumn(const ColumnIdentifier& value) { SetColumn(value); return *this;}
    inline NestedFilter& WithColumn(ColumnIdentifier&& value) { SetColumn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean condition to include or exclude the subset that is defined by the
     * values of the nested inner filter.</p>
     */
    inline bool GetIncludeInnerSet() const{ return m_includeInnerSet; }
    inline bool IncludeInnerSetHasBeenSet() const { return m_includeInnerSetHasBeenSet; }
    inline void SetIncludeInnerSet(bool value) { m_includeInnerSetHasBeenSet = true; m_includeInnerSet = value; }
    inline NestedFilter& WithIncludeInnerSet(bool value) { SetIncludeInnerSet(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>InnerFilter</code> defines the subset of data to be used with the
     * <code>NestedFilter</code>.</p>
     */
    inline const InnerFilter& GetInnerFilter() const{ return m_innerFilter; }
    inline bool InnerFilterHasBeenSet() const { return m_innerFilterHasBeenSet; }
    inline void SetInnerFilter(const InnerFilter& value) { m_innerFilterHasBeenSet = true; m_innerFilter = value; }
    inline void SetInnerFilter(InnerFilter&& value) { m_innerFilterHasBeenSet = true; m_innerFilter = std::move(value); }
    inline NestedFilter& WithInnerFilter(const InnerFilter& value) { SetInnerFilter(value); return *this;}
    inline NestedFilter& WithInnerFilter(InnerFilter&& value) { SetInnerFilter(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_filterId;
    bool m_filterIdHasBeenSet = false;

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    bool m_includeInnerSet;
    bool m_includeInnerSetHasBeenSet = false;

    InnerFilter m_innerFilter;
    bool m_innerFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
