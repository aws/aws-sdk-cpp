/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/ResourcePolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

ResourcePolicy::ResourcePolicy() : 
    m_policyHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
}

ResourcePolicy::ResourcePolicy(JsonView jsonValue) : 
    m_policyHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
  *this = jsonValue;
}

ResourcePolicy& ResourcePolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("policy"))
  {
    m_policy = jsonValue.GetString("policy");

    m_policyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");

    m_resourceArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourcePolicy::Jsonize() const
{
  JsonValue payload;

  if(m_policyHasBeenSet)
  {
   payload.WithString("policy", m_policy);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  return payload;
}

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
