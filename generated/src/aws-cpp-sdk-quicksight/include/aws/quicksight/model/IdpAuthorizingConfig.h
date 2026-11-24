/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/IdcTrustedTokenIssuerConfig.h>
#include <aws/quicksight/model/IdpAuthorizingConfigurationDetail.h>
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
 * <p>The identity provider configuration of an access control
 * application.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/IdpAuthorizingConfig">AWS
 * API Reference</a></p>
 */
class IdpAuthorizingConfig {
 public:
  AWS_QUICKSIGHT_API IdpAuthorizingConfig() = default;
  AWS_QUICKSIGHT_API IdpAuthorizingConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API IdpAuthorizingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  inline IdpAuthorizingConfig& WithIdpAuthorizingType(IdpAuthorizingType value) {
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
  inline const IdpAuthorizingConfigurationDetail& GetIdpAuthorizingConfigurationDetail() const {
    return m_idpAuthorizingConfigurationDetail;
  }
  inline bool IdpAuthorizingConfigurationDetailHasBeenSet() const { return m_idpAuthorizingConfigurationDetailHasBeenSet; }
  template <typename IdpAuthorizingConfigurationDetailT = IdpAuthorizingConfigurationDetail>
  void SetIdpAuthorizingConfigurationDetail(IdpAuthorizingConfigurationDetailT&& value) {
    m_idpAuthorizingConfigurationDetailHasBeenSet = true;
    m_idpAuthorizingConfigurationDetail = std::forward<IdpAuthorizingConfigurationDetailT>(value);
  }
  template <typename IdpAuthorizingConfigurationDetailT = IdpAuthorizingConfigurationDetail>
  IdpAuthorizingConfig& WithIdpAuthorizingConfigurationDetail(IdpAuthorizingConfigurationDetailT&& value) {
    SetIdpAuthorizingConfigurationDetail(std::forward<IdpAuthorizingConfigurationDetailT>(value));
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
  IdpAuthorizingConfig& WithIdcTrustedTokenIssuerConfiguration(IdcTrustedTokenIssuerConfigurationT&& value) {
    SetIdcTrustedTokenIssuerConfiguration(std::forward<IdcTrustedTokenIssuerConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  IdpAuthorizingType m_idpAuthorizingType{IdpAuthorizingType::NOT_SET};

  IdpAuthorizingConfigurationDetail m_idpAuthorizingConfigurationDetail;

  IdcTrustedTokenIssuerConfig m_idcTrustedTokenIssuerConfiguration;
  bool m_idpAuthorizingTypeHasBeenSet = false;
  bool m_idpAuthorizingConfigurationDetailHasBeenSet = false;
  bool m_idcTrustedTokenIssuerConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
