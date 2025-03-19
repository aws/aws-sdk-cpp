/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ActionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

ActionConfiguration::ActionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ActionConfiguration& ActionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = jsonValue.GetString("action");
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("filterConfiguration"))
  {
    m_filterConfiguration = jsonValue.GetObject("filterConfiguration");
    m_filterConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ActionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", m_action);

  }

  if(m_filterConfigurationHasBeenSet)
  {
   payload.WithObject("filterConfiguration", m_filterConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
