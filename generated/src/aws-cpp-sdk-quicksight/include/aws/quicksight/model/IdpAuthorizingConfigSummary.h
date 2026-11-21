/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/IdcTrustedTokenIssuerConfig.h>
#include <aws/quicksight/model/IdpAuthorizingConfigurationSummaryDetail.h>
#include <aws/quicksight/model/IdpAuthorizingType.h>

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
 * <p>A summary of the identity provider configuration of an access control
 * application.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/IdpAuthorizingConfigSummary">AWS
 * API Reference</a></p>
 */
class IdpAuthorizingConfigSummary {
 public:
  AWS_QUICKSIGHT_API IdpAuthorizingConfigSummary() = default;
  AWS_QUICKSIGHT_API IdpAuthorizingConfigSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API IdpAuthorizingConfigSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>How users of the access control application are authenticated.</p>
   */
  inline IdpAuthorizingType GetIdpAuthorizingType() const { return m_idpAuthorizingType; }
  inline bool IdpAuthorizingTypeHasBeenSet() const { return m_idpAuthorizingTypeHasBeenSet; }
  inline void SetIdpAuthorizingType(IdpAuthorizingType value) {
    m_idpAuthorizingTypeHasBeenSet = true;
    m_idpAuthorizingType = value;
  }
  inline IdpAuthorizingConfigSummary& WithIdpAuthorizingType(IdpAuthorizingType value) {
    SetIdpAuthorizingType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the external IdP configuration. This is present when the
   * <code>IdpAuthorizingType</code> is <code>EXTERNAL_IDP_PUBLIC_AUTH_CODE</code> or
   * <code>EXTERNAL_IDP_CONFIDENTIAL_AUTH_CODE</code>.</p>
   */
  inline const IdpAuthorizingConfigurationSummaryDetail& GetIdpAuthorizingConfigurationSummaryDetail() const {
    return m_idpAuthorizingConfigurationSummaryDetail;
  }
  inline bool IdpAuthorizingConfigurationSummaryDetailHasBeenSet() const { return m_idpAuthorizingConfigurationSummaryDetailHasBeenSet; }
  template <typename IdpAuthorizingConfigurationSummaryDetailT = IdpAuthorizingConfigurationSummaryDetail>
  void SetIdpAuthorizingConfigurationSummaryDetail(IdpAuthorizingConfigurationSummaryDetailT&& value) {
    m_idpAuthorizingConfigurationSummaryDetailHasBeenSet = true;
    m_idpAuthorizingConfigurationSummaryDetail = std::forward<IdpAuthorizingConfigurationSummaryDetailT>(value);
  }
  template <typename IdpAuthorizingConfigurationSummaryDetailT = IdpAuthorizingConfigurationSummaryDetail>
  IdpAuthorizingConfigSummary& WithIdpAuthorizingConfigurationSummaryDetail(IdpAuthorizingConfigurationSummaryDetailT&& value) {
    SetIdpAuthorizingConfigurationSummaryDetail(std::forward<IdpAuthorizingConfigurationSummaryDetailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A trusted token issuer configuration. When you provide it, Quick Sight
   * authenticates the user with the external IdP and then exchanges the token with
   * IAM Identity Center through the specified trusted token issuer. You can't change
   * it after the application is created.</p>
   */
  inline const IdcTrustedTokenIssuerConfig& GetIdcTrustedTokenIssuerConfiguration() const { return m_idcTrustedTokenIssuerConfiguration; }
  inline bool IdcTrustedTokenIssuerConfigurationHasBeenSet() const { return m_idcTrustedTokenIssuerConfigurationHasBeenSet; }
  template <typename IdcTrustedTokenIssuerConfigurationT = IdcTrustedTokenIssuerConfig>
  void SetIdcTrustedTokenIssuerConfiguration(IdcTrustedTokenIssuerConfigurationT&& value) {
    m_idcTrustedTokenIssuerConfigurationHasBeenSet = true;
    m_idcTrustedTokenIssuerConfiguration = std::forward<IdcTrustedTokenIssuerConfigurationT>(value);
  }
  template <typename IdcTrustedTokenIssuerConfigurationT = IdcTrustedTokenIssuerConfig>
  IdpAuthorizingConfigSummary& WithIdcTrustedTokenIssuerConfiguration(IdcTrustedTokenIssuerConfigurationT&& value) {
    SetIdcTrustedTokenIssuerConfiguration(std::forward<IdcTrustedTokenIssuerConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  IdpAuthorizingType m_idpAuthorizingType{IdpAuthorizingType::NOT_SET};

  IdpAuthorizingConfigurationSummaryDetail m_idpAuthorizingConfigurationSummaryDetail;

  IdcTrustedTokenIssuerConfig m_idcTrustedTokenIssuerConfiguration;
  bool m_idpAuthorizingTypeHasBeenSet = false;
  bool m_idpAuthorizingConfigurationSummaryDetailHasBeenSet = false;
  bool m_idcTrustedTokenIssuerConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
