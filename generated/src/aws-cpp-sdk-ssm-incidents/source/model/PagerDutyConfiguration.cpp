/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/PagerDutyConfiguration.h>
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

PagerDutyConfiguration::PagerDutyConfiguration() : 
    m_nameHasBeenSet(false),
    m_pagerDutyIncidentConfigurationHasBeenSet(false),
    m_secretIdHasBeenSet(false)
{
}

PagerDutyConfiguration::PagerDutyConfiguration(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_pagerDutyIncidentConfigurationHasBeenSet(false),
    m_secretIdHasBeenSet(false)
{
  *this = jsonValue;
}

PagerDutyConfiguration& PagerDutyConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pagerDutyIncidentConfiguration"))
  {
    m_pagerDutyIncidentConfiguration = jsonValue.GetObject("pagerDutyIncidentConfiguration");

    m_pagerDutyIncidentConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secretId"))
  {
    m_secretId = jsonValue.GetString("secretId");

    m_secretIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PagerDutyConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_pagerDutyIncidentConfigurationHasBeenSet)
  {
   payload.WithObject("pagerDutyIncidentConfiguration", m_pagerDutyIncidentConfiguration.Jsonize());

  }

  if(m_secretIdHasBeenSet)
  {
   payload.WithString("secretId", m_secretId);

  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
