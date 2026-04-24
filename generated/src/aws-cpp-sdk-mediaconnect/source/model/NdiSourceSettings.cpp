/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/NdiSourceSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

NdiSourceSettings::NdiSourceSettings(JsonView jsonValue) { *this = jsonValue; }

NdiSourceSettings& NdiSourceSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceName")) {
    m_sourceName = jsonValue.GetString("sourceName");
    m_sourceNameHasBeenSet = true;
  }
  return *this;
}

JsonValue NdiSourceSettings::Jsonize() const {
  JsonValue payload;

  if (m_sourceNameHasBeenSet) {
    payload.WithString("sourceName", m_sourceName);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
