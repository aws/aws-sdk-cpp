/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/ListResourcePoliciesResponseResourcePolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MPA
{
namespace Model
{

ListResourcePoliciesResponseResourcePolicy::ListResourcePoliciesResponseResourcePolicy(JsonView jsonValue)
{
  *this = jsonValue;
}

ListResourcePoliciesResponseResourcePolicy& ListResourcePoliciesResponseResourcePolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicyArn"))
  {
    m_policyArn = jsonValue.GetString("PolicyArn");
    m_policyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PolicyType"))
  {
    m_policyType = PolicyTypeMapper::GetPolicyTypeForName(jsonValue.GetString("PolicyType"));
    m_policyTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PolicyName"))
  {
    m_policyName = jsonValue.GetString("PolicyName");
    m_policyNameHasBeenSet = true;
  }
  return *this;
}

JsonValue ListResourcePoliciesResponseResourcePolicy::Jsonize() const
{
  JsonValue payload;

  if(m_policyArnHasBeenSet)
  {
   payload.WithString("PolicyArn", m_policyArn);

  }

  if(m_policyTypeHasBeenSet)
  {
   payload.WithString("PolicyType", PolicyTypeMapper::GetNameForPolicyType(m_policyType));
  }

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("PolicyName", m_policyName);

  }

  return payload;
}

} // namespace Model
} // namespace MPA
} // namespace Aws
