/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/EmvEncryptionAttributes.h>
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

EmvEncryptionAttributes::EmvEncryptionAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

EmvEncryptionAttributes& EmvEncryptionAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MajorKeyDerivationMode"))
  {
    m_majorKeyDerivationMode = EmvMajorKeyDerivationModeMapper::GetEmvMajorKeyDerivationModeForName(jsonValue.GetString("MajorKeyDerivationMode"));
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
  if(jsonValue.ValueExists("SessionDerivationData"))
  {
    m_sessionDerivationData = jsonValue.GetString("SessionDerivationData");
    m_sessionDerivationDataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = EmvEncryptionModeMapper::GetEmvEncryptionModeForName(jsonValue.GetString("Mode"));
    m_modeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InitializationVector"))
  {
    m_initializationVector = jsonValue.GetString("InitializationVector");
    m_initializationVectorHasBeenSet = true;
  }
  return *this;
}

JsonValue EmvEncryptionAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_majorKeyDerivationModeHasBeenSet)
  {
   payload.WithString("MajorKeyDerivationMode", EmvMajorKeyDerivationModeMapper::GetNameForEmvMajorKeyDerivationMode(m_majorKeyDerivationMode));
  }

  if(m_primaryAccountNumberHasBeenSet)
  {
   payload.WithString("PrimaryAccountNumber", m_primaryAccountNumber);

  }

  if(m_panSequenceNumberHasBeenSet)
  {
   payload.WithString("PanSequenceNumber", m_panSequenceNumber);

  }

  if(m_sessionDerivationDataHasBeenSet)
  {
   payload.WithString("SessionDerivationData", m_sessionDerivationData);

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", EmvEncryptionModeMapper::GetNameForEmvEncryptionMode(m_mode));
  }

  if(m_initializationVectorHasBeenSet)
  {
   payload.WithString("InitializationVector", m_initializationVector);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
