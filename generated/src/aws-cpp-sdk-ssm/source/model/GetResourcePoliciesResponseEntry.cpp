/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/GetResourcePoliciesResponseEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

GetResourcePoliciesResponseEntry::GetResourcePoliciesResponseEntry() : 
    m_policyIdHasBeenSet(false),
    m_policyHashHasBeenSet(false),
    m_policyHasBeenSet(false)
{
}

GetResourcePoliciesResponseEntry::GetResourcePoliciesResponseEntry(JsonView jsonValue) : 
    m_policyIdHasBeenSet(false),
    m_policyHashHasBeenSet(false),
    m_policyHasBeenSet(false)
{
  *this = jsonValue;
}

GetResourcePoliciesResponseEntry& GetResourcePoliciesResponseEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicyId"))
  {
    m_policyId = jsonValue.GetString("PolicyId");

    m_policyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyHash"))
  {
    m_policyHash = jsonValue.GetString("PolicyHash");

    m_policyHashHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Policy"))
  {
    m_policy = jsonValue.GetString("Policy");

    m_policyHasBeenSet = true;
  }

  return *this;
}

JsonValue GetResourcePoliciesResponseEntry::Jsonize() const
{
  JsonValue payload;

  if(m_policyIdHasBeenSet)
  {
   payload.WithString("PolicyId", m_policyId);

  }

  if(m_policyHashHasBeenSet)
  {
   payload.WithString("PolicyHash", m_policyHash);

  }

  if(m_policyHasBeenSet)
  {
   payload.WithString("Policy", m_policy);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
