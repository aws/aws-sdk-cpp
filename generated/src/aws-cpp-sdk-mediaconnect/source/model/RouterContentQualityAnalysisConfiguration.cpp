/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RouterContentQualityAnalysisConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RouterContentQualityAnalysisConfiguration::RouterContentQualityAnalysisConfiguration(JsonView jsonValue) { *this = jsonValue; }

RouterContentQualityAnalysisConfiguration& RouterContentQualityAnalysisConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("contentLevel")) {
    m_contentLevel = jsonValue.GetObject("contentLevel");
    m_contentLevelHasBeenSet = true;
  }
  return *this;
}

JsonValue RouterContentQualityAnalysisConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_contentLevelHasBeenSet) {
    payload.WithObject("contentLevel", m_contentLevel.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
