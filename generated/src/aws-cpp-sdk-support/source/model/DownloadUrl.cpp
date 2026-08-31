/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/support/model/DownloadUrl.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Support {
namespace Model {

DownloadUrl::DownloadUrl(JsonView jsonValue) { *this = jsonValue; }

DownloadUrl& DownloadUrl::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("url")) {
    m_url = jsonValue.GetString("url");
    m_urlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expiryDate")) {
    m_expiryDate = jsonValue.GetString("expiryDate");
    m_expiryDateHasBeenSet = true;
  }
  return *this;
}

JsonValue DownloadUrl::Jsonize() const {
  JsonValue payload;

  if (m_urlHasBeenSet) {
    payload.WithString("url", m_url);
  }

  if (m_expiryDateHasBeenSet) {
    payload.WithString("expiryDate", m_expiryDate);
  }

  return payload;
}

}  // namespace Model
}  // namespace Support
}  // namespace Aws
