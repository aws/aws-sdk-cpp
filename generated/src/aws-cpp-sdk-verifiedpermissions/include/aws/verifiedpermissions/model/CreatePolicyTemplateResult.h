/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class CreatePolicyTemplateResult
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API CreatePolicyTemplateResult();
    AWS_VERIFIEDPERMISSIONS_API CreatePolicyTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VERIFIEDPERMISSIONS_API CreatePolicyTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the policy store that contains the policy template.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const{ return m_policyStoreId; }

    /**
     * <p>The ID of the policy store that contains the policy template.</p>
     */
    inline void SetPolicyStoreId(const Aws::String& value) { m_policyStoreId = value; }

    /**
     * <p>The ID of the policy store that contains the policy template.</p>
     */
    inline void SetPolicyStoreId(Aws::String&& value) { m_policyStoreId = std::move(value); }

    /**
     * <p>The ID of the policy store that contains the policy template.</p>
     */
    inline void SetPolicyStoreId(const char* value) { m_policyStoreId.assign(value); }

    /**
     * <p>The ID of the policy store that contains the policy template.</p>
     */
    inline CreatePolicyTemplateResult& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}

    /**
     * <p>The ID of the policy store that contains the policy template.</p>
     */
    inline CreatePolicyTemplateResult& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}

    /**
     * <p>The ID of the policy store that contains the policy template.</p>
     */
    inline CreatePolicyTemplateResult& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}


    /**
     * <p>The unique ID of the new policy template.</p>
     */
    inline const Aws::String& GetPolicyTemplateId() const{ return m_policyTemplateId; }

    /**
     * <p>The unique ID of the new policy template.</p>
     */
    inline void SetPolicyTemplateId(const Aws::String& value) { m_policyTemplateId = value; }

    /**
     * <p>The unique ID of the new policy template.</p>
     */
    inline void SetPolicyTemplateId(Aws::String&& value) { m_policyTemplateId = std::move(value); }

    /**
     * <p>The unique ID of the new policy template.</p>
     */
    inline void SetPolicyTemplateId(const char* value) { m_policyTemplateId.assign(value); }

    /**
     * <p>The unique ID of the new policy template.</p>
     */
    inline CreatePolicyTemplateResult& WithPolicyTemplateId(const Aws::String& value) { SetPolicyTemplateId(value); return *this;}

    /**
     * <p>The unique ID of the new policy template.</p>
     */
    inline CreatePolicyTemplateResult& WithPolicyTemplateId(Aws::String&& value) { SetPolicyTemplateId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the new policy template.</p>
     */
    inline CreatePolicyTemplateResult& WithPolicyTemplateId(const char* value) { SetPolicyTemplateId(value); return *this;}


    /**
     * <p>The date and time the policy template was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date and time the policy template was originally created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The date and time the policy template was originally created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The date and time the policy template was originally created.</p>
     */
    inline CreatePolicyTemplateResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date and time the policy template was originally created.</p>
     */
    inline CreatePolicyTemplateResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The date and time the policy template was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }

    /**
     * <p>The date and time the policy template was most recently updated.</p>
     */
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }

    /**
     * <p>The date and time the policy template was most recently updated.</p>
     */
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = std::move(value); }

    /**
     * <p>The date and time the policy template was most recently updated.</p>
     */
    inline CreatePolicyTemplateResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}

    /**
     * <p>The date and time the policy template was most recently updated.</p>
     */
    inline CreatePolicyTemplateResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreatePolicyTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreatePolicyTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreatePolicyTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_policyStoreId;

    Aws::String m_policyTemplateId;

    Aws::Utils::DateTime m_createdDate;

    Aws::Utils::DateTime m_lastUpdatedDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
