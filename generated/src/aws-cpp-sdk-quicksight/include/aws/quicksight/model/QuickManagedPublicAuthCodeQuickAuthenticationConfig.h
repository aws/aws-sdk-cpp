/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>The configuration of a Quick Sight-managed public client that uses
 * PKCE.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/QuickManagedPublicAuthCodeQuickAuthenticationConfig">AWS
 * API Reference</a></p>
 */
class QuickManagedPublicAuthCodeQuickAuthenticationConfig {
 public:
  AWS_QUICKSIGHT_API QuickManagedPublicAuthCodeQuickAuthenticationConfig() = default;
  AWS_QUICKSIGHT_API QuickManagedPublicAuthCodeQuickAuthenticationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API QuickManagedPublicAuthCodeQuickAuthenticationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The OAuth 2.0 redirect URIs of the client.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRedirectUris() const { return m_redirectUris; }
  inline bool RedirectUrisHasBeenSet() const { return m_redirectUrisHasBeenSet; }
  template <typename RedirectUrisT = Aws::Vector<Aws::String>>
  void SetRedirectUris(RedirectUrisT&& value) {
    m_redirectUrisHasBeenSet = true;
    m_redirectUris = std::forward<RedirectUrisT>(value);
  }
  template <typename RedirectUrisT = Aws::Vector<Aws::String>>
  QuickManagedPublicAuthCodeQuickAuthenticationConfig& WithRedirectUris(RedirectUrisT&& value) {
    SetRedirectUris(std::forward<RedirectUrisT>(value));
    return *this;
  }
  template <typename RedirectUrisT = Aws::String>
  QuickManagedPublicAuthCodeQuickAuthenticationConfig& AddRedirectUris(RedirectUrisT&& value) {
    m_redirectUrisHasBeenSet = true;
    m_redirectUris.emplace_back(std::forward<RedirectUrisT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth 2.0 client ID.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  QuickManagedPublicAuthCodeQuickAuthenticationConfig& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_redirectUris;

  Aws::String m_clientId;
  bool m_redirectUrisHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
