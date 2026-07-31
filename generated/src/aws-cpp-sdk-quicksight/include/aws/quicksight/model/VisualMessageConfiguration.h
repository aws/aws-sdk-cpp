/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>The configuration for a customizable message displayed on a visual. Supports
 * parameter substitution in text fields.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/VisualMessageConfiguration">AWS
 * API Reference</a></p>
 */
class VisualMessageConfiguration {
 public:
  AWS_QUICKSIGHT_API VisualMessageConfiguration() = default;
  AWS_QUICKSIGHT_API VisualMessageConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API VisualMessageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether the custom message is displayed on the visual. When set to
   * <code>true</code>, the custom message appears in place of the default message.
   * When set to <code>false</code> or omitted, the default message is displayed.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline VisualMessageConfiguration& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title text of the message that is displayed on the visual.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  VisualMessageConfiguration& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the title of the message is displayed.</p>
   */
  inline Visibility GetTitleVisibility() const { return m_titleVisibility; }
  inline bool TitleVisibilityHasBeenSet() const { return m_titleVisibilityHasBeenSet; }
  inline void SetTitleVisibility(Visibility value) {
    m_titleVisibilityHasBeenSet = true;
    m_titleVisibility = value;
  }
  inline VisualMessageConfiguration& WithTitleVisibility(Visibility value) {
    SetTitleVisibility(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description text of the message that is displayed on the visual.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  VisualMessageConfiguration& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the description of the message is displayed.</p>
   */
  inline Visibility GetDescriptionVisibility() const { return m_descriptionVisibility; }
  inline bool DescriptionVisibilityHasBeenSet() const { return m_descriptionVisibilityHasBeenSet; }
  inline void SetDescriptionVisibility(Visibility value) {
    m_descriptionVisibilityHasBeenSet = true;
    m_descriptionVisibility = value;
  }
  inline VisualMessageConfiguration& WithDescriptionVisibility(Visibility value) {
    SetDescriptionVisibility(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display text of the hyperlink that is shown in the message.</p>
   */
  inline const Aws::String& GetLinkText() const { return m_linkText; }
  inline bool LinkTextHasBeenSet() const { return m_linkTextHasBeenSet; }
  template <typename LinkTextT = Aws::String>
  void SetLinkText(LinkTextT&& value) {
    m_linkTextHasBeenSet = true;
    m_linkText = std::forward<LinkTextT>(value);
  }
  template <typename LinkTextT = Aws::String>
  VisualMessageConfiguration& WithLinkText(LinkTextT&& value) {
    SetLinkText(std::forward<LinkTextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination URL of the hyperlink that is shown in the message. Only valid
   * <code>http</code>, <code>https</code>, and <code>mailto</code> URLs are
   * supported.</p>
   */
  inline const Aws::String& GetLinkUrl() const { return m_linkUrl; }
  inline bool LinkUrlHasBeenSet() const { return m_linkUrlHasBeenSet; }
  template <typename LinkUrlT = Aws::String>
  void SetLinkUrl(LinkUrlT&& value) {
    m_linkUrlHasBeenSet = true;
    m_linkUrl = std::forward<LinkUrlT>(value);
  }
  template <typename LinkUrlT = Aws::String>
  VisualMessageConfiguration& WithLinkUrl(LinkUrlT&& value) {
    SetLinkUrl(std::forward<LinkUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the hyperlink in the message is displayed.</p>
   */
  inline Visibility GetLinkVisibility() const { return m_linkVisibility; }
  inline bool LinkVisibilityHasBeenSet() const { return m_linkVisibilityHasBeenSet; }
  inline void SetLinkVisibility(Visibility value) {
    m_linkVisibilityHasBeenSet = true;
    m_linkVisibility = value;
  }
  inline VisualMessageConfiguration& WithLinkVisibility(Visibility value) {
    SetLinkVisibility(value);
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};

  Aws::String m_title;

  Visibility m_titleVisibility{Visibility::NOT_SET};

  Aws::String m_description;

  Visibility m_descriptionVisibility{Visibility::NOT_SET};

  Aws::String m_linkText;

  Aws::String m_linkUrl;

  Visibility m_linkVisibility{Visibility::NOT_SET};
  bool m_enabledHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_titleVisibilityHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_descriptionVisibilityHasBeenSet = false;
  bool m_linkTextHasBeenSet = false;
  bool m_linkUrlHasBeenSet = false;
  bool m_linkVisibilityHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
