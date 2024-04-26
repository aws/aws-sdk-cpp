/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/oam/model/LinkConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OAM
{
namespace Model
{

LinkConfiguration::LinkConfiguration() : 
    m_logGroupConfigurationHasBeenSet(false),
    m_metricConfigurationHasBeenSet(false)
{
}

LinkConfiguration::LinkConfiguration(JsonView jsonValue) : 
    m_logGroupConfigurationHasBeenSet(false),
    m_metricConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

LinkConfiguration& LinkConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogGroupConfiguration"))
  {
    m_logGroupConfiguration = jsonValue.GetObject("LogGroupConfiguration");

    m_logGroupConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricConfiguration"))
  {
    m_metricConfiguration = jsonValue.GetObject("MetricConfiguration");

    m_metricConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue LinkConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_logGroupConfigurationHasBeenSet)
  {
   payload.WithObject("LogGroupConfiguration", m_logGroupConfiguration.Jsonize());

  }

  if(m_metricConfigurationHasBeenSet)
  {
   payload.WithObject("MetricConfiguration", m_metricConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace OAM
} // namespace Aws
