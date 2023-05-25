/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/WeightedTargetGroup.h>
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

WeightedTargetGroup::WeightedTargetGroup() : 
    m_targetGroupIdentifierHasBeenSet(false),
    m_weight(0),
    m_weightHasBeenSet(false)
{
}

WeightedTargetGroup::WeightedTargetGroup(JsonView jsonValue) : 
    m_targetGroupIdentifierHasBeenSet(false),
    m_weight(0),
    m_weightHasBeenSet(false)
{
  *this = jsonValue;
}

WeightedTargetGroup& WeightedTargetGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("targetGroupIdentifier"))
  {
    m_targetGroupIdentifier = jsonValue.GetString("targetGroupIdentifier");

    m_targetGroupIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("weight"))
  {
    m_weight = jsonValue.GetInteger("weight");

    m_weightHasBeenSet = true;
  }

  return *this;
}

JsonValue WeightedTargetGroup::Jsonize() const
{
  JsonValue payload;

  if(m_targetGroupIdentifierHasBeenSet)
  {
   payload.WithString("targetGroupIdentifier", m_targetGroupIdentifier);

  }

  if(m_weightHasBeenSet)
  {
   payload.WithInteger("weight", m_weight);

  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
