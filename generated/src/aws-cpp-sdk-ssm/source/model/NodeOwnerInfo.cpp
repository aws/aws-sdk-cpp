/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/NodeOwnerInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

NodeOwnerInfo::NodeOwnerInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

NodeOwnerInfo& NodeOwnerInfo::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("OrganizationalUnitPath"))
  {
    m_organizationalUnitPath = jsonValue.GetString("OrganizationalUnitPath");
    m_organizationalUnitPathHasBeenSet = true;
  }
  return *this;
}

JsonValue NodeOwnerInfo::Jsonize() const
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

  if(m_organizationalUnitPathHasBeenSet)
  {
   payload.WithString("OrganizationalUnitPath", m_organizationalUnitPath);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
