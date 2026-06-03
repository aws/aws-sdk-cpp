/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SocialMessaging {
namespace Model {

/**
 * <p>Contains the preview URL for testing a WhatsApp Flow and its expiration
 * timestamp.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/MetaFlowPreviewInfo">AWS
 * API Reference</a></p>
 */
class MetaFlowPreviewInfo {
 public:
  AWS_SOCIALMESSAGING_API MetaFlowPreviewInfo() = default;
  AWS_SOCIALMESSAGING_API MetaFlowPreviewInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API MetaFlowPreviewInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The web URL for previewing the Flow. Can be shared with stakeholders for
   * review.</p>
   */
  inline const Aws::String& GetPreviewUrl() const { return m_previewUrl; }
  inline bool PreviewUrlHasBeenSet() const { return m_previewUrlHasBeenSet; }
  template <typename PreviewUrlT = Aws::String>
  void SetPreviewUrl(PreviewUrlT&& value) {
    m_previewUrlHasBeenSet = true;
    m_previewUrl = std::forward<PreviewUrlT>(value);
  }
  template <typename PreviewUrlT = Aws::String>
  MetaFlowPreviewInfo& WithPreviewUrl(PreviewUrlT&& value) {
    SetPreviewUrl(std::forward<PreviewUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the preview URL expires.</p>
   */
  inline const Aws::String& GetExpiresAt() const { return m_expiresAt; }
  inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
  template <typename ExpiresAtT = Aws::String>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::String>
  MetaFlowPreviewInfo& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_previewUrl;

  Aws::String m_expiresAt;
  bool m_previewUrlHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
