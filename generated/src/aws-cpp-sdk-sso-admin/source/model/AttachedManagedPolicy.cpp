/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/AttachedManagedPolicy.h>
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

AttachedManagedPolicy::AttachedManagedPolicy() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

AttachedManagedPolicy::AttachedManagedPolicy(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

AttachedManagedPolicy& AttachedManagedPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue AttachedManagedPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
