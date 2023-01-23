/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/MailDomainSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkMail
{
namespace Model
{

MailDomainSummary::MailDomainSummary() : 
    m_domainNameHasBeenSet(false),
    m_defaultDomain(false),
    m_defaultDomainHasBeenSet(false)
{
}

MailDomainSummary::MailDomainSummary(JsonView jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_defaultDomain(false),
    m_defaultDomainHasBeenSet(false)
{
  *this = jsonValue;
}

MailDomainSummary& MailDomainSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultDomain"))
  {
    m_defaultDomain = jsonValue.GetBool("DefaultDomain");

    m_defaultDomainHasBeenSet = true;
  }

  return *this;
}

JsonValue MailDomainSummary::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_defaultDomainHasBeenSet)
  {
   payload.WithBool("DefaultDomain", m_defaultDomain);

  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws
