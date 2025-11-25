/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/TlsInterceptProperties.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

TlsInterceptProperties::TlsInterceptProperties(JsonView jsonValue) { *this = jsonValue; }

TlsInterceptProperties& TlsInterceptProperties::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PcaArn")) {
    m_pcaArn = jsonValue.GetString("PcaArn");
    m_pcaArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TlsInterceptMode")) {
    m_tlsInterceptMode = TlsInterceptModeMapper::GetTlsInterceptModeForName(jsonValue.GetString("TlsInterceptMode"));
    m_tlsInterceptModeHasBeenSet = true;
  }
  return *this;
}

JsonValue TlsInterceptProperties::Jsonize() const {
  JsonValue payload;

  if (m_pcaArnHasBeenSet) {
    payload.WithString("PcaArn", m_pcaArn);
  }

  if (m_tlsInterceptModeHasBeenSet) {
    payload.WithString("TlsInterceptMode", TlsInterceptModeMapper::GetNameForTlsInterceptMode(m_tlsInterceptMode));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
