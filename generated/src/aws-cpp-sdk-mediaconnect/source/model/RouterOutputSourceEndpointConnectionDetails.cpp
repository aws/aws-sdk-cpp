/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RouterOutputSourceEndpointConnectionDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RouterOutputSourceEndpointConnectionDetails::RouterOutputSourceEndpointConnectionDetails(JsonView jsonValue) { *this = jsonValue; }

RouterOutputSourceEndpointConnectionDetails& RouterOutputSourceEndpointConnectionDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("destinationDecryptionType")) {
    m_destinationDecryptionType =
        EndpointEncryptionTypeMapper::GetEndpointEncryptionTypeForName(jsonValue.GetString("destinationDecryptionType"));
    m_destinationDecryptionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationDecryptionConfiguration")) {
    m_destinationDecryptionConfiguration = jsonValue.GetObject("destinationDecryptionConfiguration");
    m_destinationDecryptionConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationEndpointType")) {
    m_destinationEndpointType =
        DestinationEndpointTypeMapper::GetDestinationEndpointTypeForName(jsonValue.GetString("destinationEndpointType"));
    m_destinationEndpointTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue RouterOutputSourceEndpointConnectionDetails::Jsonize() const {
  JsonValue payload;

  if (m_destinationDecryptionTypeHasBeenSet) {
    payload.WithString("destinationDecryptionType",
                       EndpointEncryptionTypeMapper::GetNameForEndpointEncryptionType(m_destinationDecryptionType));
  }

  if (m_destinationDecryptionConfigurationHasBeenSet) {
    payload.WithObject("destinationDecryptionConfiguration", m_destinationDecryptionConfiguration.Jsonize());
  }

  if (m_destinationEndpointTypeHasBeenSet) {
    payload.WithString("destinationEndpointType",
                       DestinationEndpointTypeMapper::GetNameForDestinationEndpointType(m_destinationEndpointType));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
