/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/RuleAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

RuleAction::RuleAction() : 
    m_fixedResponseHasBeenSet(false),
    m_forwardHasBeenSet(false)
{
}

RuleAction::RuleAction(JsonView jsonValue) : 
    m_fixedResponseHasBeenSet(false),
    m_forwardHasBeenSet(false)
{
  *this = jsonValue;
}

RuleAction& RuleAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fixedResponse"))
  {
    m_fixedResponse = jsonValue.GetObject("fixedResponse");

    m_fixedResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("forward"))
  {
    m_forward = jsonValue.GetObject("forward");

    m_forwardHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleAction::Jsonize() const
{
  JsonValue payload;

  if(m_fixedResponseHasBeenSet)
  {
   payload.WithObject("fixedResponse", m_fixedResponse.Jsonize());

  }

  if(m_forwardHasBeenSet)
  {
   payload.WithObject("forward", m_forward.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
