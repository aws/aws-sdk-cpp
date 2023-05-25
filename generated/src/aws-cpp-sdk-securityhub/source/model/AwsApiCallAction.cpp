/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsApiCallAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsApiCallAction::AwsApiCallAction() : 
    m_apiHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_callerTypeHasBeenSet(false),
    m_remoteIpDetailsHasBeenSet(false),
    m_domainDetailsHasBeenSet(false),
    m_affectedResourcesHasBeenSet(false),
    m_firstSeenHasBeenSet(false),
    m_lastSeenHasBeenSet(false)
{
}

AwsApiCallAction::AwsApiCallAction(JsonView jsonValue) : 
    m_apiHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_callerTypeHasBeenSet(false),
    m_remoteIpDetailsHasBeenSet(false),
    m_domainDetailsHasBeenSet(false),
    m_affectedResourcesHasBeenSet(false),
    m_firstSeenHasBeenSet(false),
    m_lastSeenHasBeenSet(false)
{
  *this = jsonValue;
}

AwsApiCallAction& AwsApiCallAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Api"))
  {
    m_api = jsonValue.GetString("Api");

    m_apiHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceName"))
  {
    m_serviceName = jsonValue.GetString("ServiceName");

    m_serviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CallerType"))
  {
    m_callerType = jsonValue.GetString("CallerType");

    m_callerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RemoteIpDetails"))
  {
    m_remoteIpDetails = jsonValue.GetObject("RemoteIpDetails");

    m_remoteIpDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainDetails"))
  {
    m_domainDetails = jsonValue.GetObject("DomainDetails");

    m_domainDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AffectedResources"))
  {
    Aws::Map<Aws::String, JsonView> affectedResourcesJsonMap = jsonValue.GetObject("AffectedResources").GetAllObjects();
    for(auto& affectedResourcesItem : affectedResourcesJsonMap)
    {
      m_affectedResources[affectedResourcesItem.first] = affectedResourcesItem.second.AsString();
    }
    m_affectedResourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirstSeen"))
  {
    m_firstSeen = jsonValue.GetString("FirstSeen");

    m_firstSeenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSeen"))
  {
    m_lastSeen = jsonValue.GetString("LastSeen");

    m_lastSeenHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsApiCallAction::Jsonize() const
{
  JsonValue payload;

  if(m_apiHasBeenSet)
  {
   payload.WithString("Api", m_api);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("ServiceName", m_serviceName);

  }

  if(m_callerTypeHasBeenSet)
  {
   payload.WithString("CallerType", m_callerType);

  }

  if(m_remoteIpDetailsHasBeenSet)
  {
   payload.WithObject("RemoteIpDetails", m_remoteIpDetails.Jsonize());

  }

  if(m_domainDetailsHasBeenSet)
  {
   payload.WithObject("DomainDetails", m_domainDetails.Jsonize());

  }

  if(m_affectedResourcesHasBeenSet)
  {
   JsonValue affectedResourcesJsonMap;
   for(auto& affectedResourcesItem : m_affectedResources)
   {
     affectedResourcesJsonMap.WithString(affectedResourcesItem.first, affectedResourcesItem.second);
   }
   payload.WithObject("AffectedResources", std::move(affectedResourcesJsonMap));

  }

  if(m_firstSeenHasBeenSet)
  {
   payload.WithString("FirstSeen", m_firstSeen);

  }

  if(m_lastSeenHasBeenSet)
  {
   payload.WithString("LastSeen", m_lastSeen);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
