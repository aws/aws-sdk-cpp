/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/ResaleAuthorizationCreatedDateFilterDateRange.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MarketplaceCatalog
{
namespace Model
{

  /**
   * <p>Allows filtering on <code>CreatedDate</code> of a
   * ResaleAuthorization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ResaleAuthorizationCreatedDateFilter">AWS
   * API Reference</a></p>
   */
  class ResaleAuthorizationCreatedDateFilter
  {
  public:
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationCreatedDateFilter() = default;
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationCreatedDateFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationCreatedDateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Allows filtering on <code>CreatedDate</code> of a ResaleAuthorization with
     * date range as input.</p>
     */
    inline const ResaleAuthorizationCreatedDateFilterDateRange& GetDateRange() const { return m_dateRange; }
    inline bool DateRangeHasBeenSet() const { return m_dateRangeHasBeenSet; }
    template<typename DateRangeT = ResaleAuthorizationCreatedDateFilterDateRange>
    void SetDateRange(DateRangeT&& value) { m_dateRangeHasBeenSet = true; m_dateRange = std::forward<DateRangeT>(value); }
    template<typename DateRangeT = ResaleAuthorizationCreatedDateFilterDateRange>
    ResaleAuthorizationCreatedDateFilter& WithDateRange(DateRangeT&& value) { SetDateRange(std::forward<DateRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on <code>CreatedDate</code> of a ResaleAuthorization with
     * date value as input.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValueList() const { return m_valueList; }
    inline bool ValueListHasBeenSet() const { return m_valueListHasBeenSet; }
    template<typename ValueListT = Aws::Vector<Aws::String>>
    void SetValueList(ValueListT&& value) { m_valueListHasBeenSet = true; m_valueList = std::forward<ValueListT>(value); }
    template<typename ValueListT = Aws::Vector<Aws::String>>
    ResaleAuthorizationCreatedDateFilter& WithValueList(ValueListT&& value) { SetValueList(std::forward<ValueListT>(value)); return *this;}
    template<typename ValueListT = Aws::String>
    ResaleAuthorizationCreatedDateFilter& AddValueList(ValueListT&& value) { m_valueListHasBeenSet = true; m_valueList.emplace_back(std::forward<ValueListT>(value)); return *this; }
    ///@}
  private:

    ResaleAuthorizationCreatedDateFilterDateRange m_dateRange;
    bool m_dateRangeHasBeenSet = false;

    Aws::Vector<Aws::String> m_valueList;
    bool m_valueListHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
