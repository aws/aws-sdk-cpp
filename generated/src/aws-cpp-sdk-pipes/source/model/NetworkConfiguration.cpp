/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/NetworkConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

NetworkConfiguration::NetworkConfiguration() : 
    m_awsvpcConfigurationHasBeenSet(false)
{
}

NetworkConfiguration::NetworkConfiguration(JsonView jsonValue) : 
    m_awsvpcConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkConfiguration& NetworkConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsvpcConfiguration"))
  {
    m_awsvpcConfiguration = jsonValue.GetObject("awsvpcConfiguration");

    m_awsvpcConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_awsvpcConfigurationHasBeenSet)
  {
   payload.WithObject("awsvpcConfiguration", m_awsvpcConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
