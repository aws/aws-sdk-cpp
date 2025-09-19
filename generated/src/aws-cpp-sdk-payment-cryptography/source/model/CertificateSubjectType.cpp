/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/CertificateSubjectType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PaymentCryptography
{
namespace Model
{

CertificateSubjectType::CertificateSubjectType(JsonView jsonValue)
{
  *this = jsonValue;
}

CertificateSubjectType& CertificateSubjectType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CommonName"))
  {
    m_commonName = jsonValue.GetString("CommonName");
    m_commonNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OrganizationUnit"))
  {
    m_organizationUnit = jsonValue.GetString("OrganizationUnit");
    m_organizationUnitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Organization"))
  {
    m_organization = jsonValue.GetString("Organization");
    m_organizationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("City"))
  {
    m_city = jsonValue.GetString("City");
    m_cityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetString("Country");
    m_countryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StateOrProvince"))
  {
    m_stateOrProvince = jsonValue.GetString("StateOrProvince");
    m_stateOrProvinceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EmailAddress"))
  {
    m_emailAddress = jsonValue.GetString("EmailAddress");
    m_emailAddressHasBeenSet = true;
  }
  return *this;
}

JsonValue CertificateSubjectType::Jsonize() const
{
  JsonValue payload;

  if(m_commonNameHasBeenSet)
  {
   payload.WithString("CommonName", m_commonName);

  }

  if(m_organizationUnitHasBeenSet)
  {
   payload.WithString("OrganizationUnit", m_organizationUnit);

  }

  if(m_organizationHasBeenSet)
  {
   payload.WithString("Organization", m_organization);

  }

  if(m_cityHasBeenSet)
  {
   payload.WithString("City", m_city);

  }

  if(m_countryHasBeenSet)
  {
   payload.WithString("Country", m_country);

  }

  if(m_stateOrProvinceHasBeenSet)
  {
   payload.WithString("StateOrProvince", m_stateOrProvince);

  }

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("EmailAddress", m_emailAddress);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
