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
    AWS_MARKETPLACECATALOG_API AmiProductLastModifiedDateFilter() = default;
    AWS_MARKETPLACECATALOG_API AmiProductLastModifiedDateFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API AmiProductLastModifiedDateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Dates between which the AMI product was last modified.</p>
     */
    inline const AmiProductLastModifiedDateFilterDateRange& GetDateRange() const { return m_dateRange; }
    inline bool DateRangeHasBeenSet() const { return m_dateRangeHasBeenSet; }
    template<typename DateRangeT = AmiProductLastModifiedDateFilterDateRange>
    void SetDateRange(DateRangeT&& value) { m_dateRangeHasBeenSet = true; m_dateRange = std::forward<DateRangeT>(value); }
    template<typename DateRangeT = AmiProductLastModifiedDateFilterDateRange>
    AmiProductLastModifiedDateFilter& WithDateRange(DateRangeT&& value) { SetDateRange(std::forward<DateRangeT>(value)); return *this;}
    ///@}
  private:

    AmiProductLastModifiedDateFilterDateRange m_dateRange;
    bool m_dateRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
