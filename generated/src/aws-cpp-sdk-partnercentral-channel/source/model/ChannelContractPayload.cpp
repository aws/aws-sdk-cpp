/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/ChannelContractPayload.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

ChannelContractPayload::ChannelContractPayload(JsonView jsonValue) { *this = jsonValue; }

ChannelContractPayload& ChannelContractPayload::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("managedServicesAttestationPayload")) {
    m_managedServicesAttestationPayload = jsonValue.GetObject("managedServicesAttestationPayload");
    m_managedServicesAttestationPayloadHasBeenSet = true;
  }
  return *this;
}

JsonValue ChannelContractPayload::Jsonize() const {
  JsonValue payload;

  if (m_managedServicesAttestationPayloadHasBeenSet) {
    payload.WithObject("managedServicesAttestationPayload", m_managedServicesAttestationPayload.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
