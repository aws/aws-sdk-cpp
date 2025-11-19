/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RouterInputMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RouterInputMetadata::RouterInputMetadata(JsonView jsonValue) { *this = jsonValue; }

RouterInputMetadata& RouterInputMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("transportStreamMediaInfo")) {
    m_transportStreamMediaInfo = jsonValue.GetObject("transportStreamMediaInfo");
    m_transportStreamMediaInfoHasBeenSet = true;
  }
  return *this;
}

JsonValue RouterInputMetadata::Jsonize() const {
  JsonValue payload;

  if (m_transportStreamMediaInfoHasBeenSet) {
    payload.WithObject("transportStreamMediaInfo", m_transportStreamMediaInfo.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
