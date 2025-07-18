/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/TrafficPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

TrafficPolicy::TrafficPolicy(JsonView jsonValue)
{
  *this = jsonValue;
}

TrafficPolicy& TrafficPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrafficPolicyName"))
  {
    m_trafficPolicyName = jsonValue.GetString("TrafficPolicyName");
    m_trafficPolicyNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrafficPolicyId"))
  {
    m_trafficPolicyId = jsonValue.GetString("TrafficPolicyId");
    m_trafficPolicyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DefaultAction"))
  {
    m_defaultAction = AcceptActionMapper::GetAcceptActionForName(jsonValue.GetString("DefaultAction"));
    m_defaultActionHasBeenSet = true;
  }
  return *this;
}

JsonValue TrafficPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_trafficPolicyNameHasBeenSet)
  {
   payload.WithString("TrafficPolicyName", m_trafficPolicyName);

  }

  if(m_trafficPolicyIdHasBeenSet)
  {
   payload.WithString("TrafficPolicyId", m_trafficPolicyId);

  }

  if(m_defaultActionHasBeenSet)
  {
   payload.WithString("DefaultAction", AcceptActionMapper::GetNameForAcceptAction(m_defaultAction));
  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
