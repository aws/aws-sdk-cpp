/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53domains/model/OperationType.h>
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
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>Information for one billing record.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/BillingRecord">AWS
   * API Reference</a></p>
   */
  class BillingRecord
  {
  public:
    AWS_ROUTE53DOMAINS_API BillingRecord();
    AWS_ROUTE53DOMAINS_API BillingRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API BillingRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the domain that the billing record applies to. If the domain name
     * contains characters other than a-z, 0-9, and - (hyphen), such as an
     * internationalized domain name, then this value is in Punycode. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DomainNameFormat.html">DNS
     * Domain Name Format</a> in the <i>Amazon Route 53 Developer Guide</i>.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline BillingRecord& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline BillingRecord& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline BillingRecord& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation that you were charged for.</p>
     */
    inline const OperationType& GetOperation() const{ return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(const OperationType& value) { m_operationHasBeenSet = true; m_operation = value; }
    inline void SetOperation(OperationType&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }
    inline BillingRecord& WithOperation(const OperationType& value) { SetOperation(value); return *this;}
    inline BillingRecord& WithOperation(OperationType&& value) { SetOperation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Deprecated property. This field is retained in report structure for backwards
     * compatibility, but will appear blank.</p>
     */
    inline const Aws::String& GetInvoiceId() const{ return m_invoiceId; }
    inline bool InvoiceIdHasBeenSet() const { return m_invoiceIdHasBeenSet; }
    inline void SetInvoiceId(const Aws::String& value) { m_invoiceIdHasBeenSet = true; m_invoiceId = value; }
    inline void SetInvoiceId(Aws::String&& value) { m_invoiceIdHasBeenSet = true; m_invoiceId = std::move(value); }
    inline void SetInvoiceId(const char* value) { m_invoiceIdHasBeenSet = true; m_invoiceId.assign(value); }
    inline BillingRecord& WithInvoiceId(const Aws::String& value) { SetInvoiceId(value); return *this;}
    inline BillingRecord& WithInvoiceId(Aws::String&& value) { SetInvoiceId(std::move(value)); return *this;}
    inline BillingRecord& WithInvoiceId(const char* value) { SetInvoiceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the operation was billed, in Unix format.</p>
     */
    inline const Aws::Utils::DateTime& GetBillDate() const{ return m_billDate; }
    inline bool BillDateHasBeenSet() const { return m_billDateHasBeenSet; }
    inline void SetBillDate(const Aws::Utils::DateTime& value) { m_billDateHasBeenSet = true; m_billDate = value; }
    inline void SetBillDate(Aws::Utils::DateTime&& value) { m_billDateHasBeenSet = true; m_billDate = std::move(value); }
    inline BillingRecord& WithBillDate(const Aws::Utils::DateTime& value) { SetBillDate(value); return *this;}
    inline BillingRecord& WithBillDate(Aws::Utils::DateTime&& value) { SetBillDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The price that you were charged for the operation, in US dollars.</p>
     * <p>Example value: 12.0</p>
     */
    inline double GetPrice() const{ return m_price; }
    inline bool PriceHasBeenSet() const { return m_priceHasBeenSet; }
    inline void SetPrice(double value) { m_priceHasBeenSet = true; m_price = value; }
    inline BillingRecord& WithPrice(double value) { SetPrice(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    OperationType m_operation;
    bool m_operationHasBeenSet = false;

    Aws::String m_invoiceId;
    bool m_invoiceIdHasBeenSet = false;

    Aws::Utils::DateTime m_billDate;
    bool m_billDateHasBeenSet = false;

    double m_price;
    bool m_priceHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
