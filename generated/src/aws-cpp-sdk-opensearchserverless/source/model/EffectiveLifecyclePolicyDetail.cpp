/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/EffectiveLifecyclePolicyDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

EffectiveLifecyclePolicyDetail::EffectiveLifecyclePolicyDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

EffectiveLifecyclePolicyDetail& EffectiveLifecyclePolicyDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = LifecyclePolicyTypeMapper::GetLifecyclePolicyTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetString("resource");
    m_resourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("policyName"))
  {
    m_policyName = jsonValue.GetString("policyName");
    m_policyNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("retentionPeriod"))
  {
    m_retentionPeriod = jsonValue.GetString("retentionPeriod");
    m_retentionPeriodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("noMinRetentionPeriod"))
  {
    m_noMinRetentionPeriod = jsonValue.GetBool("noMinRetentionPeriod");
    m_noMinRetentionPeriodHasBeenSet = true;
  }
  return *this;
}

JsonValue EffectiveLifecyclePolicyDetail::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", LifecyclePolicyTypeMapper::GetNameForLifecyclePolicyType(m_type));
  }

  if(m_resourceHasBeenSet)
  {
   payload.WithString("resource", m_resource);

  }

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("policyName", m_policyName);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_retentionPeriodHasBeenSet)
  {
   payload.WithString("retentionPeriod", m_retentionPeriod);

  }

  if(m_noMinRetentionPeriodHasBeenSet)
  {
   payload.WithBool("noMinRetentionPeriod", m_noMinRetentionPeriod);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
