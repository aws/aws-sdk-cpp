/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/IdentitySourceFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

IdentitySourceFilter::IdentitySourceFilter() : 
    m_principalEntityTypeHasBeenSet(false)
{
}

IdentitySourceFilter::IdentitySourceFilter(JsonView jsonValue) : 
    m_principalEntityTypeHasBeenSet(false)
{
  *this = jsonValue;
}

IdentitySourceFilter& IdentitySourceFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("principalEntityType"))
  {
    m_principalEntityType = jsonValue.GetString("principalEntityType");

    m_principalEntityTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue IdentitySourceFilter::Jsonize() const
{
  JsonValue payload;

  if(m_principalEntityTypeHasBeenSet)
  {
   payload.WithString("principalEntityType", m_principalEntityType);

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
