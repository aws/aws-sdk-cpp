/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/NetworkSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {

NetworkSettings::NetworkSettings(JsonView jsonValue) { *this = jsonValue; }

NetworkSettings& NetworkSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("enableClientMetrics")) {
    m_enableClientMetrics = jsonValue.GetBool("enableClientMetrics");
    m_enableClientMetricsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("readReceiptConfig")) {
    m_readReceiptConfig = jsonValue.GetObject("readReceiptConfig");
    m_readReceiptConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataRetention")) {
    m_dataRetention = jsonValue.GetBool("dataRetention");
    m_dataRetentionHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkSettings::Jsonize() const {
  JsonValue payload;

  if (m_enableClientMetricsHasBeenSet) {
    payload.WithBool("enableClientMetrics", m_enableClientMetrics);
  }

  if (m_readReceiptConfigHasBeenSet) {
    payload.WithObject("readReceiptConfig", m_readReceiptConfig.Jsonize());
  }

  if (m_dataRetentionHasBeenSet) {
    payload.WithBool("dataRetention", m_dataRetention);
  }

  return payload;
}

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
