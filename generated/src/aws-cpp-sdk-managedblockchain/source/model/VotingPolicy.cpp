/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/VotingPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

VotingPolicy::VotingPolicy() : 
    m_approvalThresholdPolicyHasBeenSet(false)
{
}

VotingPolicy::VotingPolicy(JsonView jsonValue) : 
    m_approvalThresholdPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

VotingPolicy& VotingPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApprovalThresholdPolicy"))
  {
    m_approvalThresholdPolicy = jsonValue.GetObject("ApprovalThresholdPolicy");

    m_approvalThresholdPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue VotingPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_approvalThresholdPolicyHasBeenSet)
  {
   payload.WithObject("ApprovalThresholdPolicy", m_approvalThresholdPolicy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
