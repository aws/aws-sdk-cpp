/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/meteringmarketplace/model/UsageAllocation.h>
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
namespace MarketplaceMetering
{
namespace Model
{

  /**
   * <p>A <code>UsageRecord</code> indicates a quantity of usage for a given product,
   * customer, dimension and time.</p> <p>Multiple requests with the same
   * <code>UsageRecords</code> as input will be de-duplicated to prevent double
   * charges.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/UsageRecord">AWS
   * API Reference</a></p>
   */
  class UsageRecord
  {
  public:
    AWS_MARKETPLACEMETERING_API UsageRecord() = default;
    AWS_MARKETPLACEMETERING_API UsageRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACEMETERING_API UsageRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACEMETERING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Timestamp, in UTC, for which the usage is being reported.</p> <p>Your
     * application can meter usage for up to one hour in the past. Make sure the
     * <code>timestamp</code> value is not before the start of the software usage.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    UsageRecord& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>CustomerIdentifier</code> is obtained through the
     * <code>ResolveCustomer</code> operation and represents an individual buyer in
     * your application.</p>
     */
    inline const Aws::String& GetCustomerIdentifier() const { return m_customerIdentifier; }
    inline bool CustomerIdentifierHasBeenSet() const { return m_customerIdentifierHasBeenSet; }
    template<typename CustomerIdentifierT = Aws::String>
    void SetCustomerIdentifier(CustomerIdentifierT&& value) { m_customerIdentifierHasBeenSet = true; m_customerIdentifier = std::forward<CustomerIdentifierT>(value); }
    template<typename CustomerIdentifierT = Aws::String>
    UsageRecord& WithCustomerIdentifier(CustomerIdentifierT&& value) { SetCustomerIdentifier(std::forward<CustomerIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>During the process of registering a product on Amazon Web Services
     * Marketplace, dimensions are specified. These represent different units of value
     * in your application.</p>
     */
    inline const Aws::String& GetDimension() const { return m_dimension; }
    inline bool DimensionHasBeenSet() const { return m_dimensionHasBeenSet; }
    template<typename DimensionT = Aws::String>
    void SetDimension(DimensionT&& value) { m_dimensionHasBeenSet = true; m_dimension = std::forward<DimensionT>(value); }
    template<typename DimensionT = Aws::String>
    UsageRecord& WithDimension(DimensionT&& value) { SetDimension(std::forward<DimensionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quantity of usage consumed by the customer for the given dimension and
     * time. Defaults to <code>0</code> if not specified.</p>
     */
    inline int GetQuantity() const { return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }
    inline UsageRecord& WithQuantity(int value) { SetQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of <code>UsageAllocations</code> to submit. The sum of all
     * <code>UsageAllocation</code> quantities must equal the Quantity of the
     * <code>UsageRecord</code>.</p>
     */
    inline const Aws::Vector<UsageAllocation>& GetUsageAllocations() const { return m_usageAllocations; }
    inline bool UsageAllocationsHasBeenSet() const { return m_usageAllocationsHasBeenSet; }
    template<typename UsageAllocationsT = Aws::Vector<UsageAllocation>>
    void SetUsageAllocations(UsageAllocationsT&& value) { m_usageAllocationsHasBeenSet = true; m_usageAllocations = std::forward<UsageAllocationsT>(value); }
    template<typename UsageAllocationsT = Aws::Vector<UsageAllocation>>
    UsageRecord& WithUsageAllocations(UsageAllocationsT&& value) { SetUsageAllocations(std::forward<UsageAllocationsT>(value)); return *this;}
    template<typename UsageAllocationsT = UsageAllocation>
    UsageRecord& AddUsageAllocations(UsageAllocationsT&& value) { m_usageAllocationsHasBeenSet = true; m_usageAllocations.emplace_back(std::forward<UsageAllocationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The <code>CustomerAWSAccountID</code> parameter specifies the AWS account ID
     * of the buyer. </p>
     */
    inline const Aws::String& GetCustomerAWSAccountId() const { return m_customerAWSAccountId; }
    inline bool CustomerAWSAccountIdHasBeenSet() const { return m_customerAWSAccountIdHasBeenSet; }
    template<typename CustomerAWSAccountIdT = Aws::String>
    void SetCustomerAWSAccountId(CustomerAWSAccountIdT&& value) { m_customerAWSAccountIdHasBeenSet = true; m_customerAWSAccountId = std::forward<CustomerAWSAccountIdT>(value); }
    template<typename CustomerAWSAccountIdT = Aws::String>
    UsageRecord& WithCustomerAWSAccountId(CustomerAWSAccountIdT&& value) { SetCustomerAWSAccountId(std::forward<CustomerAWSAccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    Aws::String m_customerIdentifier;
    bool m_customerIdentifierHasBeenSet = false;

    Aws::String m_dimension;
    bool m_dimensionHasBeenSet = false;

    int m_quantity{0};
    bool m_quantityHasBeenSet = false;

    Aws::Vector<UsageAllocation> m_usageAllocations;
    bool m_usageAllocationsHasBeenSet = false;

    Aws::String m_customerAWSAccountId;
    bool m_customerAWSAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
