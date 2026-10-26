/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RouterInputDestinationEndpointConnectionDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RouterInputDestinationEndpointConnectionDetails::RouterInputDestinationEndpointConnectionDetails(JsonView jsonValue) { *this = jsonValue; }

RouterInputDestinationEndpointConnectionDetails& RouterInputDestinationEndpointConnectionDetails::operator=(JsonView jsonValue) {
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

JsonValue RouterInputDestinationEndpointConnectionDetails::Jsonize() const {
  JsonValue payload;

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
