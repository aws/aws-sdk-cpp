/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RouterInputConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RouterInputConfiguration::RouterInputConfiguration(JsonView jsonValue) { *this = jsonValue; }

RouterInputConfiguration& RouterInputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("standard")) {
    m_standard = jsonValue.GetObject("standard");
    m_standardHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mediaLiveChannel")) {
    m_mediaLiveChannel = jsonValue.GetObject("mediaLiveChannel");
    m_mediaLiveChannelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failover")) {
    m_failover = jsonValue.GetObject("failover");
    m_failoverHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mediaConnectFlow")) {
    m_mediaConnectFlow = jsonValue.GetObject("mediaConnectFlow");
    m_mediaConnectFlowHasBeenSet = true;
  }
  if (jsonValue.ValueExists("merge")) {
    m_merge = jsonValue.GetObject("merge");
    m_mergeHasBeenSet = true;
  }
  return *this;
}

JsonValue RouterInputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_standardHasBeenSet) {
    payload.WithObject("standard", m_standard.Jsonize());
  }

  if (m_mediaLiveChannelHasBeenSet) {
    payload.WithObject("mediaLiveChannel", m_mediaLiveChannel.Jsonize());
  }

  if (m_failoverHasBeenSet) {
    payload.WithObject("failover", m_failover.Jsonize());
  }

  if (m_mediaConnectFlowHasBeenSet) {
    payload.WithObject("mediaConnectFlow", m_mediaConnectFlow.Jsonize());
  }

  if (m_mergeHasBeenSet) {
    payload.WithObject("merge", m_merge.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
