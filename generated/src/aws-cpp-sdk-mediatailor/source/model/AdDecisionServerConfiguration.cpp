/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediatailor/model/AdDecisionServerConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {

AdDecisionServerConfiguration::AdDecisionServerConfiguration(JsonView jsonValue) { *this = jsonValue; }

AdDecisionServerConfiguration& AdDecisionServerConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("HttpRequest")) {
    m_httpRequest = jsonValue.GetObject("HttpRequest");
    m_httpRequestHasBeenSet = true;
  }
  return *this;
}

JsonValue AdDecisionServerConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_httpRequestHasBeenSet) {
    payload.WithObject("HttpRequest", m_httpRequest.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
