/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Ipv6CidrBlockAssociation.h>
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

Ipv6CidrBlockAssociation::Ipv6CidrBlockAssociation() : 
    m_associationIdHasBeenSet(false),
    m_ipv6CidrBlockHasBeenSet(false),
    m_cidrBlockStateHasBeenSet(false)
{
}

Ipv6CidrBlockAssociation::Ipv6CidrBlockAssociation(JsonView jsonValue) : 
    m_associationIdHasBeenSet(false),
    m_ipv6CidrBlockHasBeenSet(false),
    m_cidrBlockStateHasBeenSet(false)
{
  *this = jsonValue;
}

Ipv6CidrBlockAssociation& Ipv6CidrBlockAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssociationId"))
  {
    m_associationId = jsonValue.GetString("AssociationId");

    m_associationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ipv6CidrBlock"))
  {
    m_ipv6CidrBlock = jsonValue.GetString("Ipv6CidrBlock");

    m_ipv6CidrBlockHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CidrBlockState"))
  {
    m_cidrBlockState = jsonValue.GetString("CidrBlockState");

    m_cidrBlockStateHasBeenSet = true;
  }

  return *this;
}

JsonValue Ipv6CidrBlockAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_associationIdHasBeenSet)
  {
   payload.WithString("AssociationId", m_associationId);

  }

  if(m_ipv6CidrBlockHasBeenSet)
  {
   payload.WithString("Ipv6CidrBlock", m_ipv6CidrBlock);

  }

  if(m_cidrBlockStateHasBeenSet)
  {
   payload.WithString("CidrBlockState", m_cidrBlockState);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
