/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/Integration.h>
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

Integration::Integration() : 
    m_pagerDutyConfigurationHasBeenSet(false)
{
}

Integration::Integration(JsonView jsonValue) : 
    m_pagerDutyConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

Integration& Integration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pagerDutyConfiguration"))
  {
    m_pagerDutyConfiguration = jsonValue.GetObject("pagerDutyConfiguration");

    m_pagerDutyConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue Integration::Jsonize() const
{
  JsonValue payload;

  if(m_pagerDutyConfigurationHasBeenSet)
  {
   payload.WithObject("pagerDutyConfiguration", m_pagerDutyConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
