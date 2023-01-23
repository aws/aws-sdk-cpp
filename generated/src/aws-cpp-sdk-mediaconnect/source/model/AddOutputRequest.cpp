/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/AddOutputRequest.h>
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

AddOutputRequest::AddOutputRequest() : 
    m_cidrAllowListHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_maxLatency(0),
    m_maxLatencyHasBeenSet(false),
    m_mediaStreamOutputConfigurationsHasBeenSet(false),
    m_minLatency(0),
    m_minLatencyHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_protocol(Protocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_remoteIdHasBeenSet(false),
    m_senderControlPort(0),
    m_senderControlPortHasBeenSet(false),
    m_smoothingLatency(0),
    m_smoothingLatencyHasBeenSet(false),
    m_streamIdHasBeenSet(false),
    m_vpcInterfaceAttachmentHasBeenSet(false)
{
}

AddOutputRequest::AddOutputRequest(JsonView jsonValue) : 
    m_cidrAllowListHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_maxLatency(0),
    m_maxLatencyHasBeenSet(false),
    m_mediaStreamOutputConfigurationsHasBeenSet(false),
    m_minLatency(0),
    m_minLatencyHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_protocol(Protocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_remoteIdHasBeenSet(false),
    m_senderControlPort(0),
    m_senderControlPortHasBeenSet(false),
    m_smoothingLatency(0),
    m_smoothingLatencyHasBeenSet(false),
    m_streamIdHasBeenSet(false),
    m_vpcInterfaceAttachmentHasBeenSet(false)
{
  *this = jsonValue;
}

AddOutputRequest& AddOutputRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cidrAllowList"))
  {
    Aws::Utils::Array<JsonView> cidrAllowListJsonList = jsonValue.GetArray("cidrAllowList");
    for(unsigned cidrAllowListIndex = 0; cidrAllowListIndex < cidrAllowListJsonList.GetLength(); ++cidrAllowListIndex)
    {
      m_cidrAllowList.push_back(cidrAllowListJsonList[cidrAllowListIndex].AsString());
    }
    m_cidrAllowListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetString("destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryption"))
  {
    m_encryption = jsonValue.GetObject("encryption");

    m_encryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxLatency"))
  {
    m_maxLatency = jsonValue.GetInteger("maxLatency");

    m_maxLatencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mediaStreamOutputConfigurations"))
  {
    Aws::Utils::Array<JsonView> mediaStreamOutputConfigurationsJsonList = jsonValue.GetArray("mediaStreamOutputConfigurations");
    for(unsigned mediaStreamOutputConfigurationsIndex = 0; mediaStreamOutputConfigurationsIndex < mediaStreamOutputConfigurationsJsonList.GetLength(); ++mediaStreamOutputConfigurationsIndex)
    {
      m_mediaStreamOutputConfigurations.push_back(mediaStreamOutputConfigurationsJsonList[mediaStreamOutputConfigurationsIndex].AsObject());
    }
    m_mediaStreamOutputConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minLatency"))
  {
    m_minLatency = jsonValue.GetInteger("minLatency");

    m_minLatencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = ProtocolMapper::GetProtocolForName(jsonValue.GetString("protocol"));

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remoteId"))
  {
    m_remoteId = jsonValue.GetString("remoteId");

    m_remoteIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("senderControlPort"))
  {
    m_senderControlPort = jsonValue.GetInteger("senderControlPort");

    m_senderControlPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("smoothingLatency"))
  {
    m_smoothingLatency = jsonValue.GetInteger("smoothingLatency");

    m_smoothingLatencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamId"))
  {
    m_streamId = jsonValue.GetString("streamId");

    m_streamIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcInterfaceAttachment"))
  {
    m_vpcInterfaceAttachment = jsonValue.GetObject("vpcInterfaceAttachment");

    m_vpcInterfaceAttachmentHasBeenSet = true;
  }

  return *this;
}

JsonValue AddOutputRequest::Jsonize() const
{
  JsonValue payload;

  if(m_cidrAllowListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cidrAllowListJsonList(m_cidrAllowList.size());
   for(unsigned cidrAllowListIndex = 0; cidrAllowListIndex < cidrAllowListJsonList.GetLength(); ++cidrAllowListIndex)
   {
     cidrAllowListJsonList[cidrAllowListIndex].AsString(m_cidrAllowList[cidrAllowListIndex]);
   }
   payload.WithArray("cidrAllowList", std::move(cidrAllowListJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("destination", m_destination);

  }

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("encryption", m_encryption.Jsonize());

  }

  if(m_maxLatencyHasBeenSet)
  {
   payload.WithInteger("maxLatency", m_maxLatency);

  }

  if(m_mediaStreamOutputConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mediaStreamOutputConfigurationsJsonList(m_mediaStreamOutputConfigurations.size());
   for(unsigned mediaStreamOutputConfigurationsIndex = 0; mediaStreamOutputConfigurationsIndex < mediaStreamOutputConfigurationsJsonList.GetLength(); ++mediaStreamOutputConfigurationsIndex)
   {
     mediaStreamOutputConfigurationsJsonList[mediaStreamOutputConfigurationsIndex].AsObject(m_mediaStreamOutputConfigurations[mediaStreamOutputConfigurationsIndex].Jsonize());
   }
   payload.WithArray("mediaStreamOutputConfigurations", std::move(mediaStreamOutputConfigurationsJsonList));

  }

  if(m_minLatencyHasBeenSet)
  {
   payload.WithInteger("minLatency", m_minLatency);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", ProtocolMapper::GetNameForProtocol(m_protocol));
  }

  if(m_remoteIdHasBeenSet)
  {
   payload.WithString("remoteId", m_remoteId);

  }

  if(m_senderControlPortHasBeenSet)
  {
   payload.WithInteger("senderControlPort", m_senderControlPort);

  }

  if(m_smoothingLatencyHasBeenSet)
  {
   payload.WithInteger("smoothingLatency", m_smoothingLatency);

  }

  if(m_streamIdHasBeenSet)
  {
   payload.WithString("streamId", m_streamId);

  }

  if(m_vpcInterfaceAttachmentHasBeenSet)
  {
   payload.WithObject("vpcInterfaceAttachment", m_vpcInterfaceAttachment.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
