﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/TaxRegistrationEntry.h>
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

TaxRegistrationEntry::TaxRegistrationEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

TaxRegistrationEntry& TaxRegistrationEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("additionalTaxInformation"))
  {
    m_additionalTaxInformation = jsonValue.GetObject("additionalTaxInformation");
    m_additionalTaxInformationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("certifiedEmailId"))
  {
    m_certifiedEmailId = jsonValue.GetString("certifiedEmailId");
    m_certifiedEmailIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("legalAddress"))
  {
    m_legalAddress = jsonValue.GetObject("legalAddress");
    m_legalAddressHasBeenSet = true;
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
    m_registrationType = TaxRegistrationTypeMapper::GetTaxRegistrationTypeForName(jsonValue.GetString("registrationType"));
    m_registrationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sector"))
  {
    m_sector = SectorMapper::GetSectorForName(jsonValue.GetString("sector"));
    m_sectorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("verificationDetails"))
  {
    m_verificationDetails = jsonValue.GetObject("verificationDetails");
    m_verificationDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue TaxRegistrationEntry::Jsonize() const
{
  JsonValue payload;

  if(m_additionalTaxInformationHasBeenSet)
  {
   payload.WithObject("additionalTaxInformation", m_additionalTaxInformation.Jsonize());

  }

  if(m_certifiedEmailIdHasBeenSet)
  {
   payload.WithString("certifiedEmailId", m_certifiedEmailId);

  }

  if(m_legalAddressHasBeenSet)
  {
   payload.WithObject("legalAddress", m_legalAddress.Jsonize());

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
   payload.WithString("registrationType", TaxRegistrationTypeMapper::GetNameForTaxRegistrationType(m_registrationType));
  }

  if(m_sectorHasBeenSet)
  {
   payload.WithString("sector", SectorMapper::GetNameForSector(m_sector));
  }

  if(m_verificationDetailsHasBeenSet)
  {
   payload.WithObject("verificationDetails", m_verificationDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
