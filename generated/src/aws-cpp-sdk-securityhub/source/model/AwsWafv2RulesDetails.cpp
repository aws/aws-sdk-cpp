/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsWafv2RulesDetails.h>
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

AwsWafv2RulesDetails::AwsWafv2RulesDetails() : 
    m_actionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_overrideActionHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_visibilityConfigHasBeenSet(false)
{
}

AwsWafv2RulesDetails::AwsWafv2RulesDetails(JsonView jsonValue) : 
    m_actionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_overrideActionHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_visibilityConfigHasBeenSet(false)
{
  *this = jsonValue;
}

AwsWafv2RulesDetails& AwsWafv2RulesDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = jsonValue.GetObject("Action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OverrideAction"))
  {
    m_overrideAction = jsonValue.GetString("OverrideAction");

    m_overrideActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Priority"))
  {
    m_priority = jsonValue.GetInteger("Priority");

    m_priorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VisibilityConfig"))
  {
    m_visibilityConfig = jsonValue.GetObject("VisibilityConfig");

    m_visibilityConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsWafv2RulesDetails::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithObject("Action", m_action.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_overrideActionHasBeenSet)
  {
   payload.WithString("OverrideAction", m_overrideAction);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  if(m_visibilityConfigHasBeenSet)
  {
   payload.WithObject("VisibilityConfig", m_visibilityConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
