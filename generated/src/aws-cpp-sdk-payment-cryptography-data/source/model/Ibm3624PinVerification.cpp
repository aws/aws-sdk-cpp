/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/Ibm3624PinVerification.h>
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

Ibm3624PinVerification::Ibm3624PinVerification() : 
    m_decimalizationTableHasBeenSet(false),
    m_pinOffsetHasBeenSet(false),
    m_pinValidationDataHasBeenSet(false),
    m_pinValidationDataPadCharacterHasBeenSet(false)
{
}

Ibm3624PinVerification::Ibm3624PinVerification(JsonView jsonValue) : 
    m_decimalizationTableHasBeenSet(false),
    m_pinOffsetHasBeenSet(false),
    m_pinValidationDataHasBeenSet(false),
    m_pinValidationDataPadCharacterHasBeenSet(false)
{
  *this = jsonValue;
}

Ibm3624PinVerification& Ibm3624PinVerification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DecimalizationTable"))
  {
    m_decimalizationTable = jsonValue.GetString("DecimalizationTable");

    m_decimalizationTableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PinOffset"))
  {
    m_pinOffset = jsonValue.GetString("PinOffset");

    m_pinOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PinValidationData"))
  {
    m_pinValidationData = jsonValue.GetString("PinValidationData");

    m_pinValidationDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PinValidationDataPadCharacter"))
  {
    m_pinValidationDataPadCharacter = jsonValue.GetString("PinValidationDataPadCharacter");

    m_pinValidationDataPadCharacterHasBeenSet = true;
  }

  return *this;
}

JsonValue Ibm3624PinVerification::Jsonize() const
{
  JsonValue payload;

  if(m_decimalizationTableHasBeenSet)
  {
   payload.WithString("DecimalizationTable", m_decimalizationTable);

  }

  if(m_pinOffsetHasBeenSet)
  {
   payload.WithString("PinOffset", m_pinOffset);

  }

  if(m_pinValidationDataHasBeenSet)
  {
   payload.WithString("PinValidationData", m_pinValidationData);

  }

  if(m_pinValidationDataPadCharacterHasBeenSet)
  {
   payload.WithString("PinValidationDataPadCharacter", m_pinValidationDataPadCharacter);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
