/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/AccessLevel.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Wickr {
namespace Model {
class GetNetworkResult {
 public:
  AWS_WICKR_API GetNetworkResult() = default;
  AWS_WICKR_API GetNetworkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WICKR_API GetNetworkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the network.</p>
   */
  inline const Aws::String& GetNetworkId() const { return m_networkId; }
  template <typename NetworkIdT = Aws::String>
  void SetNetworkId(NetworkIdT&& value) {
    m_networkIdHasBeenSet = true;
    m_networkId = std::forward<NetworkIdT>(value);
  }
  template <typename NetworkIdT = Aws::String>
  GetNetworkResult& WithNetworkId(NetworkIdT&& value) {
    SetNetworkId(std::forward<NetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the network.</p>
   */
  inline const Aws::String& GetNetworkName() const { return m_networkName; }
  template <typename NetworkNameT = Aws::String>
  void SetNetworkName(NetworkNameT&& value) {
    m_networkNameHasBeenSet = true;
    m_networkName = std::forward<NetworkNameT>(value);
  }
  template <typename NetworkNameT = Aws::String>
  GetNetworkResult& WithNetworkName(NetworkNameT&& value) {
    SetNetworkName(std::forward<NetworkNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The access level of the network (STANDARD or PREMIUM), which determines
   * available features and capabilities.</p>
   */
  inline AccessLevel GetAccessLevel() const { return m_accessLevel; }
  inline void SetAccessLevel(AccessLevel value) {
    m_accessLevelHasBeenSet = true;
    m_accessLevel = value;
  }
  inline GetNetworkResult& WithAccessLevel(AccessLevel value) {
    SetAccessLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID that owns the network.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  GetNetworkResult& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the network.</p>
   */
  inline const Aws::String& GetNetworkArn() const { return m_networkArn; }
  template <typename NetworkArnT = Aws::String>
  void SetNetworkArn(NetworkArnT&& value) {
    m_networkArnHasBeenSet = true;
    m_networkArn = std::forward<NetworkArnT>(value);
  }
  template <typename NetworkArnT = Aws::String>
  GetNetworkResult& WithNetworkArn(NetworkArnT&& value) {
    SetNetworkArn(std::forward<NetworkArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current standing or status of the network.</p>
   */
  inline int GetStanding() const { return m_standing; }
  inline void SetStanding(int value) {
    m_standingHasBeenSet = true;
    m_standing = value;
  }
  inline GetNetworkResult& WithStanding(int value) {
    SetStanding(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expiration date and time for the network's free trial period, if
   * applicable.</p>
   */
  inline const Aws::String& GetFreeTrialExpiration() const { return m_freeTrialExpiration; }
  template <typename FreeTrialExpirationT = Aws::String>
  void SetFreeTrialExpiration(FreeTrialExpirationT&& value) {
    m_freeTrialExpirationHasBeenSet = true;
    m_freeTrialExpiration = std::forward<FreeTrialExpirationT>(value);
  }
  template <typename FreeTrialExpirationT = Aws::String>
  GetNetworkResult& WithFreeTrialExpiration(FreeTrialExpirationT&& value) {
    SetFreeTrialExpiration(std::forward<FreeTrialExpirationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The SSO redirect URI migration state, managed by the SSO redirect migration
   * wizard. Values: 0 (not started), 1 (in progress), or 2 (completed).</p>
   */
  inline int GetMigrationState() const { return m_migrationState; }
  inline void SetMigrationState(int value) {
    m_migrationStateHasBeenSet = true;
    m_migrationState = value;
  }
  inline GetNetworkResult& WithMigrationState(int value) {
    SetMigrationState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Amazon Web Services KMS customer managed key used for
   * encrypting sensitive data in the network.</p>
   */
  inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
  template <typename EncryptionKeyArnT = Aws::String>
  void SetEncryptionKeyArn(EncryptionKeyArnT&& value) {
    m_encryptionKeyArnHasBeenSet = true;
    m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value);
  }
  template <typename EncryptionKeyArnT = Aws::String>
  GetNetworkResult& WithEncryptionKeyArn(EncryptionKeyArnT&& value) {
    SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetNetworkResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkId;

  Aws::String m_networkName;

  AccessLevel m_accessLevel{AccessLevel::NOT_SET};

  Aws::String m_awsAccountId;

  Aws::String m_networkArn;

  int m_standing{0};

  Aws::String m_freeTrialExpiration;

  int m_migrationState{0};

  Aws::String m_encryptionKeyArn;

  Aws::String m_requestId;
  bool m_networkIdHasBeenSet = false;
  bool m_networkNameHasBeenSet = false;
  bool m_accessLevelHasBeenSet = false;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_networkArnHasBeenSet = false;
  bool m_standingHasBeenSet = false;
  bool m_freeTrialExpirationHasBeenSet = false;
  bool m_migrationStateHasBeenSet = false;
  bool m_encryptionKeyArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
