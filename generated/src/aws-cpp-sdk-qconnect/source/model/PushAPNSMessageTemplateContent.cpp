/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/PushAPNSMessageTemplateContent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

PushAPNSMessageTemplateContent::PushAPNSMessageTemplateContent(JsonView jsonValue) { *this = jsonValue; }

PushAPNSMessageTemplateContent& PushAPNSMessageTemplateContent::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("mediaUrl")) {
    m_mediaUrl = jsonValue.GetString("mediaUrl");
    m_mediaUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rawContent")) {
    m_rawContent = jsonValue.GetObject("rawContent");
    m_rawContentHasBeenSet = true;
  }
  return *this;
}

JsonValue PushAPNSMessageTemplateContent::Jsonize() const {
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

  if (m_mediaUrlHasBeenSet) {
    payload.WithString("mediaUrl", m_mediaUrl);
  }

  if (m_rawContentHasBeenSet) {
    payload.WithObject("rawContent", m_rawContent.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
