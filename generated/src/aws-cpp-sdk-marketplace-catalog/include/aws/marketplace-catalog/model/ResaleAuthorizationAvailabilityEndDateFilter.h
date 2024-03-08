/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/ResaleAuthorizationAvailabilityEndDateFilterDateRange.h>
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
   * <p>Allows filtering on <code>AvailabilityEndDate</code> of a
   * ResaleAuthorization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ResaleAuthorizationAvailabilityEndDateFilter">AWS
   * API Reference</a></p>
   */
  class ResaleAuthorizationAvailabilityEndDateFilter
  {
  public:
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationAvailabilityEndDateFilter();
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationAvailabilityEndDateFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationAvailabilityEndDateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Allows filtering on <code>AvailabilityEndDate</code> of a ResaleAuthorization
     * with date range as input</p>
     */
    inline const ResaleAuthorizationAvailabilityEndDateFilterDateRange& GetDateRange() const{ return m_dateRange; }

    /**
     * <p>Allows filtering on <code>AvailabilityEndDate</code> of a ResaleAuthorization
     * with date range as input</p>
     */
    inline bool DateRangeHasBeenSet() const { return m_dateRangeHasBeenSet; }

    /**
     * <p>Allows filtering on <code>AvailabilityEndDate</code> of a ResaleAuthorization
     * with date range as input</p>
     */
    inline void SetDateRange(const ResaleAuthorizationAvailabilityEndDateFilterDateRange& value) { m_dateRangeHasBeenSet = true; m_dateRange = value; }

    /**
     * <p>Allows filtering on <code>AvailabilityEndDate</code> of a ResaleAuthorization
     * with date range as input</p>
     */
    inline void SetDateRange(ResaleAuthorizationAvailabilityEndDateFilterDateRange&& value) { m_dateRangeHasBeenSet = true; m_dateRange = std::move(value); }

    /**
     * <p>Allows filtering on <code>AvailabilityEndDate</code> of a ResaleAuthorization
     * with date range as input</p>
     */
    inline ResaleAuthorizationAvailabilityEndDateFilter& WithDateRange(const ResaleAuthorizationAvailabilityEndDateFilterDateRange& value) { SetDateRange(value); return *this;}

    /**
     * <p>Allows filtering on <code>AvailabilityEndDate</code> of a ResaleAuthorization
     * with date range as input</p>
     */
    inline ResaleAuthorizationAvailabilityEndDateFilter& WithDateRange(ResaleAuthorizationAvailabilityEndDateFilterDateRange&& value) { SetDateRange(std::move(value)); return *this;}


    /**
     * <p>Allows filtering on <code>AvailabilityEndDate</code> of a ResaleAuthorization
     * with date value as input.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValueList() const{ return m_valueList; }

    /**
     * <p>Allows filtering on <code>AvailabilityEndDate</code> of a ResaleAuthorization
     * with date value as input.</p>
     */
    inline bool ValueListHasBeenSet() const { return m_valueListHasBeenSet; }

    /**
     * <p>Allows filtering on <code>AvailabilityEndDate</code> of a ResaleAuthorization
     * with date value as input.</p>
     */
    inline void SetValueList(const Aws::Vector<Aws::String>& value) { m_valueListHasBeenSet = true; m_valueList = value; }

    /**
     * <p>Allows filtering on <code>AvailabilityEndDate</code> of a ResaleAuthorization
     * with date value as input.</p>
     */
    inline void SetValueList(Aws::Vector<Aws::String>&& value) { m_valueListHasBeenSet = true; m_valueList = std::move(value); }

    /**
     * <p>Allows filtering on <code>AvailabilityEndDate</code> of a ResaleAuthorization
     * with date value as input.</p>
     */
    inline ResaleAuthorizationAvailabilityEndDateFilter& WithValueList(const Aws::Vector<Aws::String>& value) { SetValueList(value); return *this;}

    /**
     * <p>Allows filtering on <code>AvailabilityEndDate</code> of a ResaleAuthorization
     * with date value as input.</p>
     */
    inline ResaleAuthorizationAvailabilityEndDateFilter& WithValueList(Aws::Vector<Aws::String>&& value) { SetValueList(std::move(value)); return *this;}

    /**
     * <p>Allows filtering on <code>AvailabilityEndDate</code> of a ResaleAuthorization
     * with date value as input.</p>
     */
    inline ResaleAuthorizationAvailabilityEndDateFilter& AddValueList(const Aws::String& value) { m_valueListHasBeenSet = true; m_valueList.push_back(value); return *this; }

    /**
     * <p>Allows filtering on <code>AvailabilityEndDate</code> of a ResaleAuthorization
     * with date value as input.</p>
     */
    inline ResaleAuthorizationAvailabilityEndDateFilter& AddValueList(Aws::String&& value) { m_valueListHasBeenSet = true; m_valueList.push_back(std::move(value)); return *this; }

    /**
     * <p>Allows filtering on <code>AvailabilityEndDate</code> of a ResaleAuthorization
     * with date value as input.</p>
     */
    inline ResaleAuthorizationAvailabilityEndDateFilter& AddValueList(const char* value) { m_valueListHasBeenSet = true; m_valueList.push_back(value); return *this; }

  private:

    ResaleAuthorizationAvailabilityEndDateFilterDateRange m_dateRange;
    bool m_dateRangeHasBeenSet = false;

    Aws::Vector<Aws::String> m_valueList;
    bool m_valueListHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
