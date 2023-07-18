/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/PickupDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

PickupDetails::PickupDetails() : 
    m_nameHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_identificationNumberHasBeenSet(false),
    m_identificationExpirationDateHasBeenSet(false),
    m_identificationIssuingOrgHasBeenSet(false),
    m_devicePickupIdHasBeenSet(false)
{
}

PickupDetails::PickupDetails(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_identificationNumberHasBeenSet(false),
    m_identificationExpirationDateHasBeenSet(false),
    m_identificationIssuingOrgHasBeenSet(false),
    m_devicePickupIdHasBeenSet(false)
{
  *this = jsonValue;
}

PickupDetails& PickupDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumber"))
  {
    m_phoneNumber = jsonValue.GetString("PhoneNumber");

    m_phoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Email"))
  {
    m_email = jsonValue.GetString("Email");

    m_emailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentificationNumber"))
  {
    m_identificationNumber = jsonValue.GetString("IdentificationNumber");

    m_identificationNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentificationExpirationDate"))
  {
    m_identificationExpirationDate = jsonValue.GetDouble("IdentificationExpirationDate");

    m_identificationExpirationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentificationIssuingOrg"))
  {
    m_identificationIssuingOrg = jsonValue.GetString("IdentificationIssuingOrg");

    m_identificationIssuingOrgHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DevicePickupId"))
  {
    m_devicePickupId = jsonValue.GetString("DevicePickupId");

    m_devicePickupIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PickupDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_phoneNumberHasBeenSet)
  {
   payload.WithString("PhoneNumber", m_phoneNumber);

  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("Email", m_email);

  }

  if(m_identificationNumberHasBeenSet)
  {
   payload.WithString("IdentificationNumber", m_identificationNumber);

  }

  if(m_identificationExpirationDateHasBeenSet)
  {
   payload.WithDouble("IdentificationExpirationDate", m_identificationExpirationDate.SecondsWithMSPrecision());
  }

  if(m_identificationIssuingOrgHasBeenSet)
  {
   payload.WithString("IdentificationIssuingOrg", m_identificationIssuingOrg);

  }

  if(m_devicePickupIdHasBeenSet)
  {
   payload.WithString("DevicePickupId", m_devicePickupId);

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
