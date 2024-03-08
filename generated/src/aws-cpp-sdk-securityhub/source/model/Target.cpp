/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Target.h>
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

Target::Target() : 
    m_accountIdHasBeenSet(false),
    m_organizationalUnitIdHasBeenSet(false),
    m_rootIdHasBeenSet(false)
{
}

Target::Target(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_organizationalUnitIdHasBeenSet(false),
    m_rootIdHasBeenSet(false)
{
  *this = jsonValue;
}

Target& Target::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrganizationalUnitId"))
  {
    m_organizationalUnitId = jsonValue.GetString("OrganizationalUnitId");

    m_organizationalUnitIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RootId"))
  {
    m_rootId = jsonValue.GetString("RootId");

    m_rootIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Target::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_organizationalUnitIdHasBeenSet)
  {
   payload.WithString("OrganizationalUnitId", m_organizationalUnitId);

  }

  if(m_rootIdHasBeenSet)
  {
   payload.WithString("RootId", m_rootId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
