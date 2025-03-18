/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/Ibm3624RandomPin.h>
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

Ibm3624RandomPin::Ibm3624RandomPin(JsonView jsonValue)
{
  *this = jsonValue;
}

Ibm3624RandomPin& Ibm3624RandomPin::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DecimalizationTable"))
  {
    m_decimalizationTable = jsonValue.GetString("DecimalizationTable");
    m_decimalizationTableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PinValidationDataPadCharacter"))
  {
    m_pinValidationDataPadCharacter = jsonValue.GetString("PinValidationDataPadCharacter");
    m_pinValidationDataPadCharacterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PinValidationData"))
  {
    m_pinValidationData = jsonValue.GetString("PinValidationData");
    m_pinValidationDataHasBeenSet = true;
  }
  return *this;
}

JsonValue Ibm3624RandomPin::Jsonize() const
{
  JsonValue payload;

  if(m_decimalizationTableHasBeenSet)
  {
   payload.WithString("DecimalizationTable", m_decimalizationTable);

  }

  if(m_pinValidationDataPadCharacterHasBeenSet)
  {
   payload.WithString("PinValidationDataPadCharacter", m_pinValidationDataPadCharacter);

  }

  if(m_pinValidationDataHasBeenSet)
  {
   payload.WithString("PinValidationData", m_pinValidationData);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
