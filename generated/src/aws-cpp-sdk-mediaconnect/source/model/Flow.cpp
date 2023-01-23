/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/Flow.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

Flow::Flow() : 
    m_availabilityZoneHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_egressIpHasBeenSet(false),
    m_entitlementsHasBeenSet(false),
    m_flowArnHasBeenSet(false),
    m_mediaStreamsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_sourceFailoverConfigHasBeenSet(false),
    m_sourcesHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_vpcInterfacesHasBeenSet(false),
    m_maintenanceHasBeenSet(false)
{
}

Flow::Flow(JsonView jsonValue) : 
    m_availabilityZoneHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_egressIpHasBeenSet(false),
    m_entitlementsHasBeenSet(false),
    m_flowArnHasBeenSet(false),
    m_mediaStreamsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_sourceFailoverConfigHasBeenSet(false),
    m_sourcesHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_vpcInterfacesHasBeenSet(false),
    m_maintenanceHasBeenSet(false)
{
  *this = jsonValue;
}

Flow& Flow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("availabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("availabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("egressIp"))
  {
    m_egressIp = jsonValue.GetString("egressIp");

    m_egressIpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entitlements"))
  {
    Aws::Utils::Array<JsonView> entitlementsJsonList = jsonValue.GetArray("entitlements");
    for(unsigned entitlementsIndex = 0; entitlementsIndex < entitlementsJsonList.GetLength(); ++entitlementsIndex)
    {
      m_entitlements.push_back(entitlementsJsonList[entitlementsIndex].AsObject());
    }
    m_entitlementsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("flowArn"))
  {
    m_flowArn = jsonValue.GetString("flowArn");

    m_flowArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mediaStreams"))
  {
    Aws::Utils::Array<JsonView> mediaStreamsJsonList = jsonValue.GetArray("mediaStreams");
    for(unsigned mediaStreamsIndex = 0; mediaStreamsIndex < mediaStreamsJsonList.GetLength(); ++mediaStreamsIndex)
    {
      m_mediaStreams.push_back(mediaStreamsJsonList[mediaStreamsIndex].AsObject());
    }
    m_mediaStreamsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputs"))
  {
    Aws::Utils::Array<JsonView> outputsJsonList = jsonValue.GetArray("outputs");
    for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
    {
      m_outputs.push_back(outputsJsonList[outputsIndex].AsObject());
    }
    m_outputsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetObject("source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceFailoverConfig"))
  {
    m_sourceFailoverConfig = jsonValue.GetObject("sourceFailoverConfig");

    m_sourceFailoverConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sources"))
  {
    Aws::Utils::Array<JsonView> sourcesJsonList = jsonValue.GetArray("sources");
    for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
    {
      m_sources.push_back(sourcesJsonList[sourcesIndex].AsObject());
    }
    m_sourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcInterfaces"))
  {
    Aws::Utils::Array<JsonView> vpcInterfacesJsonList = jsonValue.GetArray("vpcInterfaces");
    for(unsigned vpcInterfacesIndex = 0; vpcInterfacesIndex < vpcInterfacesJsonList.GetLength(); ++vpcInterfacesIndex)
    {
      m_vpcInterfaces.push_back(vpcInterfacesJsonList[vpcInterfacesIndex].AsObject());
    }
    m_vpcInterfacesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maintenance"))
  {
    m_maintenance = jsonValue.GetObject("maintenance");

    m_maintenanceHasBeenSet = true;
  }

  return *this;
}

JsonValue Flow::Jsonize() const
{
  JsonValue payload;

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_egressIpHasBeenSet)
  {
   payload.WithString("egressIp", m_egressIp);

  }

  if(m_entitlementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entitlementsJsonList(m_entitlements.size());
   for(unsigned entitlementsIndex = 0; entitlementsIndex < entitlementsJsonList.GetLength(); ++entitlementsIndex)
   {
     entitlementsJsonList[entitlementsIndex].AsObject(m_entitlements[entitlementsIndex].Jsonize());
   }
   payload.WithArray("entitlements", std::move(entitlementsJsonList));

  }

  if(m_flowArnHasBeenSet)
  {
   payload.WithString("flowArn", m_flowArn);

  }

  if(m_mediaStreamsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mediaStreamsJsonList(m_mediaStreams.size());
   for(unsigned mediaStreamsIndex = 0; mediaStreamsIndex < mediaStreamsJsonList.GetLength(); ++mediaStreamsIndex)
   {
     mediaStreamsJsonList[mediaStreamsIndex].AsObject(m_mediaStreams[mediaStreamsIndex].Jsonize());
   }
   payload.WithArray("mediaStreams", std::move(mediaStreamsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_outputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputsJsonList(m_outputs.size());
   for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
   {
     outputsJsonList[outputsIndex].AsObject(m_outputs[outputsIndex].Jsonize());
   }
   payload.WithArray("outputs", std::move(outputsJsonList));

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("source", m_source.Jsonize());

  }

  if(m_sourceFailoverConfigHasBeenSet)
  {
   payload.WithObject("sourceFailoverConfig", m_sourceFailoverConfig.Jsonize());

  }

  if(m_sourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourcesJsonList(m_sources.size());
   for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
   {
     sourcesJsonList[sourcesIndex].AsObject(m_sources[sourcesIndex].Jsonize());
   }
   payload.WithArray("sources", std::move(sourcesJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", StatusMapper::GetNameForStatus(m_status));
  }

  if(m_vpcInterfacesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcInterfacesJsonList(m_vpcInterfaces.size());
   for(unsigned vpcInterfacesIndex = 0; vpcInterfacesIndex < vpcInterfacesJsonList.GetLength(); ++vpcInterfacesIndex)
   {
     vpcInterfacesJsonList[vpcInterfacesIndex].AsObject(m_vpcInterfaces[vpcInterfacesIndex].Jsonize());
   }
   payload.WithArray("vpcInterfaces", std::move(vpcInterfacesJsonList));

  }

  if(m_maintenanceHasBeenSet)
  {
   payload.WithObject("maintenance", m_maintenance.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
