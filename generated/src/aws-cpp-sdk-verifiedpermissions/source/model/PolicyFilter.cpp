/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/PolicyFilter.h>
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

PolicyFilter::PolicyFilter() : 
    m_principalHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_policyType(PolicyType::NOT_SET),
    m_policyTypeHasBeenSet(false),
    m_policyTemplateIdHasBeenSet(false)
{
}

PolicyFilter::PolicyFilter(JsonView jsonValue) : 
    m_principalHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_policyType(PolicyType::NOT_SET),
    m_policyTypeHasBeenSet(false),
    m_policyTemplateIdHasBeenSet(false)
{
  *this = jsonValue;
}

PolicyFilter& PolicyFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("principal"))
  {
    m_principal = jsonValue.GetObject("principal");

    m_principalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetObject("resource");

    m_resourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("policyType"))
  {
    m_policyType = PolicyTypeMapper::GetPolicyTypeForName(jsonValue.GetString("policyType"));

    m_policyTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("policyTemplateId"))
  {
    m_policyTemplateId = jsonValue.GetString("policyTemplateId");

    m_policyTemplateIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PolicyFilter::Jsonize() const
{
  JsonValue payload;

  if(m_principalHasBeenSet)
  {
   payload.WithObject("principal", m_principal.Jsonize());

  }

  if(m_resourceHasBeenSet)
  {
   payload.WithObject("resource", m_resource.Jsonize());

  }

  if(m_policyTypeHasBeenSet)
  {
   payload.WithString("policyType", PolicyTypeMapper::GetNameForPolicyType(m_policyType));
  }

  if(m_policyTemplateIdHasBeenSet)
  {
   payload.WithString("policyTemplateId", m_policyTemplateId);

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
