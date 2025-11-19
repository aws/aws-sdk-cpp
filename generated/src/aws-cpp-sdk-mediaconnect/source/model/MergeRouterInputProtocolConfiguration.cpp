/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/MergeRouterInputProtocolConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

MergeRouterInputProtocolConfiguration::MergeRouterInputProtocolConfiguration(JsonView jsonValue) { *this = jsonValue; }

MergeRouterInputProtocolConfiguration& MergeRouterInputProtocolConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("rtp")) {
    m_rtp = jsonValue.GetObject("rtp");
    m_rtpHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rist")) {
    m_rist = jsonValue.GetObject("rist");
    m_ristHasBeenSet = true;
  }
  return *this;
}

JsonValue MergeRouterInputProtocolConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_rtpHasBeenSet) {
    payload.WithObject("rtp", m_rtp.Jsonize());
  }

  if (m_ristHasBeenSet) {
    payload.WithObject("rist", m_rist.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
