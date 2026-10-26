/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/DestinationEndpointConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

DestinationEndpointConfiguration::DestinationEndpointConfiguration(JsonView jsonValue) { *this = jsonValue; }

DestinationEndpointConfiguration& DestinationEndpointConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("standard")) {
    m_standard = jsonValue.GetObject("standard");
    m_standardHasBeenSet = true;
  }
  if (jsonValue.ValueExists("routerInput")) {
    m_routerInput = jsonValue.GetObject("routerInput");
    m_routerInputHasBeenSet = true;
  }
  return *this;
}

JsonValue DestinationEndpointConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_standardHasBeenSet) {
    payload.WithObject("standard", m_standard.Jsonize());
  }

  if (m_routerInputHasBeenSet) {
    payload.WithObject("routerInput", m_routerInput.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
