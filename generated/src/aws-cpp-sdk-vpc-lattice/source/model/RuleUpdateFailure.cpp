/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/RuleUpdateFailure.h>
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

RuleUpdateFailure::RuleUpdateFailure() : 
    m_failureCodeHasBeenSet(false),
    m_failureMessageHasBeenSet(false),
    m_ruleIdentifierHasBeenSet(false)
{
}

RuleUpdateFailure::RuleUpdateFailure(JsonView jsonValue) : 
    m_failureCodeHasBeenSet(false),
    m_failureMessageHasBeenSet(false),
    m_ruleIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

RuleUpdateFailure& RuleUpdateFailure::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = jsonValue.GetString("failureCode");

    m_failureCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureMessage"))
  {
    m_failureMessage = jsonValue.GetString("failureMessage");

    m_failureMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ruleIdentifier"))
  {
    m_ruleIdentifier = jsonValue.GetString("ruleIdentifier");

    m_ruleIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleUpdateFailure::Jsonize() const
{
  JsonValue payload;

  if(m_failureCodeHasBeenSet)
  {
   payload.WithString("failureCode", m_failureCode);

  }

  if(m_failureMessageHasBeenSet)
  {
   payload.WithString("failureMessage", m_failureMessage);

  }

  if(m_ruleIdentifierHasBeenSet)
  {
   payload.WithString("ruleIdentifier", m_ruleIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
