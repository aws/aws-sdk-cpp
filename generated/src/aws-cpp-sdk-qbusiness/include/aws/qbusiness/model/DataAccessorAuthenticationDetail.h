/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/DataAccessorAuthenticationType.h>
#include <aws/qbusiness/model/DataAccessorAuthenticationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains the authentication configuration details for a data accessor. This
   * structure defines how the ISV authenticates when accessing data through the data
   * accessor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DataAccessorAuthenticationDetail">AWS
   * API Reference</a></p>
   */
  class DataAccessorAuthenticationDetail
  {
  public:
    AWS_QBUSINESS_API DataAccessorAuthenticationDetail() = default;
    AWS_QBUSINESS_API DataAccessorAuthenticationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DataAccessorAuthenticationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of authentication to use for the data accessor. This determines how
     * the ISV authenticates when accessing data. You can use one of two authentication
     * types:</p> <ul> <li> <p> <code>AWS_IAM_IDC_TTI</code> - Authentication using IAM
     * Identity Center Trusted Token Issuer (TTI). This authentication type allows the
     * ISV to use a trusted token issuer to generate tokens for accessing the data.</p>
     * </li> <li> <p> <code>AWS_IAM_IDC_AUTH_CODE</code> - Authentication using IAM
     * Identity Center authorization code flow. This authentication type uses the
     * standard OAuth 2.0 authorization code flow for authentication.</p> </li> </ul>
     */
    inline DataAccessorAuthenticationType GetAuthenticationType() const { return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(DataAccessorAuthenticationType value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline DataAccessorAuthenticationDetail& WithAuthenticationType(DataAccessorAuthenticationType value) { SetAuthenticationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific authentication configuration based on the authentication
     * type.</p>
     */
    inline const DataAccessorAuthenticationConfiguration& GetAuthenticationConfiguration() const { return m_authenticationConfiguration; }
    inline bool AuthenticationConfigurationHasBeenSet() const { return m_authenticationConfigurationHasBeenSet; }
    template<typename AuthenticationConfigurationT = DataAccessorAuthenticationConfiguration>
    void SetAuthenticationConfiguration(AuthenticationConfigurationT&& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = std::forward<AuthenticationConfigurationT>(value); }
    template<typename AuthenticationConfigurationT = DataAccessorAuthenticationConfiguration>
    DataAccessorAuthenticationDetail& WithAuthenticationConfiguration(AuthenticationConfigurationT&& value) { SetAuthenticationConfiguration(std::forward<AuthenticationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of external identifiers associated with this authentication
     * configuration. These are used to correlate the data accessor with external
     * systems.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExternalIds() const { return m_externalIds; }
    inline bool ExternalIdsHasBeenSet() const { return m_externalIdsHasBeenSet; }
    template<typename ExternalIdsT = Aws::Vector<Aws::String>>
    void SetExternalIds(ExternalIdsT&& value) { m_externalIdsHasBeenSet = true; m_externalIds = std::forward<ExternalIdsT>(value); }
    template<typename ExternalIdsT = Aws::Vector<Aws::String>>
    DataAccessorAuthenticationDetail& WithExternalIds(ExternalIdsT&& value) { SetExternalIds(std::forward<ExternalIdsT>(value)); return *this;}
    template<typename ExternalIdsT = Aws::String>
    DataAccessorAuthenticationDetail& AddExternalIds(ExternalIdsT&& value) { m_externalIdsHasBeenSet = true; m_externalIds.emplace_back(std::forward<ExternalIdsT>(value)); return *this; }
    ///@}
  private:

    DataAccessorAuthenticationType m_authenticationType{DataAccessorAuthenticationType::NOT_SET};
    bool m_authenticationTypeHasBeenSet = false;

    DataAccessorAuthenticationConfiguration m_authenticationConfiguration;
    bool m_authenticationConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_externalIds;
    bool m_externalIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
