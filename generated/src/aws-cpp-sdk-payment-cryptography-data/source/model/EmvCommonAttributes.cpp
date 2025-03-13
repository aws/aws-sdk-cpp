/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/EmvCommonAttributes.h>
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

EmvCommonAttributes::EmvCommonAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

EmvCommonAttributes& EmvCommonAttributes::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("ApplicationCryptogram"))
  {
    m_applicationCryptogram = jsonValue.GetString("ApplicationCryptogram");
    m_applicationCryptogramHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = EmvEncryptionModeMapper::GetEmvEncryptionModeForName(jsonValue.GetString("Mode"));
    m_modeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PinBlockPaddingType"))
  {
    m_pinBlockPaddingType = PinBlockPaddingTypeMapper::GetPinBlockPaddingTypeForName(jsonValue.GetString("PinBlockPaddingType"));
    m_pinBlockPaddingTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PinBlockLengthPosition"))
  {
    m_pinBlockLengthPosition = PinBlockLengthPositionMapper::GetPinBlockLengthPositionForName(jsonValue.GetString("PinBlockLengthPosition"));
    m_pinBlockLengthPositionHasBeenSet = true;
  }
  return *this;
}

JsonValue EmvCommonAttributes::Jsonize() const
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

  if(m_applicationCryptogramHasBeenSet)
  {
   payload.WithString("ApplicationCryptogram", m_applicationCryptogram);

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", EmvEncryptionModeMapper::GetNameForEmvEncryptionMode(m_mode));
  }

  if(m_pinBlockPaddingTypeHasBeenSet)
  {
   payload.WithString("PinBlockPaddingType", PinBlockPaddingTypeMapper::GetNameForPinBlockPaddingType(m_pinBlockPaddingType));
  }

  if(m_pinBlockLengthPositionHasBeenSet)
  {
   payload.WithString("PinBlockLengthPosition", PinBlockLengthPositionMapper::GetNameForPinBlockLengthPosition(m_pinBlockLengthPosition));
  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
