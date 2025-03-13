/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/InstancesToExclude.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Outposts
{
namespace Model
{

InstancesToExclude::InstancesToExclude(JsonView jsonValue)
{
  *this = jsonValue;
}

InstancesToExclude& InstancesToExclude::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Instances"))
  {
    Aws::Utils::Array<JsonView> instancesJsonList = jsonValue.GetArray("Instances");
    for(unsigned instancesIndex = 0; instancesIndex < instancesJsonList.GetLength(); ++instancesIndex)
    {
      m_instances.push_back(instancesJsonList[instancesIndex].AsString());
    }
    m_instancesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccountIds"))
  {
    Aws::Utils::Array<JsonView> accountIdsJsonList = jsonValue.GetArray("AccountIds");
    for(unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex)
    {
      m_accountIds.push_back(accountIdsJsonList[accountIdsIndex].AsString());
    }
    m_accountIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Services"))
  {
    Aws::Utils::Array<JsonView> servicesJsonList = jsonValue.GetArray("Services");
    for(unsigned servicesIndex = 0; servicesIndex < servicesJsonList.GetLength(); ++servicesIndex)
    {
      m_services.push_back(AWSServiceNameMapper::GetAWSServiceNameForName(servicesJsonList[servicesIndex].AsString()));
    }
    m_servicesHasBeenSet = true;
  }
  return *this;
}

JsonValue InstancesToExclude::Jsonize() const
{
  JsonValue payload;

  if(m_instancesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instancesJsonList(m_instances.size());
   for(unsigned instancesIndex = 0; instancesIndex < instancesJsonList.GetLength(); ++instancesIndex)
   {
     instancesJsonList[instancesIndex].AsString(m_instances[instancesIndex]);
   }
   payload.WithArray("Instances", std::move(instancesJsonList));

  }

  if(m_accountIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountIdsJsonList(m_accountIds.size());
   for(unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex)
   {
     accountIdsJsonList[accountIdsIndex].AsString(m_accountIds[accountIdsIndex]);
   }
   payload.WithArray("AccountIds", std::move(accountIdsJsonList));

  }

  if(m_servicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> servicesJsonList(m_services.size());
   for(unsigned servicesIndex = 0; servicesIndex < servicesJsonList.GetLength(); ++servicesIndex)
   {
     servicesJsonList[servicesIndex].AsString(AWSServiceNameMapper::GetNameForAWSServiceName(m_services[servicesIndex]));
   }
   payload.WithArray("Services", std::move(servicesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Outposts
} // namespace Aws
