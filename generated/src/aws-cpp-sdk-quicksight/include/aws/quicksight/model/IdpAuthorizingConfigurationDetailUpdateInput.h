/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ExternalIdpConfidentialAuthCodeAuthorizingConfigUpdateInput.h>
#include <aws/quicksight/model/ExternalIdpPublicAuthCodeAuthorizingConfig.h>

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
 * <p>The identity provider details to update.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/IdpAuthorizingConfigurationDetailUpdateInput">AWS
 * API Reference</a></p>
 */
class IdpAuthorizingConfigurationDetailUpdateInput {
 public:
  AWS_QUICKSIGHT_API IdpAuthorizingConfigurationDetailUpdateInput() = default;
  AWS_QUICKSIGHT_API IdpAuthorizingConfigurationDetailUpdateInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API IdpAuthorizingConfigurationDetailUpdateInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration for an external IdP with a public client.</p>
   */
  inline const ExternalIdpPublicAuthCodeAuthorizingConfig& GetExternalIdpPublicAuthCode() const { return m_externalIdpPublicAuthCode; }
  inline bool ExternalIdpPublicAuthCodeHasBeenSet() const { return m_externalIdpPublicAuthCodeHasBeenSet; }
  template <typename ExternalIdpPublicAuthCodeT = ExternalIdpPublicAuthCodeAuthorizingConfig>
  void SetExternalIdpPublicAuthCode(ExternalIdpPublicAuthCodeT&& value) {
    m_externalIdpPublicAuthCodeHasBeenSet = true;
    m_externalIdpPublicAuthCode = std::forward<ExternalIdpPublicAuthCodeT>(value);
  }
  template <typename ExternalIdpPublicAuthCodeT = ExternalIdpPublicAuthCodeAuthorizingConfig>
  IdpAuthorizingConfigurationDetailUpdateInput& WithExternalIdpPublicAuthCode(ExternalIdpPublicAuthCodeT&& value) {
    SetExternalIdpPublicAuthCode(std::forward<ExternalIdpPublicAuthCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for an external IdP with a confidential client.</p>
   */
  inline const ExternalIdpConfidentialAuthCodeAuthorizingConfigUpdateInput& GetExternalIdpConfidentialAuthCode() const {
    return m_externalIdpConfidentialAuthCode;
  }
  inline bool ExternalIdpConfidentialAuthCodeHasBeenSet() const { return m_externalIdpConfidentialAuthCodeHasBeenSet; }
  template <typename ExternalIdpConfidentialAuthCodeT = ExternalIdpConfidentialAuthCodeAuthorizingConfigUpdateInput>
  void SetExternalIdpConfidentialAuthCode(ExternalIdpConfidentialAuthCodeT&& value) {
    m_externalIdpConfidentialAuthCodeHasBeenSet = true;
    m_externalIdpConfidentialAuthCode = std::forward<ExternalIdpConfidentialAuthCodeT>(value);
  }
  template <typename ExternalIdpConfidentialAuthCodeT = ExternalIdpConfidentialAuthCodeAuthorizingConfigUpdateInput>
  IdpAuthorizingConfigurationDetailUpdateInput& WithExternalIdpConfidentialAuthCode(ExternalIdpConfidentialAuthCodeT&& value) {
    SetExternalIdpConfidentialAuthCode(std::forward<ExternalIdpConfidentialAuthCodeT>(value));
    return *this;
  }
  ///@}
 private:
  ExternalIdpPublicAuthCodeAuthorizingConfig m_externalIdpPublicAuthCode;

  ExternalIdpConfidentialAuthCodeAuthorizingConfigUpdateInput m_externalIdpConfidentialAuthCode;
  bool m_externalIdpPublicAuthCodeHasBeenSet = false;
  bool m_externalIdpConfidentialAuthCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
