/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/OdbRequest.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/WalletPasswordSource.h>
#include <aws/odb/model/WalletPasswordSourceConfigurationInput.h>
#include <aws/odb/model/WalletType.h>

#include <utility>

namespace Aws {
namespace odb {
namespace Model {

/**
 */
class CreateAutonomousDatabaseWalletRequest : public OdbRequest {
 public:
  AWS_ODB_API CreateAutonomousDatabaseWalletRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAutonomousDatabaseWallet"; }

  AWS_ODB_API Aws::String SerializePayload() const override;

  AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the Autonomous Database to create a wallet for.</p>
   */
  inline const Aws::String& GetAutonomousDatabaseId() const { return m_autonomousDatabaseId; }
  inline bool AutonomousDatabaseIdHasBeenSet() const { return m_autonomousDatabaseIdHasBeenSet; }
  template <typename AutonomousDatabaseIdT = Aws::String>
  void SetAutonomousDatabaseId(AutonomousDatabaseIdT&& value) {
    m_autonomousDatabaseIdHasBeenSet = true;
    m_autonomousDatabaseId = std::forward<AutonomousDatabaseIdT>(value);
  }
  template <typename AutonomousDatabaseIdT = Aws::String>
  CreateAutonomousDatabaseWalletRequest& WithAutonomousDatabaseId(AutonomousDatabaseIdT&& value) {
    SetAutonomousDatabaseId(std::forward<AutonomousDatabaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of wallet to create, either a regional wallet or an instance
   * wallet.</p>
   */
  inline WalletType GetWalletType() const { return m_walletType; }
  inline bool WalletTypeHasBeenSet() const { return m_walletTypeHasBeenSet; }
  inline void SetWalletType(WalletType value) {
    m_walletTypeHasBeenSet = true;
    m_walletType = value;
  }
  inline CreateAutonomousDatabaseWalletRequest& WithWalletType(WalletType value) {
    SetWalletType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The password to encrypt the keys inside the wallet.</p>
   */
  inline const Aws::String& GetPassword() const { return m_password; }
  inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
  template <typename PasswordT = Aws::String>
  void SetPassword(PasswordT&& value) {
    m_passwordHasBeenSet = true;
    m_password = std::forward<PasswordT>(value);
  }
  template <typename PasswordT = Aws::String>
  CreateAutonomousDatabaseWalletRequest& WithPassword(PasswordT&& value) {
    SetPassword(std::forward<PasswordT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source of the password for encrypting the wallet. When set to
   * <code>CUSTOMER_MANAGED_AWS_SECRET</code>, the password is retrieved from an
   * Amazon Web Services Secrets Manager secret.</p>
   */
  inline WalletPasswordSource GetPasswordSource() const { return m_passwordSource; }
  inline bool PasswordSourceHasBeenSet() const { return m_passwordSourceHasBeenSet; }
  inline void SetPasswordSource(WalletPasswordSource value) {
    m_passwordSourceHasBeenSet = true;
    m_passwordSource = value;
  }
  inline CreateAutonomousDatabaseWalletRequest& WithPasswordSource(WalletPasswordSource value) {
    SetPasswordSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of the password source for the Autonomous Database
   * wallet.</p>
   */
  inline const WalletPasswordSourceConfigurationInput& GetPasswordSourceConfiguration() const { return m_passwordSourceConfiguration; }
  inline bool PasswordSourceConfigurationHasBeenSet() const { return m_passwordSourceConfigurationHasBeenSet; }
  template <typename PasswordSourceConfigurationT = WalletPasswordSourceConfigurationInput>
  void SetPasswordSourceConfiguration(PasswordSourceConfigurationT&& value) {
    m_passwordSourceConfigurationHasBeenSet = true;
    m_passwordSourceConfiguration = std::forward<PasswordSourceConfigurationT>(value);
  }
  template <typename PasswordSourceConfigurationT = WalletPasswordSourceConfigurationInput>
  CreateAutonomousDatabaseWalletRequest& WithPasswordSourceConfiguration(PasswordSourceConfigurationT&& value) {
    SetPasswordSourceConfiguration(std::forward<PasswordSourceConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A client-provided token to ensure the idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateAutonomousDatabaseWalletRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_autonomousDatabaseId;

  WalletType m_walletType{WalletType::NOT_SET};

  Aws::String m_password;

  WalletPasswordSource m_passwordSource{WalletPasswordSource::NOT_SET};

  WalletPasswordSourceConfigurationInput m_passwordSourceConfiguration;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_autonomousDatabaseIdHasBeenSet = false;
  bool m_walletTypeHasBeenSet = false;
  bool m_passwordHasBeenSet = false;
  bool m_passwordSourceHasBeenSet = false;
  bool m_passwordSourceConfigurationHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
