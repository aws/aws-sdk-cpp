/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/OrganizationSummary.h>
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

OrganizationSummary::OrganizationSummary() : 
    m_organizationIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_defaultMailDomainHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

OrganizationSummary::OrganizationSummary(JsonView jsonValue) : 
    m_organizationIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_defaultMailDomainHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationSummary& OrganizationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OrganizationId"))
  {
    m_organizationId = jsonValue.GetString("OrganizationId");

    m_organizationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Alias"))
  {
    m_alias = jsonValue.GetString("Alias");

    m_aliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultMailDomain"))
  {
    m_defaultMailDomain = jsonValue.GetString("DefaultMailDomain");

    m_defaultMailDomainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetString("State");

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

  }

  if(m_aliasHasBeenSet)
  {
   payload.WithString("Alias", m_alias);

  }

  if(m_defaultMailDomainHasBeenSet)
  {
   payload.WithString("DefaultMailDomain", m_defaultMailDomain);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", m_state);

  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws
