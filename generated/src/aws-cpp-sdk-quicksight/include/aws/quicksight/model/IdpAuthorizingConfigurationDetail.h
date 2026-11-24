/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ExternalIdpConfidentialAuthCodeAuthorizingConfig.h>
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
 * <p>The details of the identity provider configuration.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/IdpAuthorizingConfigurationDetail">AWS
 * API Reference</a></p>
 */
class IdpAuthorizingConfigurationDetail {
 public:
  AWS_QUICKSIGHT_API IdpAuthorizingConfigurationDetail() = default;
  AWS_QUICKSIGHT_API IdpAuthorizingConfigurationDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API IdpAuthorizingConfigurationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  IdpAuthorizingConfigurationDetail& WithExternalIdpPublicAuthCode(ExternalIdpPublicAuthCodeT&& value) {
    SetExternalIdpPublicAuthCode(std::forward<ExternalIdpPublicAuthCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for an external IdP with a confidential client.</p>
   */
  inline const ExternalIdpConfidentialAuthCodeAuthorizingConfig& GetExternalIdpConfidentialAuthCode() const {
    return m_externalIdpConfidentialAuthCode;
  }
  inline bool ExternalIdpConfidentialAuthCodeHasBeenSet() const { return m_externalIdpConfidentialAuthCodeHasBeenSet; }
  template <typename ExternalIdpConfidentialAuthCodeT = ExternalIdpConfidentialAuthCodeAuthorizingConfig>
  void SetExternalIdpConfidentialAuthCode(ExternalIdpConfidentialAuthCodeT&& value) {
    m_externalIdpConfidentialAuthCodeHasBeenSet = true;
    m_externalIdpConfidentialAuthCode = std::forward<ExternalIdpConfidentialAuthCodeT>(value);
  }
  template <typename ExternalIdpConfidentialAuthCodeT = ExternalIdpConfidentialAuthCodeAuthorizingConfig>
  IdpAuthorizingConfigurationDetail& WithExternalIdpConfidentialAuthCode(ExternalIdpConfidentialAuthCodeT&& value) {
    SetExternalIdpConfidentialAuthCode(std::forward<ExternalIdpConfidentialAuthCodeT>(value));
    return *this;
  }
  ///@}
 private:
  ExternalIdpPublicAuthCodeAuthorizingConfig m_externalIdpPublicAuthCode;

  ExternalIdpConfidentialAuthCodeAuthorizingConfig m_externalIdpConfidentialAuthCode;
  bool m_externalIdpPublicAuthCodeHasBeenSet = false;
  bool m_externalIdpConfidentialAuthCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
