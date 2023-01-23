/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/DomainSummary.h>
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

DomainSummary::DomainSummary() : 
    m_domainNameHasBeenSet(false),
    m_autoRenew(false),
    m_autoRenewHasBeenSet(false),
    m_transferLock(false),
    m_transferLockHasBeenSet(false),
    m_expiryHasBeenSet(false)
{
}

DomainSummary::DomainSummary(JsonView jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_autoRenew(false),
    m_autoRenewHasBeenSet(false),
    m_transferLock(false),
    m_transferLockHasBeenSet(false),
    m_expiryHasBeenSet(false)
{
  *this = jsonValue;
}

DomainSummary& DomainSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoRenew"))
  {
    m_autoRenew = jsonValue.GetBool("AutoRenew");

    m_autoRenewHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransferLock"))
  {
    m_transferLock = jsonValue.GetBool("TransferLock");

    m_transferLockHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Expiry"))
  {
    m_expiry = jsonValue.GetDouble("Expiry");

    m_expiryHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainSummary::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_autoRenewHasBeenSet)
  {
   payload.WithBool("AutoRenew", m_autoRenew);

  }

  if(m_transferLockHasBeenSet)
  {
   payload.WithBool("TransferLock", m_transferLock);

  }

  if(m_expiryHasBeenSet)
  {
   payload.WithDouble("Expiry", m_expiry.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
