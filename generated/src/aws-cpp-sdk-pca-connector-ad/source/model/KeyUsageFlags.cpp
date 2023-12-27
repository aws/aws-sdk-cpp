/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/KeyUsageFlags.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

KeyUsageFlags::KeyUsageFlags() : 
    m_dataEncipherment(false),
    m_dataEnciphermentHasBeenSet(false),
    m_digitalSignature(false),
    m_digitalSignatureHasBeenSet(false),
    m_keyAgreement(false),
    m_keyAgreementHasBeenSet(false),
    m_keyEncipherment(false),
    m_keyEnciphermentHasBeenSet(false),
    m_nonRepudiation(false),
    m_nonRepudiationHasBeenSet(false)
{
}

KeyUsageFlags::KeyUsageFlags(JsonView jsonValue) : 
    m_dataEncipherment(false),
    m_dataEnciphermentHasBeenSet(false),
    m_digitalSignature(false),
    m_digitalSignatureHasBeenSet(false),
    m_keyAgreement(false),
    m_keyAgreementHasBeenSet(false),
    m_keyEncipherment(false),
    m_keyEnciphermentHasBeenSet(false),
    m_nonRepudiation(false),
    m_nonRepudiationHasBeenSet(false)
{
  *this = jsonValue;
}

KeyUsageFlags& KeyUsageFlags::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataEncipherment"))
  {
    m_dataEncipherment = jsonValue.GetBool("DataEncipherment");

    m_dataEnciphermentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DigitalSignature"))
  {
    m_digitalSignature = jsonValue.GetBool("DigitalSignature");

    m_digitalSignatureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyAgreement"))
  {
    m_keyAgreement = jsonValue.GetBool("KeyAgreement");

    m_keyAgreementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyEncipherment"))
  {
    m_keyEncipherment = jsonValue.GetBool("KeyEncipherment");

    m_keyEnciphermentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NonRepudiation"))
  {
    m_nonRepudiation = jsonValue.GetBool("NonRepudiation");

    m_nonRepudiationHasBeenSet = true;
  }

  return *this;
}

JsonValue KeyUsageFlags::Jsonize() const
{
  JsonValue payload;

  if(m_dataEnciphermentHasBeenSet)
  {
   payload.WithBool("DataEncipherment", m_dataEncipherment);

  }

  if(m_digitalSignatureHasBeenSet)
  {
   payload.WithBool("DigitalSignature", m_digitalSignature);

  }

  if(m_keyAgreementHasBeenSet)
  {
   payload.WithBool("KeyAgreement", m_keyAgreement);

  }

  if(m_keyEnciphermentHasBeenSet)
  {
   payload.WithBool("KeyEncipherment", m_keyEncipherment);

  }

  if(m_nonRepudiationHasBeenSet)
  {
   payload.WithBool("NonRepudiation", m_nonRepudiation);

  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
