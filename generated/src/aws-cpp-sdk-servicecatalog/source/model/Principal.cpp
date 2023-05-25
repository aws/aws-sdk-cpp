/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/Principal.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

Principal::Principal() : 
    m_principalARNHasBeenSet(false),
    m_principalType(PrincipalType::NOT_SET),
    m_principalTypeHasBeenSet(false)
{
}

Principal::Principal(JsonView jsonValue) : 
    m_principalARNHasBeenSet(false),
    m_principalType(PrincipalType::NOT_SET),
    m_principalTypeHasBeenSet(false)
{
  *this = jsonValue;
}

Principal& Principal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PrincipalARN"))
  {
    m_principalARN = jsonValue.GetString("PrincipalARN");

    m_principalARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrincipalType"))
  {
    m_principalType = PrincipalTypeMapper::GetPrincipalTypeForName(jsonValue.GetString("PrincipalType"));

    m_principalTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue Principal::Jsonize() const
{
  JsonValue payload;

  if(m_principalARNHasBeenSet)
  {
   payload.WithString("PrincipalARN", m_principalARN);

  }

  if(m_principalTypeHasBeenSet)
  {
   payload.WithString("PrincipalType", PrincipalTypeMapper::GetNameForPrincipalType(m_principalType));
  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
