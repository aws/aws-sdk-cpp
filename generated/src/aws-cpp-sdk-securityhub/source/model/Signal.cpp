/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Signal.h>
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

Signal::Signal(JsonView jsonValue)
{
  *this = jsonValue;
}

Signal& Signal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProductArn"))
  {
    m_productArn = jsonValue.GetString("ProductArn");
    m_productArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceIds"))
  {
    Aws::Utils::Array<JsonView> resourceIdsJsonList = jsonValue.GetArray("ResourceIds");
    for(unsigned resourceIdsIndex = 0; resourceIdsIndex < resourceIdsJsonList.GetLength(); ++resourceIdsIndex)
    {
      m_resourceIds.push_back(resourceIdsJsonList[resourceIdsIndex].AsString());
    }
    m_resourceIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SignalIndicators"))
  {
    Aws::Utils::Array<JsonView> signalIndicatorsJsonList = jsonValue.GetArray("SignalIndicators");
    for(unsigned signalIndicatorsIndex = 0; signalIndicatorsIndex < signalIndicatorsJsonList.GetLength(); ++signalIndicatorsIndex)
    {
      m_signalIndicators.push_back(signalIndicatorsJsonList[signalIndicatorsIndex].AsObject());
    }
    m_signalIndicatorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetInt64("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetInt64("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FirstSeenAt"))
  {
    m_firstSeenAt = jsonValue.GetInt64("FirstSeenAt");
    m_firstSeenAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastSeenAt"))
  {
    m_lastSeenAt = jsonValue.GetInt64("LastSeenAt");
    m_lastSeenAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Severity"))
  {
    m_severity = jsonValue.GetDouble("Severity");
    m_severityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetInteger("Count");
    m_countHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ActorIds"))
  {
    Aws::Utils::Array<JsonView> actorIdsJsonList = jsonValue.GetArray("ActorIds");
    for(unsigned actorIdsIndex = 0; actorIdsIndex < actorIdsJsonList.GetLength(); ++actorIdsIndex)
    {
      m_actorIds.push_back(actorIdsJsonList[actorIdsIndex].AsString());
    }
    m_actorIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndpointIds"))
  {
    Aws::Utils::Array<JsonView> endpointIdsJsonList = jsonValue.GetArray("EndpointIds");
    for(unsigned endpointIdsIndex = 0; endpointIdsIndex < endpointIdsJsonList.GetLength(); ++endpointIdsIndex)
    {
      m_endpointIds.push_back(endpointIdsJsonList[endpointIdsIndex].AsString());
    }
    m_endpointIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue Signal::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_productArnHasBeenSet)
  {
   payload.WithString("ProductArn", m_productArn);

  }

  if(m_resourceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceIdsJsonList(m_resourceIds.size());
   for(unsigned resourceIdsIndex = 0; resourceIdsIndex < resourceIdsJsonList.GetLength(); ++resourceIdsIndex)
   {
     resourceIdsJsonList[resourceIdsIndex].AsString(m_resourceIds[resourceIdsIndex]);
   }
   payload.WithArray("ResourceIds", std::move(resourceIdsJsonList));

  }

  if(m_signalIndicatorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> signalIndicatorsJsonList(m_signalIndicators.size());
   for(unsigned signalIndicatorsIndex = 0; signalIndicatorsIndex < signalIndicatorsJsonList.GetLength(); ++signalIndicatorsIndex)
   {
     signalIndicatorsJsonList[signalIndicatorsIndex].AsObject(m_signalIndicators[signalIndicatorsIndex].Jsonize());
   }
   payload.WithArray("SignalIndicators", std::move(signalIndicatorsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithInt64("CreatedAt", m_createdAt);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithInt64("UpdatedAt", m_updatedAt);

  }

  if(m_firstSeenAtHasBeenSet)
  {
   payload.WithInt64("FirstSeenAt", m_firstSeenAt);

  }

  if(m_lastSeenAtHasBeenSet)
  {
   payload.WithInt64("LastSeenAt", m_lastSeenAt);

  }

  if(m_severityHasBeenSet)
  {
   payload.WithDouble("Severity", m_severity);

  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("Count", m_count);

  }

  if(m_actorIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actorIdsJsonList(m_actorIds.size());
   for(unsigned actorIdsIndex = 0; actorIdsIndex < actorIdsJsonList.GetLength(); ++actorIdsIndex)
   {
     actorIdsJsonList[actorIdsIndex].AsString(m_actorIds[actorIdsIndex]);
   }
   payload.WithArray("ActorIds", std::move(actorIdsJsonList));

  }

  if(m_endpointIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> endpointIdsJsonList(m_endpointIds.size());
   for(unsigned endpointIdsIndex = 0; endpointIdsIndex < endpointIdsJsonList.GetLength(); ++endpointIdsIndex)
   {
     endpointIdsJsonList[endpointIdsIndex].AsString(m_endpointIds[endpointIdsIndex]);
   }
   payload.WithArray("EndpointIds", std::move(endpointIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
