/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/SupplementalTaxRegistrationEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TaxSettings
{
namespace Model
{

SupplementalTaxRegistrationEntry::SupplementalTaxRegistrationEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

SupplementalTaxRegistrationEntry& SupplementalTaxRegistrationEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("address"))
  {
    m_address = jsonValue.GetObject("address");
    m_addressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("legalName"))
  {
    m_legalName = jsonValue.GetString("legalName");
    m_legalNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("registrationId"))
  {
    m_registrationId = jsonValue.GetString("registrationId");
    m_registrationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("registrationType"))
  {
    m_registrationType = SupplementalTaxRegistrationTypeMapper::GetSupplementalTaxRegistrationTypeForName(jsonValue.GetString("registrationType"));
    m_registrationTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue SupplementalTaxRegistrationEntry::Jsonize() const
{
  JsonValue payload;

  if(m_addressHasBeenSet)
  {
   payload.WithObject("address", m_address.Jsonize());

  }

  if(m_legalNameHasBeenSet)
  {
   payload.WithString("legalName", m_legalName);

  }

  if(m_registrationIdHasBeenSet)
  {
   payload.WithString("registrationId", m_registrationId);

  }

  if(m_registrationTypeHasBeenSet)
  {
   payload.WithString("registrationType", SupplementalTaxRegistrationTypeMapper::GetNameForSupplementalTaxRegistrationType(m_registrationType));
  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
