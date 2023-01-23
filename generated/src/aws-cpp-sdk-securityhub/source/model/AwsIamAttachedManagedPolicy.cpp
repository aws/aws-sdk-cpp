/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsIamAttachedManagedPolicy.h>
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

AwsIamAttachedManagedPolicy::AwsIamAttachedManagedPolicy() : 
    m_policyNameHasBeenSet(false),
    m_policyArnHasBeenSet(false)
{
}

AwsIamAttachedManagedPolicy::AwsIamAttachedManagedPolicy(JsonView jsonValue) : 
    m_policyNameHasBeenSet(false),
    m_policyArnHasBeenSet(false)
{
  *this = jsonValue;
}

AwsIamAttachedManagedPolicy& AwsIamAttachedManagedPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicyName"))
  {
    m_policyName = jsonValue.GetString("PolicyName");

    m_policyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyArn"))
  {
    m_policyArn = jsonValue.GetString("PolicyArn");

    m_policyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsIamAttachedManagedPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("PolicyName", m_policyName);

  }

  if(m_policyArnHasBeenSet)
  {
   payload.WithString("PolicyArn", m_policyArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
