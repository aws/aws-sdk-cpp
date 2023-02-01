/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/UpdateFlowOutputRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFlowOutputRequest::UpdateFlowOutputRequest() : 
    m_cidrAllowListHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_flowArnHasBeenSet(false),
    m_maxLatency(0),
    m_maxLatencyHasBeenSet(false),
    m_mediaStreamOutputConfigurationsHasBeenSet(false),
    m_minLatency(0),
    m_minLatencyHasBeenSet(false),
    m_outputArnHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_protocol(Protocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_remoteIdHasBeenSet(false),
    m_senderControlPort(0),
    m_senderControlPortHasBeenSet(false),
    m_senderIpAddressHasBeenSet(false),
    m_smoothingLatency(0),
    m_smoothingLatencyHasBeenSet(false),
    m_streamIdHasBeenSet(false),
    m_vpcInterfaceAttachmentHasBeenSet(false)
{
}

Aws::String UpdateFlowOutputRequest::SerializePayload() const
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

  if(m_senderIpAddressHasBeenSet)
  {
   payload.WithString("senderIpAddress", m_senderIpAddress);

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

  return payload.View().WriteReadable();
}




