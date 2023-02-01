/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/AppIntegrationsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{

AppIntegrationsConfiguration::AppIntegrationsConfiguration() : 
    m_appIntegrationArnHasBeenSet(false),
    m_objectFieldsHasBeenSet(false)
{
}

AppIntegrationsConfiguration::AppIntegrationsConfiguration(JsonView jsonValue) : 
    m_appIntegrationArnHasBeenSet(false),
    m_objectFieldsHasBeenSet(false)
{
  *this = jsonValue;
}

AppIntegrationsConfiguration& AppIntegrationsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appIntegrationArn"))
  {
    m_appIntegrationArn = jsonValue.GetString("appIntegrationArn");

    m_appIntegrationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("objectFields"))
  {
    Aws::Utils::Array<JsonView> objectFieldsJsonList = jsonValue.GetArray("objectFields");
    for(unsigned objectFieldsIndex = 0; objectFieldsIndex < objectFieldsJsonList.GetLength(); ++objectFieldsIndex)
    {
      m_objectFields.push_back(objectFieldsJsonList[objectFieldsIndex].AsString());
    }
    m_objectFieldsHasBeenSet = true;
  }

  return *this;
}

JsonValue AppIntegrationsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_appIntegrationArnHasBeenSet)
  {
   payload.WithString("appIntegrationArn", m_appIntegrationArn);

  }

  if(m_objectFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> objectFieldsJsonList(m_objectFields.size());
   for(unsigned objectFieldsIndex = 0; objectFieldsIndex < objectFieldsJsonList.GetLength(); ++objectFieldsIndex)
   {
     objectFieldsJsonList[objectFieldsIndex].AsString(m_objectFields[objectFieldsIndex]);
   }
   payload.WithArray("objectFields", std::move(objectFieldsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
