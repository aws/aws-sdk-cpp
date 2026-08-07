/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediatailor/model/LivePreRollConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {

LivePreRollConfiguration::LivePreRollConfiguration(JsonView jsonValue) { *this = jsonValue; }

LivePreRollConfiguration& LivePreRollConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AdDecisionServerUrl")) {
    m_adDecisionServerUrl = jsonValue.GetString("AdDecisionServerUrl");
    m_adDecisionServerUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaxDurationSeconds")) {
    m_maxDurationSeconds = jsonValue.GetInteger("MaxDurationSeconds");
    m_maxDurationSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AdDecisionServerConfiguration")) {
    m_adDecisionServerConfiguration = jsonValue.GetObject("AdDecisionServerConfiguration");
    m_adDecisionServerConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue LivePreRollConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_adDecisionServerUrlHasBeenSet) {
    payload.WithString("AdDecisionServerUrl", m_adDecisionServerUrl);
  }

  if (m_maxDurationSecondsHasBeenSet) {
    payload.WithInteger("MaxDurationSeconds", m_maxDurationSeconds);
  }

  if (m_adDecisionServerConfigurationHasBeenSet) {
    payload.WithObject("AdDecisionServerConfiguration", m_adDecisionServerConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
