/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/ResourcePolicy.h>
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

ResourcePolicy::ResourcePolicy() : 
    m_resourcePolicySummaryHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

ResourcePolicy::ResourcePolicy(JsonView jsonValue) : 
    m_resourcePolicySummaryHasBeenSet(false),
    m_contentHasBeenSet(false)
{
  *this = jsonValue;
}

ResourcePolicy& ResourcePolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourcePolicySummary"))
  {
    m_resourcePolicySummary = jsonValue.GetObject("ResourcePolicySummary");

    m_resourcePolicySummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");

    m_contentHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourcePolicy::Jsonize() const
{
  JsonValue payload;

  if(m_resourcePolicySummaryHasBeenSet)
  {
   payload.WithObject("ResourcePolicySummary", m_resourcePolicySummary.Jsonize());

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  return payload;
}

} // namespace Model
} // namespace Organizations
} // namespace Aws
