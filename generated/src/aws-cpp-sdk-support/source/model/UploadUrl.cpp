/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/support/model/UploadUrl.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Support {
namespace Model {

UploadUrl::UploadUrl(JsonView jsonValue) { *this = jsonValue; }

UploadUrl& UploadUrl::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("url")) {
    m_url = jsonValue.GetString("url");
    m_urlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("partIndex")) {
    m_partIndex = jsonValue.GetInteger("partIndex");
    m_partIndexHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expiryDate")) {
    m_expiryDate = jsonValue.GetString("expiryDate");
    m_expiryDateHasBeenSet = true;
  }
  return *this;
}

JsonValue UploadUrl::Jsonize() const {
  JsonValue payload;

  if (m_urlHasBeenSet) {
    payload.WithString("url", m_url);
  }

  if (m_partIndexHasBeenSet) {
    payload.WithInteger("partIndex", m_partIndex);
  }

  if (m_expiryDateHasBeenSet) {
    payload.WithString("expiryDate", m_expiryDate);
  }

  return payload;
}

}  // namespace Model
}  // namespace Support
}  // namespace Aws
