/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RouterInputProtocolConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RouterInputProtocolConfiguration::RouterInputProtocolConfiguration(JsonView jsonValue) { *this = jsonValue; }

RouterInputProtocolConfiguration& RouterInputProtocolConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("rtp")) {
    m_rtp = jsonValue.GetObject("rtp");
    m_rtpHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rist")) {
    m_rist = jsonValue.GetObject("rist");
    m_ristHasBeenSet = true;
  }
  if (jsonValue.ValueExists("srtListener")) {
    m_srtListener = jsonValue.GetObject("srtListener");
    m_srtListenerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("srtCaller")) {
    m_srtCaller = jsonValue.GetObject("srtCaller");
    m_srtCallerHasBeenSet = true;
  }
  return *this;
}

JsonValue RouterInputProtocolConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_rtpHasBeenSet) {
    payload.WithObject("rtp", m_rtp.Jsonize());
  }

  if (m_ristHasBeenSet) {
    payload.WithObject("rist", m_rist.Jsonize());
  }

  if (m_srtListenerHasBeenSet) {
    payload.WithObject("srtListener", m_srtListener.Jsonize());
  }

  if (m_srtCallerHasBeenSet) {
    payload.WithObject("srtCaller", m_srtCaller.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
