/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/CurrentPinAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PaymentCryptographyData
{
namespace Model
{

CurrentPinAttributes::CurrentPinAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

CurrentPinAttributes& CurrentPinAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CurrentPinPekIdentifier"))
  {
    m_currentPinPekIdentifier = jsonValue.GetString("CurrentPinPekIdentifier");
    m_currentPinPekIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CurrentEncryptedPinBlock"))
  {
    m_currentEncryptedPinBlock = jsonValue.GetString("CurrentEncryptedPinBlock");
    m_currentEncryptedPinBlockHasBeenSet = true;
  }
  return *this;
}

JsonValue CurrentPinAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_currentPinPekIdentifierHasBeenSet)
  {
   payload.WithString("CurrentPinPekIdentifier", m_currentPinPekIdentifier);

  }

  if(m_currentEncryptedPinBlockHasBeenSet)
  {
   payload.WithString("CurrentEncryptedPinBlock", m_currentEncryptedPinBlock);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
