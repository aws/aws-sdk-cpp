/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcrRepositoryLifecyclePolicyDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEcrRepositoryLifecyclePolicyDetails::AwsEcrRepositoryLifecyclePolicyDetails() : 
    m_lifecyclePolicyTextHasBeenSet(false),
    m_registryIdHasBeenSet(false)
{
}

AwsEcrRepositoryLifecyclePolicyDetails::AwsEcrRepositoryLifecyclePolicyDetails(JsonView jsonValue) : 
    m_lifecyclePolicyTextHasBeenSet(false),
    m_registryIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcrRepositoryLifecyclePolicyDetails& AwsEcrRepositoryLifecyclePolicyDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LifecyclePolicyText"))
  {
    m_lifecyclePolicyText = jsonValue.GetString("LifecyclePolicyText");

    m_lifecyclePolicyTextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegistryId"))
  {
    m_registryId = jsonValue.GetString("RegistryId");

    m_registryIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcrRepositoryLifecyclePolicyDetails::Jsonize() const
{
  JsonValue payload;

  if(m_lifecyclePolicyTextHasBeenSet)
  {
   payload.WithString("LifecyclePolicyText", m_lifecyclePolicyText);

  }

  if(m_registryIdHasBeenSet)
  {
   payload.WithString("RegistryId", m_registryId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
