/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/PushADMMessageTemplateContent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

PushADMMessageTemplateContent::PushADMMessageTemplateContent(JsonView jsonValue) { *this = jsonValue; }

PushADMMessageTemplateContent& PushADMMessageTemplateContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("body")) {
    m_body = jsonValue.GetObject("body");
    m_bodyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("action")) {
    m_action = PushMessageActionMapper::GetPushMessageActionForName(jsonValue.GetString("action"));
    m_actionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sound")) {
    m_sound = jsonValue.GetString("sound");
    m_soundHasBeenSet = true;
  }
  if (jsonValue.ValueExists("url")) {
    m_url = jsonValue.GetString("url");
    m_urlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("imageUrl")) {
    m_imageUrl = jsonValue.GetString("imageUrl");
    m_imageUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("imageIconUrl")) {
    m_imageIconUrl = jsonValue.GetString("imageIconUrl");
    m_imageIconUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("smallImageIconUrl")) {
    m_smallImageIconUrl = jsonValue.GetString("smallImageIconUrl");
    m_smallImageIconUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rawContent")) {
    m_rawContent = jsonValue.GetObject("rawContent");
    m_rawContentHasBeenSet = true;
  }
  return *this;
}

JsonValue PushADMMessageTemplateContent::Jsonize() const {
  JsonValue payload;

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_bodyHasBeenSet) {
    payload.WithObject("body", m_body.Jsonize());
  }

  if (m_actionHasBeenSet) {
    payload.WithString("action", PushMessageActionMapper::GetNameForPushMessageAction(m_action));
  }

  if (m_soundHasBeenSet) {
    payload.WithString("sound", m_sound);
  }

  if (m_urlHasBeenSet) {
    payload.WithString("url", m_url);
  }

  if (m_imageUrlHasBeenSet) {
    payload.WithString("imageUrl", m_imageUrl);
  }

  if (m_imageIconUrlHasBeenSet) {
    payload.WithString("imageIconUrl", m_imageIconUrl);
  }

  if (m_smallImageIconUrlHasBeenSet) {
    payload.WithString("smallImageIconUrl", m_smallImageIconUrl);
  }

  if (m_rawContentHasBeenSet) {
    payload.WithObject("rawContent", m_rawContent.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
