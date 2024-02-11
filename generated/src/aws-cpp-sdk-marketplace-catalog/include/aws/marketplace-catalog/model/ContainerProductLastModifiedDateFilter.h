/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/ContainerProductLastModifiedDateFilterDateRange.h>
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
   * <p>Object that allows filtering based on the last modified date of container
   * products.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ContainerProductLastModifiedDateFilter">AWS
   * API Reference</a></p>
   */
  class ContainerProductLastModifiedDateFilter
  {
  public:
    AWS_MARKETPLACECATALOG_API ContainerProductLastModifiedDateFilter();
    AWS_MARKETPLACECATALOG_API ContainerProductLastModifiedDateFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API ContainerProductLastModifiedDateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Dates between which the container product was last modified.</p>
     */
    inline const ContainerProductLastModifiedDateFilterDateRange& GetDateRange() const{ return m_dateRange; }

    /**
     * <p>Dates between which the container product was last modified.</p>
     */
    inline bool DateRangeHasBeenSet() const { return m_dateRangeHasBeenSet; }

    /**
     * <p>Dates between which the container product was last modified.</p>
     */
    inline void SetDateRange(const ContainerProductLastModifiedDateFilterDateRange& value) { m_dateRangeHasBeenSet = true; m_dateRange = value; }

    /**
     * <p>Dates between which the container product was last modified.</p>
     */
    inline void SetDateRange(ContainerProductLastModifiedDateFilterDateRange&& value) { m_dateRangeHasBeenSet = true; m_dateRange = std::move(value); }

    /**
     * <p>Dates between which the container product was last modified.</p>
     */
    inline ContainerProductLastModifiedDateFilter& WithDateRange(const ContainerProductLastModifiedDateFilterDateRange& value) { SetDateRange(value); return *this;}

    /**
     * <p>Dates between which the container product was last modified.</p>
     */
    inline ContainerProductLastModifiedDateFilter& WithDateRange(ContainerProductLastModifiedDateFilterDateRange&& value) { SetDateRange(std::move(value)); return *this;}

  private:

    ContainerProductLastModifiedDateFilterDateRange m_dateRange;
    bool m_dateRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
