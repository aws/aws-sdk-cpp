/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/CreateAppRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAppRequest::CreateAppRequest() : 
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
    m_environmentHasBeenSet(false)
{
}

Aws::String CreateAppRequest::SerializePayload() const
{
  JsonValue payload;

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

  if(m_environmentHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> environmentJsonList(m_environment.size());
   for(unsigned environmentIndex = 0; environmentIndex < environmentJsonList.GetLength(); ++environmentIndex)
   {
     environmentJsonList[environmentIndex].AsObject(m_environment[environmentIndex].Jsonize());
   }
   payload.WithArray("Environment", std::move(environmentJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAppRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.CreateApp"));
  return headers;

}




