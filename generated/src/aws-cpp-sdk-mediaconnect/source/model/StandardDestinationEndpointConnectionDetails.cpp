/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/StandardDestinationEndpointConnectionDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

StandardDestinationEndpointConnectionDetails::StandardDestinationEndpointConnectionDetails(JsonView jsonValue) { *this = jsonValue; }

StandardDestinationEndpointConnectionDetails& StandardDestinationEndpointConnectionDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceIpAddress")) {
    m_sourceIpAddress = jsonValue.GetString("sourceIpAddress");
    m_sourceIpAddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceListenerPort")) {
    m_sourceListenerPort = jsonValue.GetInteger("sourceListenerPort");
    m_sourceListenerPortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceEncryptionType")) {
    m_sourceEncryptionType = EndpointEncryptionTypeMapper::GetEndpointEncryptionTypeForName(jsonValue.GetString("sourceEncryptionType"));
    m_sourceEncryptionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceEncryptionConfiguration")) {
    m_sourceEncryptionConfiguration = jsonValue.GetObject("sourceEncryptionConfiguration");
    m_sourceEncryptionConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceEndpointType")) {
    m_sourceEndpointType = SourceEndpointTypeMapper::GetSourceEndpointTypeForName(jsonValue.GetString("sourceEndpointType"));
    m_sourceEndpointTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue StandardDestinationEndpointConnectionDetails::Jsonize() const {
  JsonValue payload;

  if (m_sourceIpAddressHasBeenSet) {
    payload.WithString("sourceIpAddress", m_sourceIpAddress);
  }

  if (m_sourceListenerPortHasBeenSet) {
    payload.WithInteger("sourceListenerPort", m_sourceListenerPort);
  }

  if (m_sourceEncryptionTypeHasBeenSet) {
    payload.WithString("sourceEncryptionType", EndpointEncryptionTypeMapper::GetNameForEndpointEncryptionType(m_sourceEncryptionType));
  }

  if (m_sourceEncryptionConfigurationHasBeenSet) {
    payload.WithObject("sourceEncryptionConfiguration", m_sourceEncryptionConfiguration.Jsonize());
  }

  if (m_sourceEndpointTypeHasBeenSet) {
    payload.WithString("sourceEndpointType", SourceEndpointTypeMapper::GetNameForSourceEndpointType(m_sourceEndpointType));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
