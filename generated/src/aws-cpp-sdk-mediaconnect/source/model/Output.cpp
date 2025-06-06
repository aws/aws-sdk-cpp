﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/Output.h>
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

Output::Output(JsonView jsonValue)
{
  *this = jsonValue;
}

Output& Output::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataTransferSubscriberFeePercent"))
  {
    m_dataTransferSubscriberFeePercent = jsonValue.GetInteger("dataTransferSubscriberFeePercent");
    m_dataTransferSubscriberFeePercentHasBeenSet = true;
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
  if(jsonValue.ValueExists("entitlementArn"))
  {
    m_entitlementArn = jsonValue.GetString("entitlementArn");
    m_entitlementArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("listenerAddress"))
  {
    m_listenerAddress = jsonValue.GetString("listenerAddress");
    m_listenerAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mediaLiveInputArn"))
  {
    m_mediaLiveInputArn = jsonValue.GetString("mediaLiveInputArn");
    m_mediaLiveInputArnHasBeenSet = true;
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
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputArn"))
  {
    m_outputArn = jsonValue.GetString("outputArn");
    m_outputArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  if(jsonValue.ValueExists("transport"))
  {
    m_transport = jsonValue.GetObject("transport");
    m_transportHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vpcInterfaceAttachment"))
  {
    m_vpcInterfaceAttachment = jsonValue.GetObject("vpcInterfaceAttachment");
    m_vpcInterfaceAttachmentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bridgeArn"))
  {
    m_bridgeArn = jsonValue.GetString("bridgeArn");
    m_bridgeArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bridgePorts"))
  {
    Aws::Utils::Array<JsonView> bridgePortsJsonList = jsonValue.GetArray("bridgePorts");
    for(unsigned bridgePortsIndex = 0; bridgePortsIndex < bridgePortsJsonList.GetLength(); ++bridgePortsIndex)
    {
      m_bridgePorts.push_back(bridgePortsJsonList[bridgePortsIndex].AsInteger());
    }
    m_bridgePortsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputStatus"))
  {
    m_outputStatus = OutputStatusMapper::GetOutputStatusForName(jsonValue.GetString("outputStatus"));
    m_outputStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("peerIpAddress"))
  {
    m_peerIpAddress = jsonValue.GetString("peerIpAddress");
    m_peerIpAddressHasBeenSet = true;
  }
  return *this;
}

JsonValue Output::Jsonize() const
{
  JsonValue payload;

  if(m_dataTransferSubscriberFeePercentHasBeenSet)
  {
   payload.WithInteger("dataTransferSubscriberFeePercent", m_dataTransferSubscriberFeePercent);

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

  if(m_entitlementArnHasBeenSet)
  {
   payload.WithString("entitlementArn", m_entitlementArn);

  }

  if(m_listenerAddressHasBeenSet)
  {
   payload.WithString("listenerAddress", m_listenerAddress);

  }

  if(m_mediaLiveInputArnHasBeenSet)
  {
   payload.WithString("mediaLiveInputArn", m_mediaLiveInputArn);

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

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_outputArnHasBeenSet)
  {
   payload.WithString("outputArn", m_outputArn);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_transportHasBeenSet)
  {
   payload.WithObject("transport", m_transport.Jsonize());

  }

  if(m_vpcInterfaceAttachmentHasBeenSet)
  {
   payload.WithObject("vpcInterfaceAttachment", m_vpcInterfaceAttachment.Jsonize());

  }

  if(m_bridgeArnHasBeenSet)
  {
   payload.WithString("bridgeArn", m_bridgeArn);

  }

  if(m_bridgePortsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bridgePortsJsonList(m_bridgePorts.size());
   for(unsigned bridgePortsIndex = 0; bridgePortsIndex < bridgePortsJsonList.GetLength(); ++bridgePortsIndex)
   {
     bridgePortsJsonList[bridgePortsIndex].AsInteger(m_bridgePorts[bridgePortsIndex]);
   }
   payload.WithArray("bridgePorts", std::move(bridgePortsJsonList));

  }

  if(m_outputStatusHasBeenSet)
  {
   payload.WithString("outputStatus", OutputStatusMapper::GetNameForOutputStatus(m_outputStatus));
  }

  if(m_peerIpAddressHasBeenSet)
  {
   payload.WithString("peerIpAddress", m_peerIpAddress);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
