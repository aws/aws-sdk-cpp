﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsIamUserPolicy.h>
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

AwsIamUserPolicy::AwsIamUserPolicy(JsonView jsonValue)
{
  *this = jsonValue;
}

AwsIamUserPolicy& AwsIamUserPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicyName"))
  {
    m_policyName = jsonValue.GetString("PolicyName");
    m_policyNameHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsIamUserPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("PolicyName", m_policyName);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
