/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-entitlement/MarketplaceEntitlementService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-entitlement/model/EntitlementValue.h>
#include <aws/core/utils/DateTime.h>
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
namespace MarketplaceEntitlementService
{
namespace Model
{

  /**
   * <p>An entitlement represents capacity in a product owned by the customer. For
   * example, a customer might own some number of users or seats in an SaaS
   * application or some amount of data capacity in a multi-tenant
   * database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entitlement.marketplace-2017-01-11/Entitlement">AWS
   * API Reference</a></p>
   */
  class Entitlement
  {
  public:
    AWS_MARKETPLACEENTITLEMENTSERVICE_API Entitlement() = default;
    AWS_MARKETPLACEENTITLEMENTSERVICE_API Entitlement(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACEENTITLEMENTSERVICE_API Entitlement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACEENTITLEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The product code for which the given entitlement applies. Product codes are
     * provided by AWS Marketplace when the product listing is created.</p>
     */
    inline const Aws::String& GetProductCode() const { return m_productCode; }
    inline bool ProductCodeHasBeenSet() const { return m_productCodeHasBeenSet; }
    template<typename ProductCodeT = Aws::String>
    void SetProductCode(ProductCodeT&& value) { m_productCodeHasBeenSet = true; m_productCode = std::forward<ProductCodeT>(value); }
    template<typename ProductCodeT = Aws::String>
    Entitlement& WithProductCode(ProductCodeT&& value) { SetProductCode(std::forward<ProductCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimension for which the given entitlement applies. Dimensions represent
     * categories of capacity in a product and are specified when the product is listed
     * in AWS Marketplace.</p>
     */
    inline const Aws::String& GetDimension() const { return m_dimension; }
    inline bool DimensionHasBeenSet() const { return m_dimensionHasBeenSet; }
    template<typename DimensionT = Aws::String>
    void SetDimension(DimensionT&& value) { m_dimensionHasBeenSet = true; m_dimension = std::forward<DimensionT>(value); }
    template<typename DimensionT = Aws::String>
    Entitlement& WithDimension(DimensionT&& value) { SetDimension(std::forward<DimensionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer identifier is a handle to each unique customer in an
     * application. Customer identifiers are obtained through the ResolveCustomer
     * operation in AWS Marketplace Metering Service.</p>
     */
    inline const Aws::String& GetCustomerIdentifier() const { return m_customerIdentifier; }
    inline bool CustomerIdentifierHasBeenSet() const { return m_customerIdentifierHasBeenSet; }
    template<typename CustomerIdentifierT = Aws::String>
    void SetCustomerIdentifier(CustomerIdentifierT&& value) { m_customerIdentifierHasBeenSet = true; m_customerIdentifier = std::forward<CustomerIdentifierT>(value); }
    template<typename CustomerIdentifierT = Aws::String>
    Entitlement& WithCustomerIdentifier(CustomerIdentifierT&& value) { SetCustomerIdentifier(std::forward<CustomerIdentifierT>(value)); return *this;}
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
    Entitlement& WithCustomerAWSAccountId(CustomerAWSAccountIdT&& value) { SetCustomerAWSAccountId(std::forward<CustomerAWSAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EntitlementValue represents the amount of capacity that the customer is
     * entitled to for the product.</p>
     */
    inline const EntitlementValue& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = EntitlementValue>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = EntitlementValue>
    Entitlement& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration date represents the minimum date through which this
     * entitlement is expected to remain valid. For contractual products listed on AWS
     * Marketplace, the expiration date is the date at which the customer will renew or
     * cancel their contract. Customers who are opting to renew their contract will
     * still have entitlements with an expiration date.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const { return m_expirationDate; }
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }
    template<typename ExpirationDateT = Aws::Utils::DateTime>
    void SetExpirationDate(ExpirationDateT&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::forward<ExpirationDateT>(value); }
    template<typename ExpirationDateT = Aws::Utils::DateTime>
    Entitlement& WithExpirationDate(ExpirationDateT&& value) { SetExpirationDate(std::forward<ExpirationDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_productCode;
    bool m_productCodeHasBeenSet = false;

    Aws::String m_dimension;
    bool m_dimensionHasBeenSet = false;

    Aws::String m_customerIdentifier;
    bool m_customerIdentifierHasBeenSet = false;

    Aws::String m_customerAWSAccountId;
    bool m_customerAWSAccountIdHasBeenSet = false;

    EntitlementValue m_value;
    bool m_valueHasBeenSet = false;

    Aws::Utils::DateTime m_expirationDate{};
    bool m_expirationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceEntitlementService
} // namespace Aws
