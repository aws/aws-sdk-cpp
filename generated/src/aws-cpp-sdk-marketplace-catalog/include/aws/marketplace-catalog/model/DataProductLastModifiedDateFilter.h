/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/DataProductLastModifiedDateFilterDateRange.h>
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
   * <p>Object that allows filtering based on the last modified date of data
   * products.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/DataProductLastModifiedDateFilter">AWS
   * API Reference</a></p>
   */
  class DataProductLastModifiedDateFilter
  {
  public:
    AWS_MARKETPLACECATALOG_API DataProductLastModifiedDateFilter();
    AWS_MARKETPLACECATALOG_API DataProductLastModifiedDateFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API DataProductLastModifiedDateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Dates between which the data product was last modified.</p>
     */
    inline const DataProductLastModifiedDateFilterDateRange& GetDateRange() const{ return m_dateRange; }

    /**
     * <p>Dates between which the data product was last modified.</p>
     */
    inline bool DateRangeHasBeenSet() const { return m_dateRangeHasBeenSet; }

    /**
     * <p>Dates between which the data product was last modified.</p>
     */
    inline void SetDateRange(const DataProductLastModifiedDateFilterDateRange& value) { m_dateRangeHasBeenSet = true; m_dateRange = value; }

    /**
     * <p>Dates between which the data product was last modified.</p>
     */
    inline void SetDateRange(DataProductLastModifiedDateFilterDateRange&& value) { m_dateRangeHasBeenSet = true; m_dateRange = std::move(value); }

    /**
     * <p>Dates between which the data product was last modified.</p>
     */
    inline DataProductLastModifiedDateFilter& WithDateRange(const DataProductLastModifiedDateFilterDateRange& value) { SetDateRange(value); return *this;}

    /**
     * <p>Dates between which the data product was last modified.</p>
     */
    inline DataProductLastModifiedDateFilter& WithDateRange(DataProductLastModifiedDateFilterDateRange&& value) { SetDateRange(std::move(value)); return *this;}

  private:

    DataProductLastModifiedDateFilterDateRange m_dateRange;
    bool m_dateRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
