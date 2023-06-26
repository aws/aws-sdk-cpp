/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/MacAlgorithmEmv.h>
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

MacAlgorithmEmv::MacAlgorithmEmv() : 
    m_majorKeyDerivationMode(MajorKeyDerivationMode::NOT_SET),
    m_majorKeyDerivationModeHasBeenSet(false),
    m_panSequenceNumberHasBeenSet(false),
    m_primaryAccountNumberHasBeenSet(false),
    m_sessionKeyDerivationMode(SessionKeyDerivationMode::NOT_SET),
    m_sessionKeyDerivationModeHasBeenSet(false),
    m_sessionKeyDerivationValueHasBeenSet(false)
{
}

MacAlgorithmEmv::MacAlgorithmEmv(JsonView jsonValue) : 
    m_majorKeyDerivationMode(MajorKeyDerivationMode::NOT_SET),
    m_majorKeyDerivationModeHasBeenSet(false),
    m_panSequenceNumberHasBeenSet(false),
    m_primaryAccountNumberHasBeenSet(false),
    m_sessionKeyDerivationMode(SessionKeyDerivationMode::NOT_SET),
    m_sessionKeyDerivationModeHasBeenSet(false),
    m_sessionKeyDerivationValueHasBeenSet(false)
{
  *this = jsonValue;
}

MacAlgorithmEmv& MacAlgorithmEmv::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MajorKeyDerivationMode"))
  {
    m_majorKeyDerivationMode = MajorKeyDerivationModeMapper::GetMajorKeyDerivationModeForName(jsonValue.GetString("MajorKeyDerivationMode"));

    m_majorKeyDerivationModeHasBeenSet = true;
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

  if(jsonValue.ValueExists("SessionKeyDerivationMode"))
  {
    m_sessionKeyDerivationMode = SessionKeyDerivationModeMapper::GetSessionKeyDerivationModeForName(jsonValue.GetString("SessionKeyDerivationMode"));

    m_sessionKeyDerivationModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SessionKeyDerivationValue"))
  {
    m_sessionKeyDerivationValue = jsonValue.GetObject("SessionKeyDerivationValue");

    m_sessionKeyDerivationValueHasBeenSet = true;
  }

  return *this;
}

JsonValue MacAlgorithmEmv::Jsonize() const
{
  JsonValue payload;

  if(m_majorKeyDerivationModeHasBeenSet)
  {
   payload.WithString("MajorKeyDerivationMode", MajorKeyDerivationModeMapper::GetNameForMajorKeyDerivationMode(m_majorKeyDerivationMode));
  }

  if(m_panSequenceNumberHasBeenSet)
  {
   payload.WithString("PanSequenceNumber", m_panSequenceNumber);

  }

  if(m_primaryAccountNumberHasBeenSet)
  {
   payload.WithString("PrimaryAccountNumber", m_primaryAccountNumber);

  }

  if(m_sessionKeyDerivationModeHasBeenSet)
  {
   payload.WithString("SessionKeyDerivationMode", SessionKeyDerivationModeMapper::GetNameForSessionKeyDerivationMode(m_sessionKeyDerivationMode));
  }

  if(m_sessionKeyDerivationValueHasBeenSet)
  {
   payload.WithObject("SessionKeyDerivationValue", m_sessionKeyDerivationValue.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
