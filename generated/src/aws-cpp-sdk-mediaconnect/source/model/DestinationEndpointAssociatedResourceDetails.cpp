/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/DestinationEndpointAssociatedResourceDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

DestinationEndpointAssociatedResourceDetails::DestinationEndpointAssociatedResourceDetails(JsonView jsonValue) { *this = jsonValue; }

DestinationEndpointAssociatedResourceDetails& DestinationEndpointAssociatedResourceDetails::operator=(JsonView jsonValue) {
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

JsonValue DestinationEndpointAssociatedResourceDetails::Jsonize() const {
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
