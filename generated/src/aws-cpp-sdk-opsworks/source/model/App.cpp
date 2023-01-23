/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/App.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

App::App() : 
    m_appIdHasBeenSet(false),
    m_stackIdHasBeenSet(false),
    m_shortnameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dataSourcesHasBeenSet(false),
    m_type(AppType::NOT_SET),
    m_typeHasBeenSet(false),
    m_appSourceHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_enableSsl(false),
    m_enableSslHasBeenSet(false),
    m_sslConfigurationHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

App::App(JsonView jsonValue) : 
    m_appIdHasBeenSet(false),
    m_stackIdHasBeenSet(false),
    m_shortnameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dataSourcesHasBeenSet(false),
    m_type(AppType::NOT_SET),
    m_typeHasBeenSet(false),
    m_appSourceHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_enableSsl(false),
    m_enableSslHasBeenSet(false),
    m_sslConfigurationHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
  *this = jsonValue;
}

App& App::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AppId"))
  {
    m_appId = jsonValue.GetString("AppId");

    m_appIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StackId"))
  {
    m_stackId = jsonValue.GetString("StackId");

    m_stackIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Shortname"))
  {
    m_shortname = jsonValue.GetString("Shortname");

    m_shortnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSources"))
  {
    Aws::Utils::Array<JsonView> dataSourcesJsonList = jsonValue.GetArray("DataSources");
    for(unsigned dataSourcesIndex = 0; dataSourcesIndex < dataSourcesJsonList.GetLength(); ++dataSourcesIndex)
    {
      m_dataSources.push_back(dataSourcesJsonList[dataSourcesIndex].AsObject());
    }
    m_dataSourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = AppTypeMapper::GetAppTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AppSource"))
  {
    m_appSource = jsonValue.GetObject("AppSource");

    m_appSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Domains"))
  {
    Aws::Utils::Array<JsonView> domainsJsonList = jsonValue.GetArray("Domains");
    for(unsigned domainsIndex = 0; domainsIndex < domainsJsonList.GetLength(); ++domainsIndex)
    {
      m_domains.push_back(domainsJsonList[domainsIndex].AsString());
    }
    m_domainsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableSsl"))
  {
    m_enableSsl = jsonValue.GetBool("EnableSsl");

    m_enableSslHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SslConfiguration"))
  {
    m_sslConfiguration = jsonValue.GetObject("SslConfiguration");

    m_sslConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("Attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[AppAttributesKeysMapper::GetAppAttributesKeysForName(attributesItem.first)] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Environment"))
  {
    Aws::Utils::Array<JsonView> environmentJsonList = jsonValue.GetArray("Environment");
    for(unsigned environmentIndex = 0; environmentIndex < environmentJsonList.GetLength(); ++environmentIndex)
    {
      m_environment.push_back(environmentJsonList[environmentIndex].AsObject());
    }
    m_environmentHasBeenSet = true;
  }

  return *this;
}

JsonValue App::Jsonize() const
{
  JsonValue payload;

  if(m_appIdHasBeenSet)
  {
   payload.WithString("AppId", m_appId);

  }

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_shortnameHasBeenSet)
  {
   payload.WithString("Shortname", m_shortname);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_dataSourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataSourcesJsonList(m_dataSources.size());
   for(unsigned dataSourcesIndex = 0; dataSourcesIndex < dataSourcesJsonList.GetLength(); ++dataSourcesIndex)
   {
     dataSourcesJsonList[dataSourcesIndex].AsObject(m_dataSources[dataSourcesIndex].Jsonize());
   }
   payload.WithArray("DataSources", std::move(dataSourcesJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", AppTypeMapper::GetNameForAppType(m_type));
  }

  if(m_appSourceHasBeenSet)
  {
   payload.WithObject("AppSource", m_appSource.Jsonize());

  }

  if(m_domainsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> domainsJsonList(m_domains.size());
   for(unsigned domainsIndex = 0; domainsIndex < domainsJsonList.GetLength(); ++domainsIndex)
   {
     domainsJsonList[domainsIndex].AsString(m_domains[domainsIndex]);
   }
   payload.WithArray("Domains", std::move(domainsJsonList));

  }

  if(m_enableSslHasBeenSet)
  {
   payload.WithBool("EnableSsl", m_enableSsl);

  }

  if(m_sslConfigurationHasBeenSet)
  {
   payload.WithObject("SslConfiguration", m_sslConfiguration.Jsonize());

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(AppAttributesKeysMapper::GetNameForAppAttributesKeys(attributesItem.first), attributesItem.second);
   }
   payload.WithObject("Attributes", std::move(attributesJsonMap));

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt);

  }

  if(m_environmentHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> environmentJsonList(m_environment.size());
   for(unsigned environmentIndex = 0; environmentIndex < environmentJsonList.GetLength(); ++environmentIndex)
   {
     environmentJsonList[environmentIndex].AsObject(m_environment[environmentIndex].Jsonize());
   }
   payload.WithArray("Environment", std::move(environmentJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
