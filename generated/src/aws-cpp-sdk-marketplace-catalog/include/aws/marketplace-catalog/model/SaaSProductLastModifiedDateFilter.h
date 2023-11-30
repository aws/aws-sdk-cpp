/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/SaaSProductLastModifiedDateFilterDateRange.h>
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
   * <p>Object that allows filtering based on the last modified date of SaaS
   * products</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/SaaSProductLastModifiedDateFilter">AWS
   * API Reference</a></p>
   */
  class SaaSProductLastModifiedDateFilter
  {
  public:
    AWS_MARKETPLACECATALOG_API SaaSProductLastModifiedDateFilter();
    AWS_MARKETPLACECATALOG_API SaaSProductLastModifiedDateFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API SaaSProductLastModifiedDateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Dates between which the SaaS product was last modified.</p>
     */
    inline const SaaSProductLastModifiedDateFilterDateRange& GetDateRange() const{ return m_dateRange; }

    /**
     * <p>Dates between which the SaaS product was last modified.</p>
     */
    inline bool DateRangeHasBeenSet() const { return m_dateRangeHasBeenSet; }

    /**
     * <p>Dates between which the SaaS product was last modified.</p>
     */
    inline void SetDateRange(const SaaSProductLastModifiedDateFilterDateRange& value) { m_dateRangeHasBeenSet = true; m_dateRange = value; }

    /**
     * <p>Dates between which the SaaS product was last modified.</p>
     */
    inline void SetDateRange(SaaSProductLastModifiedDateFilterDateRange&& value) { m_dateRangeHasBeenSet = true; m_dateRange = std::move(value); }

    /**
     * <p>Dates between which the SaaS product was last modified.</p>
     */
    inline SaaSProductLastModifiedDateFilter& WithDateRange(const SaaSProductLastModifiedDateFilterDateRange& value) { SetDateRange(value); return *this;}

    /**
     * <p>Dates between which the SaaS product was last modified.</p>
     */
    inline SaaSProductLastModifiedDateFilter& WithDateRange(SaaSProductLastModifiedDateFilterDateRange&& value) { SetDateRange(std::move(value)); return *this;}

  private:

    SaaSProductLastModifiedDateFilterDateRange m_dateRange;
    bool m_dateRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
