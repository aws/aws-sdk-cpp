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

EmvEncryptionAttributes::EmvEncryptionAttributes() : 
    m_initializationVectorHasBeenSet(false),
    m_majorKeyDerivationMode(EmvMajorKeyDerivationMode::NOT_SET),
    m_majorKeyDerivationModeHasBeenSet(false),
    m_mode(EmvEncryptionMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_panSequenceNumberHasBeenSet(false),
    m_primaryAccountNumberHasBeenSet(false),
    m_sessionDerivationDataHasBeenSet(false)
{
}

EmvEncryptionAttributes::EmvEncryptionAttributes(JsonView jsonValue) : 
    m_initializationVectorHasBeenSet(false),
    m_majorKeyDerivationMode(EmvMajorKeyDerivationMode::NOT_SET),
    m_majorKeyDerivationModeHasBeenSet(false),
    m_mode(EmvEncryptionMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_panSequenceNumberHasBeenSet(false),
    m_primaryAccountNumberHasBeenSet(false),
    m_sessionDerivationDataHasBeenSet(false)
{
  *this = jsonValue;
}

EmvEncryptionAttributes& EmvEncryptionAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InitializationVector"))
  {
    m_initializationVector = jsonValue.GetString("InitializationVector");

    m_initializationVectorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MajorKeyDerivationMode"))
  {
    m_majorKeyDerivationMode = EmvMajorKeyDerivationModeMapper::GetEmvMajorKeyDerivationModeForName(jsonValue.GetString("MajorKeyDerivationMode"));

    m_majorKeyDerivationModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = EmvEncryptionModeMapper::GetEmvEncryptionModeForName(jsonValue.GetString("Mode"));

    m_modeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PanSequenceNumber"))
  {
    m_panSequenceNumber = jsonValue.GetString("PanSequenceNumber");

    m_panSequenceNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrimaryAccountNumber"))
  {
    m_primaryAccountNumber = jsonValue.GetString("PrimaryAccountNumber");

    m_primaryAccountNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SessionDerivationData"))
  {
    m_sessionDerivationData = jsonValue.GetString("SessionDerivationData");

    m_sessionDerivationDataHasBeenSet = true;
  }

  return *this;
}

JsonValue EmvEncryptionAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_initializationVectorHasBeenSet)
  {
   payload.WithString("InitializationVector", m_initializationVector);

  }

  if(m_majorKeyDerivationModeHasBeenSet)
  {
   payload.WithString("MajorKeyDerivationMode", EmvMajorKeyDerivationModeMapper::GetNameForEmvMajorKeyDerivationMode(m_majorKeyDerivationMode));
  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", EmvEncryptionModeMapper::GetNameForEmvEncryptionMode(m_mode));
  }

  if(m_panSequenceNumberHasBeenSet)
  {
   payload.WithString("PanSequenceNumber", m_panSequenceNumber);

  }

  if(m_primaryAccountNumberHasBeenSet)
  {
   payload.WithString("PrimaryAccountNumber", m_primaryAccountNumber);

  }

  if(m_sessionDerivationDataHasBeenSet)
  {
   payload.WithString("SessionDerivationData", m_sessionDerivationData);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
