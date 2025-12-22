/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/WickrRequest.h>
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/AccessLevel.h>

#include <utility>

namespace Aws {
namespace Wickr {
namespace Model {

/**
 */
class CreateNetworkRequest : public WickrRequest {
 public:
  AWS_WICKR_API CreateNetworkRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateNetwork"; }

  AWS_WICKR_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name for the new network. Must be between 1 and 20 characters.</p>
   */
  inline const Aws::String& GetNetworkName() const { return m_networkName; }
  inline bool NetworkNameHasBeenSet() const { return m_networkNameHasBeenSet; }
  template <typename NetworkNameT = Aws::String>
  void SetNetworkName(NetworkNameT&& value) {
    m_networkNameHasBeenSet = true;
    m_networkName = std::forward<NetworkNameT>(value);
  }
  template <typename NetworkNameT = Aws::String>
  CreateNetworkRequest& WithNetworkName(NetworkNameT&& value) {
    SetNetworkName(std::forward<NetworkNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The access level for the network. Valid values are STANDARD or PREMIUM, which
   * determine the features and capabilities available to network members.</p>
   */
  inline AccessLevel GetAccessLevel() const { return m_accessLevel; }
  inline bool AccessLevelHasBeenSet() const { return m_accessLevelHasBeenSet; }
  inline void SetAccessLevel(AccessLevel value) {
    m_accessLevelHasBeenSet = true;
    m_accessLevel = value;
  }
  inline CreateNetworkRequest& WithAccessLevel(AccessLevel value) {
    SetAccessLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to enable a premium free trial for the network. It is
   * optional and has a default value as false. When set to true, the network starts
   * with premium features for a limited trial period. </p>
   */
  inline bool GetEnablePremiumFreeTrial() const { return m_enablePremiumFreeTrial; }
  inline bool EnablePremiumFreeTrialHasBeenSet() const { return m_enablePremiumFreeTrialHasBeenSet; }
  inline void SetEnablePremiumFreeTrial(bool value) {
    m_enablePremiumFreeTrialHasBeenSet = true;
    m_enablePremiumFreeTrial = value;
  }
  inline CreateNetworkRequest& WithEnablePremiumFreeTrial(bool value) {
    SetEnablePremiumFreeTrial(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Amazon Web Services KMS customer managed key to use for
   * encrypting sensitive data in the network.</p>
   */
  inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
  inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
  template <typename EncryptionKeyArnT = Aws::String>
  void SetEncryptionKeyArn(EncryptionKeyArnT&& value) {
    m_encryptionKeyArnHasBeenSet = true;
    m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value);
  }
  template <typename EncryptionKeyArnT = Aws::String>
  CreateNetworkRequest& WithEncryptionKeyArn(EncryptionKeyArnT&& value) {
    SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkName;

  AccessLevel m_accessLevel{AccessLevel::NOT_SET};

  bool m_enablePremiumFreeTrial{false};

  Aws::String m_encryptionKeyArn;
  bool m_networkNameHasBeenSet = false;
  bool m_accessLevelHasBeenSet = false;
  bool m_enablePremiumFreeTrialHasBeenSet = false;
  bool m_encryptionKeyArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
