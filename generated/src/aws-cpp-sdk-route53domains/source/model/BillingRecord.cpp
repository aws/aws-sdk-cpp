/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/BillingRecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

BillingRecord::BillingRecord() : 
    m_domainNameHasBeenSet(false),
    m_operation(OperationType::NOT_SET),
    m_operationHasBeenSet(false),
    m_invoiceIdHasBeenSet(false),
    m_billDateHasBeenSet(false),
    m_price(0.0),
    m_priceHasBeenSet(false)
{
}

BillingRecord::BillingRecord(JsonView jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_operation(OperationType::NOT_SET),
    m_operationHasBeenSet(false),
    m_invoiceIdHasBeenSet(false),
    m_billDateHasBeenSet(false),
    m_price(0.0),
    m_priceHasBeenSet(false)
{
  *this = jsonValue;
}

BillingRecord& BillingRecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Operation"))
  {
    m_operation = OperationTypeMapper::GetOperationTypeForName(jsonValue.GetString("Operation"));

    m_operationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvoiceId"))
  {
    m_invoiceId = jsonValue.GetString("InvoiceId");

    m_invoiceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BillDate"))
  {
    m_billDate = jsonValue.GetDouble("BillDate");

    m_billDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Price"))
  {
    m_price = jsonValue.GetDouble("Price");

    m_priceHasBeenSet = true;
  }

  return *this;
}

JsonValue BillingRecord::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_operationHasBeenSet)
  {
   payload.WithString("Operation", OperationTypeMapper::GetNameForOperationType(m_operation));
  }

  if(m_invoiceIdHasBeenSet)
  {
   payload.WithString("InvoiceId", m_invoiceId);

  }

  if(m_billDateHasBeenSet)
  {
   payload.WithDouble("BillDate", m_billDate.SecondsWithMSPrecision());
  }

  if(m_priceHasBeenSet)
  {
   payload.WithDouble("Price", m_price);

  }

  return payload;
}

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
