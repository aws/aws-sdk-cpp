/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/notifications/model/NotificationEventAttachment.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Notifications {
namespace Model {

NotificationEventAttachment::NotificationEventAttachment(JsonView jsonValue) { *this = jsonValue; }

NotificationEventAttachment& NotificationEventAttachment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attachmentDownloadUrl")) {
    m_attachmentDownloadUrl = jsonValue.GetString("attachmentDownloadUrl");
    m_attachmentDownloadUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contentType")) {
    m_contentType = jsonValue.GetString("contentType");
    m_contentTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue NotificationEventAttachment::Jsonize() const {
  JsonValue payload;

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_attachmentDownloadUrlHasBeenSet) {
    payload.WithString("attachmentDownloadUrl", m_attachmentDownloadUrl);
  }

  if (m_contentTypeHasBeenSet) {
    payload.WithString("contentType", m_contentType);
  }

  return payload;
}

}  // namespace Model
}  // namespace Notifications
}  // namespace Aws
