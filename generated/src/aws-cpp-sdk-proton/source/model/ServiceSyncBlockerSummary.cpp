/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ServiceSyncBlockerSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Proton
{
namespace Model
{

ServiceSyncBlockerSummary::ServiceSyncBlockerSummary() : 
    m_latestBlockersHasBeenSet(false),
    m_serviceInstanceNameHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
}

ServiceSyncBlockerSummary::ServiceSyncBlockerSummary(JsonView jsonValue) : 
    m_latestBlockersHasBeenSet(false),
    m_serviceInstanceNameHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceSyncBlockerSummary& ServiceSyncBlockerSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("latestBlockers"))
  {
    Aws::Utils::Array<JsonView> latestBlockersJsonList = jsonValue.GetArray("latestBlockers");
    for(unsigned latestBlockersIndex = 0; latestBlockersIndex < latestBlockersJsonList.GetLength(); ++latestBlockersIndex)
    {
      m_latestBlockers.push_back(latestBlockersJsonList[latestBlockersIndex].AsObject());
    }
    m_latestBlockersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceInstanceName"))
  {
    m_serviceInstanceName = jsonValue.GetString("serviceInstanceName");

    m_serviceInstanceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceName"))
  {
    m_serviceName = jsonValue.GetString("serviceName");

    m_serviceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceSyncBlockerSummary::Jsonize() const
{
  JsonValue payload;

  if(m_latestBlockersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> latestBlockersJsonList(m_latestBlockers.size());
   for(unsigned latestBlockersIndex = 0; latestBlockersIndex < latestBlockersJsonList.GetLength(); ++latestBlockersIndex)
   {
     latestBlockersJsonList[latestBlockersIndex].AsObject(m_latestBlockers[latestBlockersIndex].Jsonize());
   }
   payload.WithArray("latestBlockers", std::move(latestBlockersJsonList));

  }

  if(m_serviceInstanceNameHasBeenSet)
  {
   payload.WithString("serviceInstanceName", m_serviceInstanceName);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  return payload;
}

} // namespace Model
} // namespace Proton
} // namespace Aws
