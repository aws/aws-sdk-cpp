/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/AmiProductLastModifiedDateFilterDateRange.h>
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
   * <p>Object that allows filtering based on the last modified date of AMI
   * products.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/AmiProductLastModifiedDateFilter">AWS
   * API Reference</a></p>
   */
  class AmiProductLastModifiedDateFilter
  {
  public:
    AWS_MARKETPLACECATALOG_API AmiProductLastModifiedDateFilter();
    AWS_MARKETPLACECATALOG_API AmiProductLastModifiedDateFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API AmiProductLastModifiedDateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Dates between which the AMI product was last modified.</p>
     */
    inline const AmiProductLastModifiedDateFilterDateRange& GetDateRange() const{ return m_dateRange; }

    /**
     * <p>Dates between which the AMI product was last modified.</p>
     */
    inline bool DateRangeHasBeenSet() const { return m_dateRangeHasBeenSet; }

    /**
     * <p>Dates between which the AMI product was last modified.</p>
     */
    inline void SetDateRange(const AmiProductLastModifiedDateFilterDateRange& value) { m_dateRangeHasBeenSet = true; m_dateRange = value; }

    /**
     * <p>Dates between which the AMI product was last modified.</p>
     */
    inline void SetDateRange(AmiProductLastModifiedDateFilterDateRange&& value) { m_dateRangeHasBeenSet = true; m_dateRange = std::move(value); }

    /**
     * <p>Dates between which the AMI product was last modified.</p>
     */
    inline AmiProductLastModifiedDateFilter& WithDateRange(const AmiProductLastModifiedDateFilterDateRange& value) { SetDateRange(value); return *this;}

    /**
     * <p>Dates between which the AMI product was last modified.</p>
     */
    inline AmiProductLastModifiedDateFilter& WithDateRange(AmiProductLastModifiedDateFilterDateRange&& value) { SetDateRange(std::move(value)); return *this;}

  private:

    AmiProductLastModifiedDateFilterDateRange m_dateRange;
    bool m_dateRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
