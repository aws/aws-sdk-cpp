/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-agreement/model/EstimatedCharges.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AgreementService
{
namespace Model
{

EstimatedCharges::EstimatedCharges() : 
    m_agreementValueHasBeenSet(false),
    m_currencyCodeHasBeenSet(false)
{
}

EstimatedCharges::EstimatedCharges(JsonView jsonValue) : 
    m_agreementValueHasBeenSet(false),
    m_currencyCodeHasBeenSet(false)
{
  *this = jsonValue;
}

EstimatedCharges& EstimatedCharges::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agreementValue"))
  {
    m_agreementValue = jsonValue.GetString("agreementValue");

    m_agreementValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currencyCode"))
  {
    m_currencyCode = jsonValue.GetString("currencyCode");

    m_currencyCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue EstimatedCharges::Jsonize() const
{
  JsonValue payload;

  if(m_agreementValueHasBeenSet)
  {
   payload.WithString("agreementValue", m_agreementValue);

  }

  if(m_currencyCodeHasBeenSet)
  {
   payload.WithString("currencyCode", m_currencyCode);

  }

  return payload;
}

} // namespace Model
} // namespace AgreementService
} // namespace Aws
