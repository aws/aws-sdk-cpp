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
    AWS_WORKMAIL_API DescribeIdentityProviderConfigurationResult();
    AWS_WORKMAIL_API DescribeIdentityProviderConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API DescribeIdentityProviderConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The authentication mode used in WorkMail.</p>
     */
    inline const IdentityProviderAuthenticationMode& GetAuthenticationMode() const{ return m_authenticationMode; }
    inline void SetAuthenticationMode(const IdentityProviderAuthenticationMode& value) { m_authenticationMode = value; }
    inline void SetAuthenticationMode(IdentityProviderAuthenticationMode&& value) { m_authenticationMode = std::move(value); }
    inline DescribeIdentityProviderConfigurationResult& WithAuthenticationMode(const IdentityProviderAuthenticationMode& value) { SetAuthenticationMode(value); return *this;}
    inline DescribeIdentityProviderConfigurationResult& WithAuthenticationMode(IdentityProviderAuthenticationMode&& value) { SetAuthenticationMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The details of the IAM Identity Center configuration. </p>
     */
    inline const IdentityCenterConfiguration& GetIdentityCenterConfiguration() const{ return m_identityCenterConfiguration; }
    inline void SetIdentityCenterConfiguration(const IdentityCenterConfiguration& value) { m_identityCenterConfiguration = value; }
    inline void SetIdentityCenterConfiguration(IdentityCenterConfiguration&& value) { m_identityCenterConfiguration = std::move(value); }
    inline DescribeIdentityProviderConfigurationResult& WithIdentityCenterConfiguration(const IdentityCenterConfiguration& value) { SetIdentityCenterConfiguration(value); return *this;}
    inline DescribeIdentityProviderConfigurationResult& WithIdentityCenterConfiguration(IdentityCenterConfiguration&& value) { SetIdentityCenterConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The details of the Personal Access Token configuration. </p>
     */
    inline const PersonalAccessTokenConfiguration& GetPersonalAccessTokenConfiguration() const{ return m_personalAccessTokenConfiguration; }
    inline void SetPersonalAccessTokenConfiguration(const PersonalAccessTokenConfiguration& value) { m_personalAccessTokenConfiguration = value; }
    inline void SetPersonalAccessTokenConfiguration(PersonalAccessTokenConfiguration&& value) { m_personalAccessTokenConfiguration = std::move(value); }
    inline DescribeIdentityProviderConfigurationResult& WithPersonalAccessTokenConfiguration(const PersonalAccessTokenConfiguration& value) { SetPersonalAccessTokenConfiguration(value); return *this;}
    inline DescribeIdentityProviderConfigurationResult& WithPersonalAccessTokenConfiguration(PersonalAccessTokenConfiguration&& value) { SetPersonalAccessTokenConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeIdentityProviderConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeIdentityProviderConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeIdentityProviderConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    IdentityProviderAuthenticationMode m_authenticationMode;

    IdentityCenterConfiguration m_identityCenterConfiguration;

    PersonalAccessTokenConfiguration m_personalAccessTokenConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
