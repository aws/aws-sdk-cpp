/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/AwsIdentity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

AwsIdentity::AwsIdentity() : 
    m_externalIdHasBeenSet(false),
    m_principalHasBeenSet(false)
{
}

AwsIdentity::AwsIdentity(JsonView jsonValue) : 
    m_externalIdHasBeenSet(false),
    m_principalHasBeenSet(false)
{
  *this = jsonValue;
}

AwsIdentity& AwsIdentity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("externalId"))
  {
    m_externalId = jsonValue.GetString("externalId");

    m_externalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("principal"))
  {
    m_principal = jsonValue.GetString("principal");

    m_principalHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsIdentity::Jsonize() const
{
  JsonValue payload;

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("externalId", m_externalId);

  }

  if(m_principalHasBeenSet)
  {
   payload.WithString("principal", m_principal);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
