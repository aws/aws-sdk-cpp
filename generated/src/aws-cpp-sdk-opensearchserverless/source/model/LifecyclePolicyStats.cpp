/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/LifecyclePolicyStats.h>
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

LifecyclePolicyStats::LifecyclePolicyStats() : 
    m_retentionPolicyCount(0),
    m_retentionPolicyCountHasBeenSet(false)
{
}

LifecyclePolicyStats::LifecyclePolicyStats(JsonView jsonValue) : 
    m_retentionPolicyCount(0),
    m_retentionPolicyCountHasBeenSet(false)
{
  *this = jsonValue;
}

LifecyclePolicyStats& LifecyclePolicyStats::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RetentionPolicyCount"))
  {
    m_retentionPolicyCount = jsonValue.GetInt64("RetentionPolicyCount");

    m_retentionPolicyCountHasBeenSet = true;
  }

  return *this;
}

JsonValue LifecyclePolicyStats::Jsonize() const
{
  JsonValue payload;

  if(m_retentionPolicyCountHasBeenSet)
  {
   payload.WithInt64("RetentionPolicyCount", m_retentionPolicyCount);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
