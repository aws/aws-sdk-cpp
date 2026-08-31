/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support/Support_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Support {
namespace Model {

/**
 * <p>A presigned URL for downloading an attachment, along with the date and time
 * the URL expires. Returned by <a>GetAttachmentDownloadLink</a>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DownloadUrl">AWS
 * API Reference</a></p>
 */
class DownloadUrl {
 public:
  AWS_SUPPORT_API DownloadUrl() = default;
  AWS_SUPPORT_API DownloadUrl(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORT_API DownloadUrl& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The presigned HTTPS URL that you can use to download the attachment. Download
   * URLs are served from
   * <code>downloadv1.attachments.support.{region}.amazonaws.com</code>. The
   * <code>downloadv1</code> prefix is subject to change.</p>
   */
  inline const Aws::String& GetUrl() const { return m_url; }
  inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
  template <typename UrlT = Aws::String>
  void SetUrl(UrlT&& value) {
    m_urlHasBeenSet = true;
    m_url = std::forward<UrlT>(value);
  }
  template <typename UrlT = Aws::String>
  DownloadUrl& WithUrl(UrlT&& value) {
    SetUrl(std::forward<UrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time, in ISO-8601 format, when the presigned URL expires.
   * Download the attachment before this time.</p>
   */
  inline const Aws::String& GetExpiryDate() const { return m_expiryDate; }
  inline bool ExpiryDateHasBeenSet() const { return m_expiryDateHasBeenSet; }
  template <typename ExpiryDateT = Aws::String>
  void SetExpiryDate(ExpiryDateT&& value) {
    m_expiryDateHasBeenSet = true;
    m_expiryDate = std::forward<ExpiryDateT>(value);
  }
  template <typename ExpiryDateT = Aws::String>
  DownloadUrl& WithExpiryDate(ExpiryDateT&& value) {
    SetExpiryDate(std::forward<ExpiryDateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_url;

  Aws::String m_expiryDate;
  bool m_urlHasBeenSet = false;
  bool m_expiryDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace Support
}  // namespace Aws
