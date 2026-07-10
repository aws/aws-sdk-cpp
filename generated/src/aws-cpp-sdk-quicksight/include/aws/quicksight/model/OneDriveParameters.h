/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AuthType.h>

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
 * <p>The connection parameters for an OneDrive data source. Provide these
 * parameters in the <code>DataSourceParameters</code> object when you create or
 * update a data source that uses OneDrive.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/OneDriveParameters">AWS
 * API Reference</a></p>
 */
class OneDriveParameters {
 public:
  AWS_QUICKSIGHT_API OneDriveParameters() = default;
  AWS_QUICKSIGHT_API OneDriveParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API OneDriveParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The tenant ID for the OneDrive data source.</p>
   */
  inline const Aws::String& GetTenantId() const { return m_tenantId; }
  inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }
  template <typename TenantIdT = Aws::String>
  void SetTenantId(TenantIdT&& value) {
    m_tenantIdHasBeenSet = true;
    m_tenantId = std::forward<TenantIdT>(value);
  }
  template <typename TenantIdT = Aws::String>
  OneDriveParameters& WithTenantId(TenantIdT&& value) {
    SetTenantId(std::forward<TenantIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client ID for the OneDrive data source.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  OneDriveParameters& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authentication type for the OneDrive data source. Valid values
   * include:</p> <ul> <li> <p> <code>TWO_LEGGED_OAUTH</code> – Server-to-server
   * authentication using client credentials that do not require user
   * interaction.</p> </li> <li> <p> <code>THREE_LEGGED_OAUTH</code> – Interactive
   * OAuth that requires user consent.</p> </li> </ul>
   */
  inline AuthType GetAuthType() const { return m_authType; }
  inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }
  inline void SetAuthType(AuthType value) {
    m_authTypeHasBeenSet = true;
    m_authType = value;
  }
  inline OneDriveParameters& WithAuthType(AuthType value) {
    SetAuthType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_tenantId;

  Aws::String m_clientId;

  AuthType m_authType{AuthType::NOT_SET};
  bool m_tenantIdHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
  bool m_authTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
