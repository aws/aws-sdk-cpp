/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/LinkConfigParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

LinkConfigParameters::LinkConfigParameters(JsonView jsonValue) { *this = jsonValue; }

LinkConfigParameters& LinkConfigParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("logSettings")) {
    m_logSettings = jsonValue.GetObject("logSettings");
    m_logSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeoutInMillis")) {
    m_timeoutInMillis = jsonValue.GetInt64("timeoutInMillis");
    m_timeoutInMillisHasBeenSet = true;
  }
  return *this;
}

JsonValue LinkConfigParameters::Jsonize() const {
  JsonValue payload;

  if (m_logSettingsHasBeenSet) {
    payload.WithObject("logSettings", m_logSettings.Jsonize());
  }

  if (m_timeoutInMillisHasBeenSet) {
    payload.WithInt64("timeoutInMillis", m_timeoutInMillis);
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
