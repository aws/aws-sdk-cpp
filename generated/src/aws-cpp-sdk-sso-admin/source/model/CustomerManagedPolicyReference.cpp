/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/CustomerManagedPolicyReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

CustomerManagedPolicyReference::CustomerManagedPolicyReference() : 
    m_nameHasBeenSet(false),
    m_pathHasBeenSet(false)
{
}

CustomerManagedPolicyReference::CustomerManagedPolicyReference(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_pathHasBeenSet(false)
{
  *this = jsonValue;
}

CustomerManagedPolicyReference& CustomerManagedPolicyReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomerManagedPolicyReference::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
