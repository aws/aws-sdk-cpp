/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/VisaAttributes.h>
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

VisaAttributes::VisaAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

VisaAttributes& VisaAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MajorKeyDerivationMode"))
  {
    m_majorKeyDerivationMode = MajorKeyDerivationModeMapper::GetMajorKeyDerivationModeForName(jsonValue.GetString("MajorKeyDerivationMode"));
    m_majorKeyDerivationModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PrimaryAccountNumber"))
  {
    m_primaryAccountNumber = jsonValue.GetString("PrimaryAccountNumber");
    m_primaryAccountNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PanSequenceNumber"))
  {
    m_panSequenceNumber = jsonValue.GetString("PanSequenceNumber");
    m_panSequenceNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApplicationTransactionCounter"))
  {
    m_applicationTransactionCounter = jsonValue.GetString("ApplicationTransactionCounter");
    m_applicationTransactionCounterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthorizationRequestKeyIdentifier"))
  {
    m_authorizationRequestKeyIdentifier = jsonValue.GetString("AuthorizationRequestKeyIdentifier");
    m_authorizationRequestKeyIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CurrentPinAttributes"))
  {
    m_currentPinAttributes = jsonValue.GetObject("CurrentPinAttributes");
    m_currentPinAttributesHasBeenSet = true;
  }
  return *this;
}

JsonValue VisaAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_majorKeyDerivationModeHasBeenSet)
  {
   payload.WithString("MajorKeyDerivationMode", MajorKeyDerivationModeMapper::GetNameForMajorKeyDerivationMode(m_majorKeyDerivationMode));
  }

  if(m_primaryAccountNumberHasBeenSet)
  {
   payload.WithString("PrimaryAccountNumber", m_primaryAccountNumber);

  }

  if(m_panSequenceNumberHasBeenSet)
  {
   payload.WithString("PanSequenceNumber", m_panSequenceNumber);

  }

  if(m_applicationTransactionCounterHasBeenSet)
  {
   payload.WithString("ApplicationTransactionCounter", m_applicationTransactionCounter);

  }

  if(m_authorizationRequestKeyIdentifierHasBeenSet)
  {
   payload.WithString("AuthorizationRequestKeyIdentifier", m_authorizationRequestKeyIdentifier);

  }

  if(m_currentPinAttributesHasBeenSet)
  {
   payload.WithObject("CurrentPinAttributes", m_currentPinAttributes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
