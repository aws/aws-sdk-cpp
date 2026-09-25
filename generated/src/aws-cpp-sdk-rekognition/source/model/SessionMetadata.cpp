/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rekognition/model/SessionMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Rekognition {
namespace Model {

SessionMetadata::SessionMetadata(JsonView jsonValue) { *this = jsonValue; }

SessionMetadata& SessionMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SDKType")) {
    m_sDKType = jsonValue.GetString("SDKType");
    m_sDKTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue SessionMetadata::Jsonize() const {
  JsonValue payload;

  if (m_sDKTypeHasBeenSet) {
    payload.WithString("SDKType", m_sDKType);
  }

  return payload;
}

}  // namespace Model
}  // namespace Rekognition
}  // namespace Aws
