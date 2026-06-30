/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PinpointSMSVoiceV2 {
namespace Model {

/**
 * <p>A suggested action that opens a URL in the recipient's browser or an in-app
 * webview.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RcsOpenUrlAction">AWS
 * API Reference</a></p>
 */
class RcsOpenUrlAction {
 public:
  AWS_PINPOINTSMSVOICEV2_API RcsOpenUrlAction() = default;
  AWS_PINPOINTSMSVOICEV2_API RcsOpenUrlAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API RcsOpenUrlAction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The display text of the action. Maximum 25 characters.</p>
   */
  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  RcsOpenUrlAction& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The postback data sent to your webhook when the user taps this action.
   * Maximum 2048 characters.</p>
   */
  inline const Aws::String& GetPostbackData() const { return m_postbackData; }
  inline bool PostbackDataHasBeenSet() const { return m_postbackDataHasBeenSet; }
  template <typename PostbackDataT = Aws::String>
  void SetPostbackData(PostbackDataT&& value) {
    m_postbackDataHasBeenSet = true;
    m_postbackData = std::forward<PostbackDataT>(value);
  }
  template <typename PostbackDataT = Aws::String>
  RcsOpenUrlAction& WithPostbackData(PostbackDataT&& value) {
    SetPostbackData(std::forward<PostbackDataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL to open. Must start with https://. Maximum 2048 characters.</p>
   */
  inline const Aws::String& GetUrl() const { return m_url; }
  inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
  template <typename UrlT = Aws::String>
  void SetUrl(UrlT&& value) {
    m_urlHasBeenSet = true;
    m_url = std::forward<UrlT>(value);
  }
  template <typename UrlT = Aws::String>
  RcsOpenUrlAction& WithUrl(UrlT&& value) {
    SetUrl(std::forward<UrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How to open the URL. BROWSER opens in the device's default browser. WEBVIEW
   * opens in an in-app webview.</p>
   */
  inline const Aws::String& GetApplication() const { return m_application; }
  inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }
  template <typename ApplicationT = Aws::String>
  void SetApplication(ApplicationT&& value) {
    m_applicationHasBeenSet = true;
    m_application = std::forward<ApplicationT>(value);
  }
  template <typename ApplicationT = Aws::String>
  RcsOpenUrlAction& WithApplication(ApplicationT&& value) {
    SetApplication(std::forward<ApplicationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display mode of the webview. Valid values are FULL, HALF, and TALL. Only
   * applicable when Application is WEBVIEW.</p>
   */
  inline const Aws::String& GetWebviewViewMode() const { return m_webviewViewMode; }
  inline bool WebviewViewModeHasBeenSet() const { return m_webviewViewModeHasBeenSet; }
  template <typename WebviewViewModeT = Aws::String>
  void SetWebviewViewMode(WebviewViewModeT&& value) {
    m_webviewViewModeHasBeenSet = true;
    m_webviewViewMode = std::forward<WebviewViewModeT>(value);
  }
  template <typename WebviewViewModeT = Aws::String>
  RcsOpenUrlAction& WithWebviewViewMode(WebviewViewModeT&& value) {
    SetWebviewViewMode(std::forward<WebviewViewModeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_text;

  Aws::String m_postbackData;

  Aws::String m_url;

  Aws::String m_application;

  Aws::String m_webviewViewMode;
  bool m_textHasBeenSet = false;
  bool m_postbackDataHasBeenSet = false;
  bool m_urlHasBeenSet = false;
  bool m_applicationHasBeenSet = false;
  bool m_webviewViewModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
