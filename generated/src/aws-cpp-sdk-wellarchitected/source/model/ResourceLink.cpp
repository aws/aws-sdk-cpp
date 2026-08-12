/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/ResourceLink.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

ResourceLink::ResourceLink(JsonView jsonValue) { *this = jsonValue; }

ResourceLink& ResourceLink::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("url")) {
    m_url = jsonValue.GetString("url");
    m_urlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceLink::Jsonize() const {
  JsonValue payload;

  if (m_urlHasBeenSet) {
    payload.WithString("url", m_url);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
