/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/StatefulEngineOptionsV2.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

StatefulEngineOptionsV2::StatefulEngineOptionsV2(JsonView jsonValue) { *this = jsonValue; }

StatefulEngineOptionsV2& StatefulEngineOptionsV2::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StreamExceptionPolicy")) {
    m_streamExceptionPolicy =
        StreamExceptionPolicyV2Mapper::GetStreamExceptionPolicyV2ForName(jsonValue.GetString("StreamExceptionPolicy"));
    m_streamExceptionPolicyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FlowTimeouts")) {
    m_flowTimeouts = jsonValue.GetObject("FlowTimeouts");
    m_flowTimeoutsHasBeenSet = true;
  }
  return *this;
}

JsonValue StatefulEngineOptionsV2::Jsonize() const {
  JsonValue payload;

  if (m_streamExceptionPolicyHasBeenSet) {
    payload.WithString("StreamExceptionPolicy", StreamExceptionPolicyV2Mapper::GetNameForStreamExceptionPolicyV2(m_streamExceptionPolicy));
  }

  if (m_flowTimeoutsHasBeenSet) {
    payload.WithObject("FlowTimeouts", m_flowTimeouts.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
