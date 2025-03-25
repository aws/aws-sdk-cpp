/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>
#include <aws/meteringmarketplace/MarketplaceMeteringRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/meteringmarketplace/model/UsageAllocation.h>
#include <utility>

namespace Aws
{
namespace MarketplaceMetering
{
namespace Model
{

  /**
   */
  class MeterUsageRequest : public MarketplaceMeteringRequest
  {
  public:
    AWS_MARKETPLACEMETERING_API MeterUsageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "MeterUsage"; }

    AWS_MARKETPLACEMETERING_API Aws::String SerializePayload() const override;

    AWS_MARKETPLACEMETERING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Product code is used to uniquely identify a product in Amazon Web Services
     * Marketplace. The product code should be the same as the one used during the
     * publishing of a new product.</p>
     */
    inline const Aws::String& GetProductCode() const { return m_productCode; }
    inline bool ProductCodeHasBeenSet() const { return m_productCodeHasBeenSet; }
    template<typename ProductCodeT = Aws::String>
    void SetProductCode(ProductCodeT&& value) { m_productCodeHasBeenSet = true; m_productCode = std::forward<ProductCodeT>(value); }
    template<typename ProductCodeT = Aws::String>
    MeterUsageRequest& WithProductCode(ProductCodeT&& value) { SetProductCode(std::forward<ProductCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp, in UTC, for which the usage is being reported. Your application
     * can meter usage for up to six hours in the past. Make sure the
     * <code>timestamp</code> value is not before the start of the software usage.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    MeterUsageRequest& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>It will be one of the fcp dimension name provided during the publishing of
     * the product.</p>
     */
    inline const Aws::String& GetUsageDimension() const { return m_usageDimension; }
    inline bool UsageDimensionHasBeenSet() const { return m_usageDimensionHasBeenSet; }
    template<typename UsageDimensionT = Aws::String>
    void SetUsageDimension(UsageDimensionT&& value) { m_usageDimensionHasBeenSet = true; m_usageDimension = std::forward<UsageDimensionT>(value); }
    template<typename UsageDimensionT = Aws::String>
    MeterUsageRequest& WithUsageDimension(UsageDimensionT&& value) { SetUsageDimension(std::forward<UsageDimensionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Consumption value for the hour. Defaults to <code>0</code> if not
     * specified.</p>
     */
    inline int GetUsageQuantity() const { return m_usageQuantity; }
    inline bool UsageQuantityHasBeenSet() const { return m_usageQuantityHasBeenSet; }
    inline void SetUsageQuantity(int value) { m_usageQuantityHasBeenSet = true; m_usageQuantity = value; }
    inline MeterUsageRequest& WithUsageQuantity(int value) { SetUsageQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the permissions required for the action, but does not
     * make the request. If you have the permissions, the request returns
     * <code>DryRunOperation</code>; otherwise, it returns
     * <code>UnauthorizedException</code>. Defaults to <code>false</code> if not
     * specified.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline MeterUsageRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of <code>UsageAllocations</code> to submit.</p> <p>The sum of all
     * <code>UsageAllocation</code> quantities must equal the
     * <code>UsageQuantity</code> of the <code>MeterUsage</code> request, and each
     * <code>UsageAllocation</code> must have a unique set of tags (include no
     * tags).</p>
     */
    inline const Aws::Vector<UsageAllocation>& GetUsageAllocations() const { return m_usageAllocations; }
    inline bool UsageAllocationsHasBeenSet() const { return m_usageAllocationsHasBeenSet; }
    template<typename UsageAllocationsT = Aws::Vector<UsageAllocation>>
    void SetUsageAllocations(UsageAllocationsT&& value) { m_usageAllocationsHasBeenSet = true; m_usageAllocations = std::forward<UsageAllocationsT>(value); }
    template<typename UsageAllocationsT = Aws::Vector<UsageAllocation>>
    MeterUsageRequest& WithUsageAllocations(UsageAllocationsT&& value) { SetUsageAllocations(std::forward<UsageAllocationsT>(value)); return *this;}
    template<typename UsageAllocationsT = UsageAllocation>
    MeterUsageRequest& AddUsageAllocations(UsageAllocationsT&& value) { m_usageAllocationsHasBeenSet = true; m_usageAllocations.emplace_back(std::forward<UsageAllocationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_productCode;
    bool m_productCodeHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    Aws::String m_usageDimension;
    bool m_usageDimensionHasBeenSet = false;

    int m_usageQuantity{0};
    bool m_usageQuantityHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<UsageAllocation> m_usageAllocations;
    bool m_usageAllocationsHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
