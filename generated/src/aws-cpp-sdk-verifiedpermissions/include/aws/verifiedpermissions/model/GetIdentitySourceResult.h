/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/ConfigurationDetail.h>
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
namespace VerifiedPermissions
{
namespace Model
{
  class GetIdentitySourceResult
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API GetIdentitySourceResult();
    AWS_VERIFIEDPERMISSIONS_API GetIdentitySourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VERIFIEDPERMISSIONS_API GetIdentitySourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The date and time that the identity source was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }
    inline GetIdentitySourceResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline GetIdentitySourceResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the identity source.</p>
     */
    inline const Aws::String& GetIdentitySourceId() const{ return m_identitySourceId; }
    inline void SetIdentitySourceId(const Aws::String& value) { m_identitySourceId = value; }
    inline void SetIdentitySourceId(Aws::String&& value) { m_identitySourceId = std::move(value); }
    inline void SetIdentitySourceId(const char* value) { m_identitySourceId.assign(value); }
    inline GetIdentitySourceResult& WithIdentitySourceId(const Aws::String& value) { SetIdentitySourceId(value); return *this;}
    inline GetIdentitySourceResult& WithIdentitySourceId(Aws::String&& value) { SetIdentitySourceId(std::move(value)); return *this;}
    inline GetIdentitySourceResult& WithIdentitySourceId(const char* value) { SetIdentitySourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the identity source was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = std::move(value); }
    inline GetIdentitySourceResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}
    inline GetIdentitySourceResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the policy store that contains the identity source.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const{ return m_policyStoreId; }
    inline void SetPolicyStoreId(const Aws::String& value) { m_policyStoreId = value; }
    inline void SetPolicyStoreId(Aws::String&& value) { m_policyStoreId = std::move(value); }
    inline void SetPolicyStoreId(const char* value) { m_policyStoreId.assign(value); }
    inline GetIdentitySourceResult& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}
    inline GetIdentitySourceResult& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}
    inline GetIdentitySourceResult& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of principals generated for identities authenticated by this
     * identity source.</p>
     */
    inline const Aws::String& GetPrincipalEntityType() const{ return m_principalEntityType; }
    inline void SetPrincipalEntityType(const Aws::String& value) { m_principalEntityType = value; }
    inline void SetPrincipalEntityType(Aws::String&& value) { m_principalEntityType = std::move(value); }
    inline void SetPrincipalEntityType(const char* value) { m_principalEntityType.assign(value); }
    inline GetIdentitySourceResult& WithPrincipalEntityType(const Aws::String& value) { SetPrincipalEntityType(value); return *this;}
    inline GetIdentitySourceResult& WithPrincipalEntityType(Aws::String&& value) { SetPrincipalEntityType(std::move(value)); return *this;}
    inline GetIdentitySourceResult& WithPrincipalEntityType(const char* value) { SetPrincipalEntityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configuration information about an identity source.</p>
     */
    inline const ConfigurationDetail& GetConfiguration() const{ return m_configuration; }
    inline void SetConfiguration(const ConfigurationDetail& value) { m_configuration = value; }
    inline void SetConfiguration(ConfigurationDetail&& value) { m_configuration = std::move(value); }
    inline GetIdentitySourceResult& WithConfiguration(const ConfigurationDetail& value) { SetConfiguration(value); return *this;}
    inline GetIdentitySourceResult& WithConfiguration(ConfigurationDetail&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetIdentitySourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetIdentitySourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetIdentitySourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdDate;

    Aws::String m_identitySourceId;

    Aws::Utils::DateTime m_lastUpdatedDate;

    Aws::String m_policyStoreId;

    Aws::String m_principalEntityType;

    ConfigurationDetail m_configuration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
