/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AuthenticationType.h>
#include <aws/quicksight/model/OAuthParameters.h>

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
 * <p>The parameters that are required to connect to a Databricks data
 * source.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DatabricksParameters">AWS
 * API Reference</a></p>
 */
class DatabricksParameters {
 public:
  AWS_QUICKSIGHT_API DatabricksParameters() = default;
  AWS_QUICKSIGHT_API DatabricksParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API DatabricksParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The host name of the Databricks data source.</p>
   */
  inline const Aws::String& GetHost() const { return m_host; }
  inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }
  template <typename HostT = Aws::String>
  void SetHost(HostT&& value) {
    m_hostHasBeenSet = true;
    m_host = std::forward<HostT>(value);
  }
  template <typename HostT = Aws::String>
  DatabricksParameters& WithHost(HostT&& value) {
    SetHost(std::forward<HostT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port for the Databricks data source.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline DatabricksParameters& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP path of the Databricks data source.</p>
   */
  inline const Aws::String& GetSqlEndpointPath() const { return m_sqlEndpointPath; }
  inline bool SqlEndpointPathHasBeenSet() const { return m_sqlEndpointPathHasBeenSet; }
  template <typename SqlEndpointPathT = Aws::String>
  void SetSqlEndpointPath(SqlEndpointPathT&& value) {
    m_sqlEndpointPathHasBeenSet = true;
    m_sqlEndpointPath = std::forward<SqlEndpointPathT>(value);
  }
  template <typename SqlEndpointPathT = Aws::String>
  DatabricksParameters& WithSqlEndpointPath(SqlEndpointPathT&& value) {
    SetSqlEndpointPath(std::forward<SqlEndpointPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authentication type that you want to use for your connection. This
   * parameter accepts OAuth and non-OAuth authentication types.</p>
   */
  inline AuthenticationType GetAuthenticationType() const { return m_authenticationType; }
  inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
  inline void SetAuthenticationType(AuthenticationType value) {
    m_authenticationTypeHasBeenSet = true;
    m_authenticationType = value;
  }
  inline DatabricksParameters& WithAuthenticationType(AuthenticationType value) {
    SetAuthenticationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object that contains information needed to create a data source connection
   * between an Quick Sight account and Databricks.</p>
   */
  inline const OAuthParameters& GetOAuthParameters() const { return m_oAuthParameters; }
  inline bool OAuthParametersHasBeenSet() const { return m_oAuthParametersHasBeenSet; }
  template <typename OAuthParametersT = OAuthParameters>
  void SetOAuthParameters(OAuthParametersT&& value) {
    m_oAuthParametersHasBeenSet = true;
    m_oAuthParameters = std::forward<OAuthParametersT>(value);
  }
  template <typename OAuthParametersT = OAuthParameters>
  DatabricksParameters& WithOAuthParameters(OAuthParametersT&& value) {
    SetOAuthParameters(std::forward<OAuthParametersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_host;

  int m_port{0};

  Aws::String m_sqlEndpointPath;

  AuthenticationType m_authenticationType{AuthenticationType::NOT_SET};

  OAuthParameters m_oAuthParameters;
  bool m_hostHasBeenSet = false;
  bool m_portHasBeenSet = false;
  bool m_sqlEndpointPathHasBeenSet = false;
  bool m_authenticationTypeHasBeenSet = false;
  bool m_oAuthParametersHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
