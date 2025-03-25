/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>
#include <aws/meteringmarketplace/MarketplaceMeteringRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/meteringmarketplace/model/UsageRecord.h>
#include <utility>

namespace Aws
{
namespace MarketplaceMetering
{
namespace Model
{

  /**
   * <p>A <code>BatchMeterUsageRequest</code> contains <code>UsageRecords</code>,
   * which indicate quantities of usage within your application.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/BatchMeterUsageRequest">AWS
   * API Reference</a></p>
   */
  class BatchMeterUsageRequest : public MarketplaceMeteringRequest
  {
  public:
    AWS_MARKETPLACEMETERING_API BatchMeterUsageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchMeterUsage"; }

    AWS_MARKETPLACEMETERING_API Aws::String SerializePayload() const override;

    AWS_MARKETPLACEMETERING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The set of <code>UsageRecords</code> to submit. <code>BatchMeterUsage</code>
     * accepts up to 25 <code>UsageRecords</code> at a time.</p>
     */
    inline const Aws::Vector<UsageRecord>& GetUsageRecords() const { return m_usageRecords; }
    inline bool UsageRecordsHasBeenSet() const { return m_usageRecordsHasBeenSet; }
    template<typename UsageRecordsT = Aws::Vector<UsageRecord>>
    void SetUsageRecords(UsageRecordsT&& value) { m_usageRecordsHasBeenSet = true; m_usageRecords = std::forward<UsageRecordsT>(value); }
    template<typename UsageRecordsT = Aws::Vector<UsageRecord>>
    BatchMeterUsageRequest& WithUsageRecords(UsageRecordsT&& value) { SetUsageRecords(std::forward<UsageRecordsT>(value)); return *this;}
    template<typename UsageRecordsT = UsageRecord>
    BatchMeterUsageRequest& AddUsageRecords(UsageRecordsT&& value) { m_usageRecordsHasBeenSet = true; m_usageRecords.emplace_back(std::forward<UsageRecordsT>(value)); return *this; }
    ///@}

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
    BatchMeterUsageRequest& WithProductCode(ProductCodeT&& value) { SetProductCode(std::forward<ProductCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UsageRecord> m_usageRecords;
    bool m_usageRecordsHasBeenSet = false;

    Aws::String m_productCode;
    bool m_productCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
