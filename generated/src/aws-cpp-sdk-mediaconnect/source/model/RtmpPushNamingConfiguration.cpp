/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RtmpPushNamingConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RtmpPushNamingConfiguration::RtmpPushNamingConfiguration(JsonView jsonValue) { *this = jsonValue; }

RtmpPushNamingConfiguration& RtmpPushNamingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("manual")) {
    m_manual = jsonValue.GetObject("manual");
    m_manualHasBeenSet = true;
  }
  if (jsonValue.ValueExists("automatic")) {
    m_automatic = jsonValue.GetObject("automatic");
    m_automaticHasBeenSet = true;
  }
  return *this;
}

JsonValue RtmpPushNamingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_manualHasBeenSet) {
    payload.WithObject("manual", m_manual.Jsonize());
  }

  if (m_automaticHasBeenSet) {
    payload.WithObject("automatic", m_automatic.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
