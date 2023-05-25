/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/RuleUpdateSuccess.h>
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

RuleUpdateSuccess::RuleUpdateSuccess() : 
    m_actionHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false),
    m_matchHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false)
{
}

RuleUpdateSuccess::RuleUpdateSuccess(JsonView jsonValue) : 
    m_actionHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false),
    m_matchHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false)
{
  *this = jsonValue;
}

RuleUpdateSuccess& RuleUpdateSuccess::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = jsonValue.GetObject("action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isDefault"))
  {
    m_isDefault = jsonValue.GetBool("isDefault");

    m_isDefaultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("match"))
  {
    m_match = jsonValue.GetObject("match");

    m_matchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("priority"))
  {
    m_priority = jsonValue.GetInteger("priority");

    m_priorityHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleUpdateSuccess::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithObject("action", m_action.Jsonize());

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_isDefaultHasBeenSet)
  {
   payload.WithBool("isDefault", m_isDefault);

  }

  if(m_matchHasBeenSet)
  {
   payload.WithObject("match", m_match.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("priority", m_priority);

  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
