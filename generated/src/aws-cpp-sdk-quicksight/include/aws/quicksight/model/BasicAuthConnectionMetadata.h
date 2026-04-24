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
 * <p>Metadata for basic authentication using username and password.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BasicAuthConnectionMetadata">AWS
 * API Reference</a></p>
 */
class BasicAuthConnectionMetadata {
 public:
  AWS_QUICKSIGHT_API BasicAuthConnectionMetadata() = default;
  AWS_QUICKSIGHT_API BasicAuthConnectionMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API BasicAuthConnectionMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The base URL endpoint for the external service.</p>
   */
  inline const Aws::String& GetBaseEndpoint() const { return m_baseEndpoint; }
  inline bool BaseEndpointHasBeenSet() const { return m_baseEndpointHasBeenSet; }
  template <typename BaseEndpointT = Aws::String>
  void SetBaseEndpoint(BaseEndpointT&& value) {
    m_baseEndpointHasBeenSet = true;
    m_baseEndpoint = std::forward<BaseEndpointT>(value);
  }
  template <typename BaseEndpointT = Aws::String>
  BasicAuthConnectionMetadata& WithBaseEndpoint(BaseEndpointT&& value) {
    SetBaseEndpoint(std::forward<BaseEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The username for basic authentication.</p>
   */
  inline const Aws::String& GetUsername() const { return m_username; }
  inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
  template <typename UsernameT = Aws::String>
  void SetUsername(UsernameT&& value) {
    m_usernameHasBeenSet = true;
    m_username = std::forward<UsernameT>(value);
  }
  template <typename UsernameT = Aws::String>
  BasicAuthConnectionMetadata& WithUsername(UsernameT&& value) {
    SetUsername(std::forward<UsernameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The password for basic authentication.</p>
   */
  inline const Aws::String& GetPassword() const { return m_password; }
  inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
  template <typename PasswordT = Aws::String>
  void SetPassword(PasswordT&& value) {
    m_passwordHasBeenSet = true;
    m_password = std::forward<PasswordT>(value);
  }
  template <typename PasswordT = Aws::String>
  BasicAuthConnectionMetadata& WithPassword(PasswordT&& value) {
    SetPassword(std::forward<PasswordT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_baseEndpoint;

  Aws::String m_username;

  Aws::String m_password;
  bool m_baseEndpointHasBeenSet = false;
  bool m_usernameHasBeenSet = false;
  bool m_passwordHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
