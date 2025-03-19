/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/VietnamAdditionalInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TaxSettings
{
namespace Model
{

VietnamAdditionalInfo::VietnamAdditionalInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

VietnamAdditionalInfo& VietnamAdditionalInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("electronicTransactionCodeNumber"))
  {
    m_electronicTransactionCodeNumber = jsonValue.GetString("electronicTransactionCodeNumber");
    m_electronicTransactionCodeNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("enterpriseIdentificationNumber"))
  {
    m_enterpriseIdentificationNumber = jsonValue.GetString("enterpriseIdentificationNumber");
    m_enterpriseIdentificationNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("paymentVoucherNumber"))
  {
    m_paymentVoucherNumber = jsonValue.GetString("paymentVoucherNumber");
    m_paymentVoucherNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("paymentVoucherNumberDate"))
  {
    m_paymentVoucherNumberDate = jsonValue.GetString("paymentVoucherNumberDate");
    m_paymentVoucherNumberDateHasBeenSet = true;
  }
  return *this;
}

JsonValue VietnamAdditionalInfo::Jsonize() const
{
  JsonValue payload;

  if(m_electronicTransactionCodeNumberHasBeenSet)
  {
   payload.WithString("electronicTransactionCodeNumber", m_electronicTransactionCodeNumber);

  }

  if(m_enterpriseIdentificationNumberHasBeenSet)
  {
   payload.WithString("enterpriseIdentificationNumber", m_enterpriseIdentificationNumber);

  }

  if(m_paymentVoucherNumberHasBeenSet)
  {
   payload.WithString("paymentVoucherNumber", m_paymentVoucherNumber);

  }

  if(m_paymentVoucherNumberDateHasBeenSet)
  {
   payload.WithString("paymentVoucherNumberDate", m_paymentVoucherNumberDate);

  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
