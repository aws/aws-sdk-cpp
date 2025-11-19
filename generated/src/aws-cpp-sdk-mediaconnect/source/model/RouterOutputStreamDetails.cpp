/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RouterOutputStreamDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RouterOutputStreamDetails::RouterOutputStreamDetails(JsonView jsonValue) { *this = jsonValue; }

RouterOutputStreamDetails& RouterOutputStreamDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("standard")) {
    m_standard = jsonValue.GetObject("standard");
    m_standardHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mediaConnectFlow")) {
    m_mediaConnectFlow = jsonValue.GetObject("mediaConnectFlow");
    m_mediaConnectFlowHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mediaLiveInput")) {
    m_mediaLiveInput = jsonValue.GetObject("mediaLiveInput");
    m_mediaLiveInputHasBeenSet = true;
  }
  return *this;
}

JsonValue RouterOutputStreamDetails::Jsonize() const {
  JsonValue payload;

  if (m_standardHasBeenSet) {
    payload.WithObject("standard", m_standard.Jsonize());
  }

  if (m_mediaConnectFlowHasBeenSet) {
    payload.WithObject("mediaConnectFlow", m_mediaConnectFlow.Jsonize());
  }

  if (m_mediaLiveInputHasBeenSet) {
    payload.WithObject("mediaLiveInput", m_mediaLiveInput.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
