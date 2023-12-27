/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/WebExperienceAuthConfiguration.h>
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

WebExperienceAuthConfiguration::WebExperienceAuthConfiguration() : 
    m_samlConfigurationHasBeenSet(false)
{
}

WebExperienceAuthConfiguration::WebExperienceAuthConfiguration(JsonView jsonValue) : 
    m_samlConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

WebExperienceAuthConfiguration& WebExperienceAuthConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("samlConfiguration"))
  {
    m_samlConfiguration = jsonValue.GetObject("samlConfiguration");

    m_samlConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue WebExperienceAuthConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_samlConfigurationHasBeenSet)
  {
   payload.WithObject("samlConfiguration", m_samlConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
