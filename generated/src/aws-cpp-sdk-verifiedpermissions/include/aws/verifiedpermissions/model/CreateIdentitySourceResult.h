/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace VerifiedPermissions
{
namespace Model
{
  class CreateIdentitySourceResult
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API CreateIdentitySourceResult();
    AWS_VERIFIEDPERMISSIONS_API CreateIdentitySourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VERIFIEDPERMISSIONS_API CreateIdentitySourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The date and time the identity source was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date and time the identity source was originally created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The date and time the identity source was originally created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The date and time the identity source was originally created.</p>
     */
    inline CreateIdentitySourceResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date and time the identity source was originally created.</p>
     */
    inline CreateIdentitySourceResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The unique ID of the new identity source.</p>
     */
    inline const Aws::String& GetIdentitySourceId() const{ return m_identitySourceId; }

    /**
     * <p>The unique ID of the new identity source.</p>
     */
    inline void SetIdentitySourceId(const Aws::String& value) { m_identitySourceId = value; }

    /**
     * <p>The unique ID of the new identity source.</p>
     */
    inline void SetIdentitySourceId(Aws::String&& value) { m_identitySourceId = std::move(value); }

    /**
     * <p>The unique ID of the new identity source.</p>
     */
    inline void SetIdentitySourceId(const char* value) { m_identitySourceId.assign(value); }

    /**
     * <p>The unique ID of the new identity source.</p>
     */
    inline CreateIdentitySourceResult& WithIdentitySourceId(const Aws::String& value) { SetIdentitySourceId(value); return *this;}

    /**
     * <p>The unique ID of the new identity source.</p>
     */
    inline CreateIdentitySourceResult& WithIdentitySourceId(Aws::String&& value) { SetIdentitySourceId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the new identity source.</p>
     */
    inline CreateIdentitySourceResult& WithIdentitySourceId(const char* value) { SetIdentitySourceId(value); return *this;}


    /**
     * <p>The date and time the identity source was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }

    /**
     * <p>The date and time the identity source was most recently updated.</p>
     */
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }

    /**
     * <p>The date and time the identity source was most recently updated.</p>
     */
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = std::move(value); }

    /**
     * <p>The date and time the identity source was most recently updated.</p>
     */
    inline CreateIdentitySourceResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}

    /**
     * <p>The date and time the identity source was most recently updated.</p>
     */
    inline CreateIdentitySourceResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}


    /**
     * <p>The ID of the policy store that contains the identity source.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const{ return m_policyStoreId; }

    /**
     * <p>The ID of the policy store that contains the identity source.</p>
     */
    inline void SetPolicyStoreId(const Aws::String& value) { m_policyStoreId = value; }

    /**
     * <p>The ID of the policy store that contains the identity source.</p>
     */
    inline void SetPolicyStoreId(Aws::String&& value) { m_policyStoreId = std::move(value); }

    /**
     * <p>The ID of the policy store that contains the identity source.</p>
     */
    inline void SetPolicyStoreId(const char* value) { m_policyStoreId.assign(value); }

    /**
     * <p>The ID of the policy store that contains the identity source.</p>
     */
    inline CreateIdentitySourceResult& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}

    /**
     * <p>The ID of the policy store that contains the identity source.</p>
     */
    inline CreateIdentitySourceResult& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}

    /**
     * <p>The ID of the policy store that contains the identity source.</p>
     */
    inline CreateIdentitySourceResult& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateIdentitySourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateIdentitySourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateIdentitySourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdDate;

    Aws::String m_identitySourceId;

    Aws::Utils::DateTime m_lastUpdatedDate;

    Aws::String m_policyStoreId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
