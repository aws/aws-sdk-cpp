/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/support/model/CompletedUpload.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Support {
namespace Model {

CompletedUpload::CompletedUpload(JsonView jsonValue) { *this = jsonValue; }

CompletedUpload& CompletedUpload::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("partIndex")) {
    m_partIndex = jsonValue.GetInteger("partIndex");
    m_partIndexHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eTag")) {
    m_eTag = jsonValue.GetString("eTag");
    m_eTagHasBeenSet = true;
  }
  return *this;
}

JsonValue CompletedUpload::Jsonize() const {
  JsonValue payload;

  if (m_partIndexHasBeenSet) {
    payload.WithInteger("partIndex", m_partIndex);
  }

  if (m_eTagHasBeenSet) {
    payload.WithString("eTag", m_eTag);
  }

  return payload;
}

}  // namespace Model
}  // namespace Support
}  // namespace Aws
