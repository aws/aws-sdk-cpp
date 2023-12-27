/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/ApplicationPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

ApplicationPolicy::ApplicationPolicy() : 
    m_policyObjectIdentifierHasBeenSet(false),
    m_policyType(ApplicationPolicyType::NOT_SET),
    m_policyTypeHasBeenSet(false)
{
}

ApplicationPolicy::ApplicationPolicy(JsonView jsonValue) : 
    m_policyObjectIdentifierHasBeenSet(false),
    m_policyType(ApplicationPolicyType::NOT_SET),
    m_policyTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationPolicy& ApplicationPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicyObjectIdentifier"))
  {
    m_policyObjectIdentifier = jsonValue.GetString("PolicyObjectIdentifier");

    m_policyObjectIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyType"))
  {
    m_policyType = ApplicationPolicyTypeMapper::GetApplicationPolicyTypeForName(jsonValue.GetString("PolicyType"));

    m_policyTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_policyObjectIdentifierHasBeenSet)
  {
   payload.WithString("PolicyObjectIdentifier", m_policyObjectIdentifier);

  }

  if(m_policyTypeHasBeenSet)
  {
   payload.WithString("PolicyType", ApplicationPolicyTypeMapper::GetNameForApplicationPolicyType(m_policyType));
  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
