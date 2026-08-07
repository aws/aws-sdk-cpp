/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediatailor/model/PreRollAdDecisionServerConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {

PreRollAdDecisionServerConfiguration::PreRollAdDecisionServerConfiguration(JsonView jsonValue) { *this = jsonValue; }

PreRollAdDecisionServerConfiguration& PreRollAdDecisionServerConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("VastResponse")) {
    m_vastResponse = jsonValue.GetObject("VastResponse");
    m_vastResponseHasBeenSet = true;
  }
  return *this;
}

JsonValue PreRollAdDecisionServerConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_vastResponseHasBeenSet) {
    payload.WithObject("VastResponse", m_vastResponse.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
