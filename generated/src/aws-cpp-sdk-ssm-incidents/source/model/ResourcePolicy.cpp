/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/ResourcePolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

ResourcePolicy::ResourcePolicy() : 
    m_policyDocumentHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_ramResourceShareRegionHasBeenSet(false)
{
}

ResourcePolicy::ResourcePolicy(JsonView jsonValue) : 
    m_policyDocumentHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_ramResourceShareRegionHasBeenSet(false)
{
  *this = jsonValue;
}

ResourcePolicy& ResourcePolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("policyDocument"))
  {
    m_policyDocument = jsonValue.GetString("policyDocument");

    m_policyDocumentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("policyId"))
  {
    m_policyId = jsonValue.GetString("policyId");

    m_policyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ramResourceShareRegion"))
  {
    m_ramResourceShareRegion = jsonValue.GetString("ramResourceShareRegion");

    m_ramResourceShareRegionHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourcePolicy::Jsonize() const
{
  JsonValue payload;

  if(m_policyDocumentHasBeenSet)
  {
   payload.WithString("policyDocument", m_policyDocument);

  }

  if(m_policyIdHasBeenSet)
  {
   payload.WithString("policyId", m_policyId);

  }

  if(m_ramResourceShareRegionHasBeenSet)
  {
   payload.WithString("ramResourceShareRegion", m_ramResourceShareRegion);

  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
