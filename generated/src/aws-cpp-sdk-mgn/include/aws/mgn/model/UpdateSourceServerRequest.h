/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/SourceServerConnectorAction.h>

#include <utility>

namespace Aws {
namespace mgn {
namespace Model {

/**
 */
class UpdateSourceServerRequest : public MgnRequest {
 public:
  AWS_MGN_API UpdateSourceServerRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateSourceServer"; }

  AWS_MGN_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Update Source Server request account ID.</p>
   */
  inline const Aws::String& GetAccountID() const { return m_accountID; }
  inline bool AccountIDHasBeenSet() const { return m_accountIDHasBeenSet; }
  template <typename AccountIDT = Aws::String>
  void SetAccountID(AccountIDT&& value) {
    m_accountIDHasBeenSet = true;
    m_accountID = std::forward<AccountIDT>(value);
  }
  template <typename AccountIDT = Aws::String>
  UpdateSourceServerRequest& WithAccountID(AccountIDT&& value) {
    SetAccountID(std::forward<AccountIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Update Source Server request source server ID.</p>
   */
  inline const Aws::String& GetSourceServerID() const { return m_sourceServerID; }
  inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }
  template <typename SourceServerIDT = Aws::String>
  void SetSourceServerID(SourceServerIDT&& value) {
    m_sourceServerIDHasBeenSet = true;
    m_sourceServerID = std::forward<SourceServerIDT>(value);
  }
  template <typename SourceServerIDT = Aws::String>
  UpdateSourceServerRequest& WithSourceServerID(SourceServerIDT&& value) {
    SetSourceServerID(std::forward<SourceServerIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Update Source Server request connector action.</p>
   */
  inline const SourceServerConnectorAction& GetConnectorAction() const { return m_connectorAction; }
  inline bool ConnectorActionHasBeenSet() const { return m_connectorActionHasBeenSet; }
  template <typename ConnectorActionT = SourceServerConnectorAction>
  void SetConnectorAction(ConnectorActionT&& value) {
    m_connectorActionHasBeenSet = true;
    m_connectorAction = std::forward<ConnectorActionT>(value);
  }
  template <typename ConnectorActionT = SourceServerConnectorAction>
  UpdateSourceServerRequest& WithConnectorAction(ConnectorActionT&& value) {
    SetConnectorAction(std::forward<ConnectorActionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Update Source Server request user provided ID.</p>
   */
  inline const Aws::String& GetUserProvidedID() const { return m_userProvidedID; }
  inline bool UserProvidedIDHasBeenSet() const { return m_userProvidedIDHasBeenSet; }
  template <typename UserProvidedIDT = Aws::String>
  void SetUserProvidedID(UserProvidedIDT&& value) {
    m_userProvidedIDHasBeenSet = true;
    m_userProvidedID = std::forward<UserProvidedIDT>(value);
  }
  template <typename UserProvidedIDT = Aws::String>
  UpdateSourceServerRequest& WithUserProvidedID(UserProvidedIDT&& value) {
    SetUserProvidedID(std::forward<UserProvidedIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Update Source Server request FQDN for action framework.</p>
   */
  inline const Aws::String& GetFqdnForActionFramework() const { return m_fqdnForActionFramework; }
  inline bool FqdnForActionFrameworkHasBeenSet() const { return m_fqdnForActionFrameworkHasBeenSet; }
  template <typename FqdnForActionFrameworkT = Aws::String>
  void SetFqdnForActionFramework(FqdnForActionFrameworkT&& value) {
    m_fqdnForActionFrameworkHasBeenSet = true;
    m_fqdnForActionFramework = std::forward<FqdnForActionFrameworkT>(value);
  }
  template <typename FqdnForActionFrameworkT = Aws::String>
  UpdateSourceServerRequest& WithFqdnForActionFramework(FqdnForActionFrameworkT&& value) {
    SetFqdnForActionFramework(std::forward<FqdnForActionFrameworkT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Update Source Server request platform operating system.</p>
   */
  inline const Aws::String& GetPlatform() const { return m_platform; }
  inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
  template <typename PlatformT = Aws::String>
  void SetPlatform(PlatformT&& value) {
    m_platformHasBeenSet = true;
    m_platform = std::forward<PlatformT>(value);
  }
  template <typename PlatformT = Aws::String>
  UpdateSourceServerRequest& WithPlatform(PlatformT&& value) {
    SetPlatform(std::forward<PlatformT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountID;

  Aws::String m_sourceServerID;

  SourceServerConnectorAction m_connectorAction;

  Aws::String m_userProvidedID;

  Aws::String m_fqdnForActionFramework;

  Aws::String m_platform;
  bool m_accountIDHasBeenSet = false;
  bool m_sourceServerIDHasBeenSet = false;
  bool m_connectorActionHasBeenSet = false;
  bool m_userProvidedIDHasBeenSet = false;
  bool m_fqdnForActionFrameworkHasBeenSet = false;
  bool m_platformHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
