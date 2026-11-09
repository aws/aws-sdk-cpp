/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/SourceEndpointConnectionDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

SourceEndpointConnectionDetails::SourceEndpointConnectionDetails(JsonView jsonValue) { *this = jsonValue; }

SourceEndpointConnectionDetails& SourceEndpointConnectionDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("standard")) {
    m_standard = jsonValue.GetObject("standard");
    m_standardHasBeenSet = true;
  }
  if (jsonValue.ValueExists("routerOutput")) {
    m_routerOutput = jsonValue.GetObject("routerOutput");
    m_routerOutputHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceEndpointConnectionDetails::Jsonize() const {
  JsonValue payload;

  if (m_standardHasBeenSet) {
    payload.WithObject("standard", m_standard.Jsonize());
  }

  if (m_routerOutputHasBeenSet) {
    payload.WithObject("routerOutput", m_routerOutput.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
