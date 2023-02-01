/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/DomainPrice.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

DomainPrice::DomainPrice() : 
    m_nameHasBeenSet(false),
    m_registrationPriceHasBeenSet(false),
    m_transferPriceHasBeenSet(false),
    m_renewalPriceHasBeenSet(false),
    m_changeOwnershipPriceHasBeenSet(false),
    m_restorationPriceHasBeenSet(false)
{
}

DomainPrice::DomainPrice(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_registrationPriceHasBeenSet(false),
    m_transferPriceHasBeenSet(false),
    m_renewalPriceHasBeenSet(false),
    m_changeOwnershipPriceHasBeenSet(false),
    m_restorationPriceHasBeenSet(false)
{
  *this = jsonValue;
}

DomainPrice& DomainPrice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegistrationPrice"))
  {
    m_registrationPrice = jsonValue.GetObject("RegistrationPrice");

    m_registrationPriceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransferPrice"))
  {
    m_transferPrice = jsonValue.GetObject("TransferPrice");

    m_transferPriceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RenewalPrice"))
  {
    m_renewalPrice = jsonValue.GetObject("RenewalPrice");

    m_renewalPriceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChangeOwnershipPrice"))
  {
    m_changeOwnershipPrice = jsonValue.GetObject("ChangeOwnershipPrice");

    m_changeOwnershipPriceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RestorationPrice"))
  {
    m_restorationPrice = jsonValue.GetObject("RestorationPrice");

    m_restorationPriceHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainPrice::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_registrationPriceHasBeenSet)
  {
   payload.WithObject("RegistrationPrice", m_registrationPrice.Jsonize());

  }

  if(m_transferPriceHasBeenSet)
  {
   payload.WithObject("TransferPrice", m_transferPrice.Jsonize());

  }

  if(m_renewalPriceHasBeenSet)
  {
   payload.WithObject("RenewalPrice", m_renewalPrice.Jsonize());

  }

  if(m_changeOwnershipPriceHasBeenSet)
  {
   payload.WithObject("ChangeOwnershipPrice", m_changeOwnershipPrice.Jsonize());

  }

  if(m_restorationPriceHasBeenSet)
  {
   payload.WithObject("RestorationPrice", m_restorationPrice.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
