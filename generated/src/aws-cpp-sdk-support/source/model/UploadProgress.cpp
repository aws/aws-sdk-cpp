/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/support/model/UploadProgress.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Support {
namespace Model {

UploadProgress::UploadProgress(JsonView jsonValue) { *this = jsonValue; }

UploadProgress& UploadProgress::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("totalParts")) {
    m_totalParts = jsonValue.GetInteger("totalParts");
    m_totalPartsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("completedPartsCount")) {
    m_completedPartsCount = jsonValue.GetInteger("completedPartsCount");
    m_completedPartsCountHasBeenSet = true;
  }
  return *this;
}

JsonValue UploadProgress::Jsonize() const {
  JsonValue payload;

  if (m_totalPartsHasBeenSet) {
    payload.WithInteger("totalParts", m_totalParts);
  }

  if (m_completedPartsCountHasBeenSet) {
    payload.WithInteger("completedPartsCount", m_completedPartsCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace Support
}  // namespace Aws
