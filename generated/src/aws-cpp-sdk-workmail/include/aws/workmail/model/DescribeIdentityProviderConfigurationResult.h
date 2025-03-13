/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/model/IdentityProviderAuthenticationMode.h>
#include <aws/workmail/model/IdentityCenterConfiguration.h>
#include <aws/workmail/model/PersonalAccessTokenConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkMail
{
namespace Model
{
  class DescribeIdentityProviderConfigurationResult
  {
  public:
    AWS_WORKMAIL_API DescribeIdentityProviderConfigurationResult() = default;
    AWS_WORKMAIL_API DescribeIdentityProviderConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API DescribeIdentityProviderConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The authentication mode used in WorkMail.</p>
     */
    inline IdentityProviderAuthenticationMode GetAuthenticationMode() const { return m_authenticationMode; }
    inline void SetAuthenticationMode(IdentityProviderAuthenticationMode value) { m_authenticationModeHasBeenSet = true; m_authenticationMode = value; }
    inline DescribeIdentityProviderConfigurationResult& WithAuthenticationMode(IdentityProviderAuthenticationMode value) { SetAuthenticationMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The details of the IAM Identity Center configuration. </p>
     */
    inline const IdentityCenterConfiguration& GetIdentityCenterConfiguration() const { return m_identityCenterConfiguration; }
    template<typename IdentityCenterConfigurationT = IdentityCenterConfiguration>
    void SetIdentityCenterConfiguration(IdentityCenterConfigurationT&& value) { m_identityCenterConfigurationHasBeenSet = true; m_identityCenterConfiguration = std::forward<IdentityCenterConfigurationT>(value); }
    template<typename IdentityCenterConfigurationT = IdentityCenterConfiguration>
    DescribeIdentityProviderConfigurationResult& WithIdentityCenterConfiguration(IdentityCenterConfigurationT&& value) { SetIdentityCenterConfiguration(std::forward<IdentityCenterConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The details of the Personal Access Token configuration. </p>
     */
    inline const PersonalAccessTokenConfiguration& GetPersonalAccessTokenConfiguration() const { return m_personalAccessTokenConfiguration; }
    template<typename PersonalAccessTokenConfigurationT = PersonalAccessTokenConfiguration>
    void SetPersonalAccessTokenConfiguration(PersonalAccessTokenConfigurationT&& value) { m_personalAccessTokenConfigurationHasBeenSet = true; m_personalAccessTokenConfiguration = std::forward<PersonalAccessTokenConfigurationT>(value); }
    template<typename PersonalAccessTokenConfigurationT = PersonalAccessTokenConfiguration>
    DescribeIdentityProviderConfigurationResult& WithPersonalAccessTokenConfiguration(PersonalAccessTokenConfigurationT&& value) { SetPersonalAccessTokenConfiguration(std::forward<PersonalAccessTokenConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeIdentityProviderConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    IdentityProviderAuthenticationMode m_authenticationMode{IdentityProviderAuthenticationMode::NOT_SET};
    bool m_authenticationModeHasBeenSet = false;

    IdentityCenterConfiguration m_identityCenterConfiguration;
    bool m_identityCenterConfigurationHasBeenSet = false;

    PersonalAccessTokenConfiguration m_personalAccessTokenConfiguration;
    bool m_personalAccessTokenConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
