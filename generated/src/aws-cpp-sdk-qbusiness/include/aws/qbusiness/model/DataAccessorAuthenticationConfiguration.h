/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/DataAccessorIdcTrustedTokenIssuerConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QBusiness
{
namespace Model
{

  /**
   * <p>A union type that contains the specific authentication configuration based on
   * the authentication type selected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DataAccessorAuthenticationConfiguration">AWS
   * API Reference</a></p>
   */
  class DataAccessorAuthenticationConfiguration
  {
  public:
    AWS_QBUSINESS_API DataAccessorAuthenticationConfiguration() = default;
    AWS_QBUSINESS_API DataAccessorAuthenticationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DataAccessorAuthenticationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration for IAM Identity Center Trusted Token Issuer (TTI)
     * authentication used when the authentication type is
     * <code>AWS_IAM_IDC_TTI</code>.</p>
     */
    inline const DataAccessorIdcTrustedTokenIssuerConfiguration& GetIdcTrustedTokenIssuerConfiguration() const { return m_idcTrustedTokenIssuerConfiguration; }
    inline bool IdcTrustedTokenIssuerConfigurationHasBeenSet() const { return m_idcTrustedTokenIssuerConfigurationHasBeenSet; }
    template<typename IdcTrustedTokenIssuerConfigurationT = DataAccessorIdcTrustedTokenIssuerConfiguration>
    void SetIdcTrustedTokenIssuerConfiguration(IdcTrustedTokenIssuerConfigurationT&& value) { m_idcTrustedTokenIssuerConfigurationHasBeenSet = true; m_idcTrustedTokenIssuerConfiguration = std::forward<IdcTrustedTokenIssuerConfigurationT>(value); }
    template<typename IdcTrustedTokenIssuerConfigurationT = DataAccessorIdcTrustedTokenIssuerConfiguration>
    DataAccessorAuthenticationConfiguration& WithIdcTrustedTokenIssuerConfiguration(IdcTrustedTokenIssuerConfigurationT&& value) { SetIdcTrustedTokenIssuerConfiguration(std::forward<IdcTrustedTokenIssuerConfigurationT>(value)); return *this;}
    ///@}
  private:

    DataAccessorIdcTrustedTokenIssuerConfiguration m_idcTrustedTokenIssuerConfiguration;
    bool m_idcTrustedTokenIssuerConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
