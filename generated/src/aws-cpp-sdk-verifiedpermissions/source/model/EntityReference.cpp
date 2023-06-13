/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/EntityReference.h>
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

EntityReference::EntityReference() : 
    m_unspecified(false),
    m_unspecifiedHasBeenSet(false),
    m_identifierHasBeenSet(false)
{
}

EntityReference::EntityReference(JsonView jsonValue) : 
    m_unspecified(false),
    m_unspecifiedHasBeenSet(false),
    m_identifierHasBeenSet(false)
{
  *this = jsonValue;
}

EntityReference& EntityReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("unspecified"))
  {
    m_unspecified = jsonValue.GetBool("unspecified");

    m_unspecifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("identifier"))
  {
    m_identifier = jsonValue.GetObject("identifier");

    m_identifierHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityReference::Jsonize() const
{
  JsonValue payload;

  if(m_unspecifiedHasBeenSet)
  {
   payload.WithBool("unspecified", m_unspecified);

  }

  if(m_identifierHasBeenSet)
  {
   payload.WithObject("identifier", m_identifier.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
