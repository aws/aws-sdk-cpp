/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/Action.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

Action::Action() : 
    m_ssmAutomationHasBeenSet(false)
{
}

Action::Action(JsonView jsonValue) : 
    m_ssmAutomationHasBeenSet(false)
{
  *this = jsonValue;
}

Action& Action::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ssmAutomation"))
  {
    m_ssmAutomation = jsonValue.GetObject("ssmAutomation");

    m_ssmAutomationHasBeenSet = true;
  }

  return *this;
}

JsonValue Action::Jsonize() const
{
  JsonValue payload;

  if(m_ssmAutomationHasBeenSet)
  {
   payload.WithObject("ssmAutomation", m_ssmAutomation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
