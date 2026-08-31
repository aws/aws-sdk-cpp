/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/support/model/UploadRange.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Support {
namespace Model {

UploadRange::UploadRange(JsonView jsonValue) { *this = jsonValue; }

UploadRange& UploadRange::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("startIndex")) {
    m_startIndex = jsonValue.GetInteger("startIndex");
    m_startIndexHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endIndex")) {
    m_endIndex = jsonValue.GetInteger("endIndex");
    m_endIndexHasBeenSet = true;
  }
  return *this;
}

JsonValue UploadRange::Jsonize() const {
  JsonValue payload;

  if (m_startIndexHasBeenSet) {
    payload.WithInteger("startIndex", m_startIndex);
  }

  if (m_endIndexHasBeenSet) {
    payload.WithInteger("endIndex", m_endIndex);
  }

  return payload;
}

}  // namespace Model
}  // namespace Support
}  // namespace Aws
