/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/ResourcePolicySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Organizations
{
namespace Model
{

ResourcePolicySummary::ResourcePolicySummary() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false)
{
}

ResourcePolicySummary::ResourcePolicySummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false)
{
  *this = jsonValue;
}

ResourcePolicySummary& ResourcePolicySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourcePolicySummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  return payload;
}

} // namespace Model
} // namespace Organizations
} // namespace Aws
