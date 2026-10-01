/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/KbArticle.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

KbArticle::KbArticle(JsonView jsonValue) { *this = jsonValue; }

KbArticle& KbArticle::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Title")) {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Url")) {
    m_url = jsonValue.GetString("Url");
    m_urlHasBeenSet = true;
  }
  return *this;
}

JsonValue KbArticle::Jsonize() const {
  JsonValue payload;

  if (m_titleHasBeenSet) {
    payload.WithString("Title", m_title);
  }

  if (m_urlHasBeenSet) {
    payload.WithString("Url", m_url);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
