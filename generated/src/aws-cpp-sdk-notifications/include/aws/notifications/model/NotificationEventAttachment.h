/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/notifications/Notifications_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Notifications {
namespace Model {

/**
 * <p>A file attached to a notification event.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/NotificationEventAttachment">AWS
 * API Reference</a></p>
 */
class NotificationEventAttachment {
 public:
  AWS_NOTIFICATIONS_API NotificationEventAttachment() = default;
  AWS_NOTIFICATIONS_API NotificationEventAttachment(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOTIFICATIONS_API NotificationEventAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the attachment that recipients see.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  NotificationEventAttachment& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A temporary URL for downloading the attachment. The URL expires shortly after
   * it's issued.</p>
   */
  inline const Aws::String& GetAttachmentDownloadUrl() const { return m_attachmentDownloadUrl; }
  inline bool AttachmentDownloadUrlHasBeenSet() const { return m_attachmentDownloadUrlHasBeenSet; }
  template <typename AttachmentDownloadUrlT = Aws::String>
  void SetAttachmentDownloadUrl(AttachmentDownloadUrlT&& value) {
    m_attachmentDownloadUrlHasBeenSet = true;
    m_attachmentDownloadUrl = std::forward<AttachmentDownloadUrlT>(value);
  }
  template <typename AttachmentDownloadUrlT = Aws::String>
  NotificationEventAttachment& WithAttachmentDownloadUrl(AttachmentDownloadUrlT&& value) {
    SetAttachmentDownloadUrl(std::forward<AttachmentDownloadUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MIME content type of the attachment, for example
   * <code>application/pdf</code>.</p>
   */
  inline const Aws::String& GetContentType() const { return m_contentType; }
  inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
  template <typename ContentTypeT = Aws::String>
  void SetContentType(ContentTypeT&& value) {
    m_contentTypeHasBeenSet = true;
    m_contentType = std::forward<ContentTypeT>(value);
  }
  template <typename ContentTypeT = Aws::String>
  NotificationEventAttachment& WithContentType(ContentTypeT&& value) {
    SetContentType(std::forward<ContentTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_displayName;

  Aws::String m_attachmentDownloadUrl;

  Aws::String m_contentType;
  bool m_displayNameHasBeenSet = false;
  bool m_attachmentDownloadUrlHasBeenSet = false;
  bool m_contentTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Notifications
}  // namespace Aws
