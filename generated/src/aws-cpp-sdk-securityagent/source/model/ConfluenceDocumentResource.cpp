/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/ConfluenceDocumentResource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

ConfluenceDocumentResource::ConfluenceDocumentResource(JsonView jsonValue) { *this = jsonValue; }

ConfluenceDocumentResource& ConfluenceDocumentResource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("spaceKey")) {
    m_spaceKey = jsonValue.GetString("spaceKey");
    m_spaceKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pageId")) {
    m_pageId = jsonValue.GetString("pageId");
    m_pageIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("spaceTitle")) {
    m_spaceTitle = jsonValue.GetString("spaceTitle");
    m_spaceTitleHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfluenceDocumentResource::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_spaceKeyHasBeenSet) {
    payload.WithString("spaceKey", m_spaceKey);
  }

  if (m_pageIdHasBeenSet) {
    payload.WithString("pageId", m_pageId);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_spaceTitleHasBeenSet) {
    payload.WithString("spaceTitle", m_spaceTitle);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
