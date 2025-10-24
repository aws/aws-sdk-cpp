﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/AddOutputRequest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

AddOutputRequest::AddOutputRequest(JsonView jsonValue) { *this = jsonValue; }

AddOutputRequest& AddOutputRequest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("cidrAllowList")) {
    Aws::Utils::Array<JsonView> cidrAllowListJsonList = jsonValue.GetArray("cidrAllowList");
    for (unsigned cidrAllowListIndex = 0; cidrAllowListIndex < cidrAllowListJsonList.GetLength(); ++cidrAllowListIndex) {
      m_cidrAllowList.push_back(cidrAllowListJsonList[cidrAllowListIndex].AsString());
    }
    m_cidrAllowListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destination")) {
    m_destination = jsonValue.GetString("destination");
    m_destinationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encryption")) {
    m_encryption = jsonValue.GetObject("encryption");
    m_encryptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxLatency")) {
    m_maxLatency = jsonValue.GetInteger("maxLatency");
    m_maxLatencyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mediaStreamOutputConfigurations")) {
    Aws::Utils::Array<JsonView> mediaStreamOutputConfigurationsJsonList = jsonValue.GetArray("mediaStreamOutputConfigurations");
    for (unsigned mediaStreamOutputConfigurationsIndex = 0;
         mediaStreamOutputConfigurationsIndex < mediaStreamOutputConfigurationsJsonList.GetLength();
         ++mediaStreamOutputConfigurationsIndex) {
      m_mediaStreamOutputConfigurations.push_back(mediaStreamOutputConfigurationsJsonList[mediaStreamOutputConfigurationsIndex].AsObject());
    }
    m_mediaStreamOutputConfigurationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("minLatency")) {
    m_minLatency = jsonValue.GetInteger("minLatency");
    m_minLatencyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("port")) {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  if (jsonValue.ValueExists("protocol")) {
    m_protocol = ProtocolMapper::GetProtocolForName(jsonValue.GetString("protocol"));
    m_protocolHasBeenSet = true;
  }
  if (jsonValue.ValueExists("remoteId")) {
    m_remoteId = jsonValue.GetString("remoteId");
    m_remoteIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("senderControlPort")) {
    m_senderControlPort = jsonValue.GetInteger("senderControlPort");
    m_senderControlPortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("smoothingLatency")) {
    m_smoothingLatency = jsonValue.GetInteger("smoothingLatency");
    m_smoothingLatencyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("streamId")) {
    m_streamId = jsonValue.GetString("streamId");
    m_streamIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vpcInterfaceAttachment")) {
    m_vpcInterfaceAttachment = jsonValue.GetObject("vpcInterfaceAttachment");
    m_vpcInterfaceAttachmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outputStatus")) {
    m_outputStatus = OutputStatusMapper::GetOutputStatusForName(jsonValue.GetString("outputStatus"));
    m_outputStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ndiSpeedHqQuality")) {
    m_ndiSpeedHqQuality = jsonValue.GetInteger("ndiSpeedHqQuality");
    m_ndiSpeedHqQualityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ndiProgramName")) {
    m_ndiProgramName = jsonValue.GetString("ndiProgramName");
    m_ndiProgramNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outputTags")) {
    Aws::Map<Aws::String, JsonView> outputTagsJsonMap = jsonValue.GetObject("outputTags").GetAllObjects();
    for (auto& outputTagsItem : outputTagsJsonMap) {
      m_outputTags[outputTagsItem.first] = outputTagsItem.second.AsString();
    }
    m_outputTagsHasBeenSet = true;
  }
  return *this;
}

JsonValue AddOutputRequest::Jsonize() const {
  JsonValue payload;

  if (m_cidrAllowListHasBeenSet) {
    Aws::Utils::Array<JsonValue> cidrAllowListJsonList(m_cidrAllowList.size());
    for (unsigned cidrAllowListIndex = 0; cidrAllowListIndex < cidrAllowListJsonList.GetLength(); ++cidrAllowListIndex) {
      cidrAllowListJsonList[cidrAllowListIndex].AsString(m_cidrAllowList[cidrAllowListIndex]);
    }
    payload.WithArray("cidrAllowList", std::move(cidrAllowListJsonList));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_destinationHasBeenSet) {
    payload.WithString("destination", m_destination);
  }

  if (m_encryptionHasBeenSet) {
    payload.WithObject("encryption", m_encryption.Jsonize());
  }

  if (m_maxLatencyHasBeenSet) {
    payload.WithInteger("maxLatency", m_maxLatency);
  }

  if (m_mediaStreamOutputConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> mediaStreamOutputConfigurationsJsonList(m_mediaStreamOutputConfigurations.size());
    for (unsigned mediaStreamOutputConfigurationsIndex = 0;
         mediaStreamOutputConfigurationsIndex < mediaStreamOutputConfigurationsJsonList.GetLength();
         ++mediaStreamOutputConfigurationsIndex) {
      mediaStreamOutputConfigurationsJsonList[mediaStreamOutputConfigurationsIndex].AsObject(
          m_mediaStreamOutputConfigurations[mediaStreamOutputConfigurationsIndex].Jsonize());
    }
    payload.WithArray("mediaStreamOutputConfigurations", std::move(mediaStreamOutputConfigurationsJsonList));
  }

  if (m_minLatencyHasBeenSet) {
    payload.WithInteger("minLatency", m_minLatency);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_portHasBeenSet) {
    payload.WithInteger("port", m_port);
  }

  if (m_protocolHasBeenSet) {
    payload.WithString("protocol", ProtocolMapper::GetNameForProtocol(m_protocol));
  }

  if (m_remoteIdHasBeenSet) {
    payload.WithString("remoteId", m_remoteId);
  }

  if (m_senderControlPortHasBeenSet) {
    payload.WithInteger("senderControlPort", m_senderControlPort);
  }

  if (m_smoothingLatencyHasBeenSet) {
    payload.WithInteger("smoothingLatency", m_smoothingLatency);
  }

  if (m_streamIdHasBeenSet) {
    payload.WithString("streamId", m_streamId);
  }

  if (m_vpcInterfaceAttachmentHasBeenSet) {
    payload.WithObject("vpcInterfaceAttachment", m_vpcInterfaceAttachment.Jsonize());
  }

  if (m_outputStatusHasBeenSet) {
    payload.WithString("outputStatus", OutputStatusMapper::GetNameForOutputStatus(m_outputStatus));
  }

  if (m_ndiSpeedHqQualityHasBeenSet) {
    payload.WithInteger("ndiSpeedHqQuality", m_ndiSpeedHqQuality);
  }

  if (m_ndiProgramNameHasBeenSet) {
    payload.WithString("ndiProgramName", m_ndiProgramName);
  }

  if (m_outputTagsHasBeenSet) {
    JsonValue outputTagsJsonMap;
    for (auto& outputTagsItem : m_outputTags) {
      outputTagsJsonMap.WithString(outputTagsItem.first, outputTagsItem.second);
    }
    payload.WithObject("outputTags", std::move(outputTagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
