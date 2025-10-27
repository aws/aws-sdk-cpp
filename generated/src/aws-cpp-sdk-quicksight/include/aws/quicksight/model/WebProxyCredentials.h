/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
 * <p>The credentials for authenticating with a web proxy server.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/WebProxyCredentials">AWS
 * API Reference</a></p>
 */
class WebProxyCredentials {
 public:
  AWS_QUICKSIGHT_API WebProxyCredentials() = default;
  AWS_QUICKSIGHT_API WebProxyCredentials(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API WebProxyCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The username for authenticating with the web proxy server.</p>
   */
  inline const Aws::String& GetWebProxyUsername() const { return m_webProxyUsername; }
  inline bool WebProxyUsernameHasBeenSet() const { return m_webProxyUsernameHasBeenSet; }
  template <typename WebProxyUsernameT = Aws::String>
  void SetWebProxyUsername(WebProxyUsernameT&& value) {
    m_webProxyUsernameHasBeenSet = true;
    m_webProxyUsername = std::forward<WebProxyUsernameT>(value);
  }
  template <typename WebProxyUsernameT = Aws::String>
  WebProxyCredentials& WithWebProxyUsername(WebProxyUsernameT&& value) {
    SetWebProxyUsername(std::forward<WebProxyUsernameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The password for authenticating with the web proxy server.</p>
   */
  inline const Aws::String& GetWebProxyPassword() const { return m_webProxyPassword; }
  inline bool WebProxyPasswordHasBeenSet() const { return m_webProxyPasswordHasBeenSet; }
  template <typename WebProxyPasswordT = Aws::String>
  void SetWebProxyPassword(WebProxyPasswordT&& value) {
    m_webProxyPasswordHasBeenSet = true;
    m_webProxyPassword = std::forward<WebProxyPasswordT>(value);
  }
  template <typename WebProxyPasswordT = Aws::String>
  WebProxyCredentials& WithWebProxyPassword(WebProxyPasswordT&& value) {
    SetWebProxyPassword(std::forward<WebProxyPasswordT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_webProxyUsername;
  bool m_webProxyUsernameHasBeenSet = false;

  Aws::String m_webProxyPassword;
  bool m_webProxyPasswordHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
