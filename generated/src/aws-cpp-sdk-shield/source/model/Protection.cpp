/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/Protection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

Protection::Protection() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_healthCheckIdsHasBeenSet(false),
    m_protectionArnHasBeenSet(false),
    m_applicationLayerAutomaticResponseConfigurationHasBeenSet(false)
{
}

Protection::Protection(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_healthCheckIdsHasBeenSet(false),
    m_protectionArnHasBeenSet(false),
    m_applicationLayerAutomaticResponseConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

Protection& Protection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HealthCheckIds"))
  {
    Aws::Utils::Array<JsonView> healthCheckIdsJsonList = jsonValue.GetArray("HealthCheckIds");
    for(unsigned healthCheckIdsIndex = 0; healthCheckIdsIndex < healthCheckIdsJsonList.GetLength(); ++healthCheckIdsIndex)
    {
      m_healthCheckIds.push_back(healthCheckIdsJsonList[healthCheckIdsIndex].AsString());
    }
    m_healthCheckIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProtectionArn"))
  {
    m_protectionArn = jsonValue.GetString("ProtectionArn");

    m_protectionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationLayerAutomaticResponseConfiguration"))
  {
    m_applicationLayerAutomaticResponseConfiguration = jsonValue.GetObject("ApplicationLayerAutomaticResponseConfiguration");

    m_applicationLayerAutomaticResponseConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue Protection::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_healthCheckIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> healthCheckIdsJsonList(m_healthCheckIds.size());
   for(unsigned healthCheckIdsIndex = 0; healthCheckIdsIndex < healthCheckIdsJsonList.GetLength(); ++healthCheckIdsIndex)
   {
     healthCheckIdsJsonList[healthCheckIdsIndex].AsString(m_healthCheckIds[healthCheckIdsIndex]);
   }
   payload.WithArray("HealthCheckIds", std::move(healthCheckIdsJsonList));

  }

  if(m_protectionArnHasBeenSet)
  {
   payload.WithString("ProtectionArn", m_protectionArn);

  }

  if(m_applicationLayerAutomaticResponseConfigurationHasBeenSet)
  {
   payload.WithObject("ApplicationLayerAutomaticResponseConfiguration", m_applicationLayerAutomaticResponseConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
