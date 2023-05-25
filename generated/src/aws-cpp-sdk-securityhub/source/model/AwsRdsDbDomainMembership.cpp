/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRdsDbDomainMembership.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsRdsDbDomainMembership::AwsRdsDbDomainMembership() : 
    m_domainHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_fqdnHasBeenSet(false),
    m_iamRoleNameHasBeenSet(false)
{
}

AwsRdsDbDomainMembership::AwsRdsDbDomainMembership(JsonView jsonValue) : 
    m_domainHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_fqdnHasBeenSet(false),
    m_iamRoleNameHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRdsDbDomainMembership& AwsRdsDbDomainMembership::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");

    m_domainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Fqdn"))
  {
    m_fqdn = jsonValue.GetString("Fqdn");

    m_fqdnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamRoleName"))
  {
    m_iamRoleName = jsonValue.GetString("IamRoleName");

    m_iamRoleNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRdsDbDomainMembership::Jsonize() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_fqdnHasBeenSet)
  {
   payload.WithString("Fqdn", m_fqdn);

  }

  if(m_iamRoleNameHasBeenSet)
  {
   payload.WithString("IamRoleName", m_iamRoleName);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
