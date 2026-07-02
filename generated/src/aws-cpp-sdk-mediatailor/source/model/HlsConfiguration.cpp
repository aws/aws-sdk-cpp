/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediatailor/model/HlsConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {

HlsConfiguration::HlsConfiguration(JsonView jsonValue) { *this = jsonValue; }

HlsConfiguration& HlsConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ManifestEndpointPrefix")) {
    m_manifestEndpointPrefix = jsonValue.GetString("ManifestEndpointPrefix");
    m_manifestEndpointPrefixHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DualStackManifestEndpointPrefix")) {
    m_dualStackManifestEndpointPrefix = jsonValue.GetString("DualStackManifestEndpointPrefix");
    m_dualStackManifestEndpointPrefixHasBeenSet = true;
  }
  return *this;
}

JsonValue HlsConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_manifestEndpointPrefixHasBeenSet) {
    payload.WithString("ManifestEndpointPrefix", m_manifestEndpointPrefix);
  }

  if (m_dualStackManifestEndpointPrefixHasBeenSet) {
    payload.WithString("DualStackManifestEndpointPrefix", m_dualStackManifestEndpointPrefix);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
