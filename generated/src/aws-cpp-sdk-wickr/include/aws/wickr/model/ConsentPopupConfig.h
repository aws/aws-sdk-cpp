/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/Wickr_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Wickr {
namespace Model {

/**
 * <p>Consent popup configuration displayed to users on login.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/ConsentPopupConfig">AWS
 * API Reference</a></p>
 */
class ConsentPopupConfig {
 public:
  AWS_WICKR_API ConsentPopupConfig() = default;
  AWS_WICKR_API ConsentPopupConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API ConsentPopupConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether the consent popup is enabled. When set to true, the popup is
   * displayed to users on login.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline ConsentPopupConfig& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Header text displayed at the top of the consent popup. Maximum 100
   * characters.</p>
   */
  inline const Aws::String& GetHeader() const { return m_header; }
  inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }
  template <typename HeaderT = Aws::String>
  void SetHeader(HeaderT&& value) {
    m_headerHasBeenSet = true;
    m_header = std::forward<HeaderT>(value);
  }
  template <typename HeaderT = Aws::String>
  ConsentPopupConfig& WithHeader(HeaderT&& value) {
    SetHeader(std::forward<HeaderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Body content of the consent popup in Markdown format. Maximum 5000
   * characters.</p>
   */
  inline const Aws::String& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::String>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::String>
  ConsentPopupConfig& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Label for the close button on the consent popup. Maximum 20 characters.
   * Defaults to "Acknowledge" if not provided.</p>
   */
  inline const Aws::String& GetCloseButtonLabel() const { return m_closeButtonLabel; }
  inline bool CloseButtonLabelHasBeenSet() const { return m_closeButtonLabelHasBeenSet; }
  template <typename CloseButtonLabelT = Aws::String>
  void SetCloseButtonLabel(CloseButtonLabelT&& value) {
    m_closeButtonLabelHasBeenSet = true;
    m_closeButtonLabel = std::forward<CloseButtonLabelT>(value);
  }
  template <typename CloseButtonLabelT = Aws::String>
  ConsentPopupConfig& WithCloseButtonLabel(CloseButtonLabelT&& value) {
    SetCloseButtonLabel(std::forward<CloseButtonLabelT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};

  Aws::String m_header;

  Aws::String m_content;

  Aws::String m_closeButtonLabel;
  bool m_enabledHasBeenSet = false;
  bool m_headerHasBeenSet = false;
  bool m_contentHasBeenSet = false;
  bool m_closeButtonLabelHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
