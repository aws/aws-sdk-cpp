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
  class GetPolicyTemplateResult
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API GetPolicyTemplateResult();
    AWS_VERIFIEDPERMISSIONS_API GetPolicyTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VERIFIEDPERMISSIONS_API GetPolicyTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetPolicyTemplateResult& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}

    /**
     * <p>The ID of the policy store that contains the policy template.</p>
     */
    inline GetPolicyTemplateResult& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}

    /**
     * <p>The ID of the policy store that contains the policy template.</p>
     */
    inline GetPolicyTemplateResult& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}


    /**
     * <p>The ID of the policy template.</p>
     */
    inline const Aws::String& GetPolicyTemplateId() const{ return m_policyTemplateId; }

    /**
     * <p>The ID of the policy template.</p>
     */
    inline void SetPolicyTemplateId(const Aws::String& value) { m_policyTemplateId = value; }

    /**
     * <p>The ID of the policy template.</p>
     */
    inline void SetPolicyTemplateId(Aws::String&& value) { m_policyTemplateId = std::move(value); }

    /**
     * <p>The ID of the policy template.</p>
     */
    inline void SetPolicyTemplateId(const char* value) { m_policyTemplateId.assign(value); }

    /**
     * <p>The ID of the policy template.</p>
     */
    inline GetPolicyTemplateResult& WithPolicyTemplateId(const Aws::String& value) { SetPolicyTemplateId(value); return *this;}

    /**
     * <p>The ID of the policy template.</p>
     */
    inline GetPolicyTemplateResult& WithPolicyTemplateId(Aws::String&& value) { SetPolicyTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the policy template.</p>
     */
    inline GetPolicyTemplateResult& WithPolicyTemplateId(const char* value) { SetPolicyTemplateId(value); return *this;}


    /**
     * <p>The description of the policy template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the policy template.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the policy template.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the policy template.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the policy template.</p>
     */
    inline GetPolicyTemplateResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the policy template.</p>
     */
    inline GetPolicyTemplateResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the policy template.</p>
     */
    inline GetPolicyTemplateResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The content of the body of the policy template written in the Cedar policy
     * language.</p>
     */
    inline const Aws::String& GetStatement() const{ return m_statement; }

    /**
     * <p>The content of the body of the policy template written in the Cedar policy
     * language.</p>
     */
    inline void SetStatement(const Aws::String& value) { m_statement = value; }

    /**
     * <p>The content of the body of the policy template written in the Cedar policy
     * language.</p>
     */
    inline void SetStatement(Aws::String&& value) { m_statement = std::move(value); }

    /**
     * <p>The content of the body of the policy template written in the Cedar policy
     * language.</p>
     */
    inline void SetStatement(const char* value) { m_statement.assign(value); }

    /**
     * <p>The content of the body of the policy template written in the Cedar policy
     * language.</p>
     */
    inline GetPolicyTemplateResult& WithStatement(const Aws::String& value) { SetStatement(value); return *this;}

    /**
     * <p>The content of the body of the policy template written in the Cedar policy
     * language.</p>
     */
    inline GetPolicyTemplateResult& WithStatement(Aws::String&& value) { SetStatement(std::move(value)); return *this;}

    /**
     * <p>The content of the body of the policy template written in the Cedar policy
     * language.</p>
     */
    inline GetPolicyTemplateResult& WithStatement(const char* value) { SetStatement(value); return *this;}


    /**
     * <p>The date and time that the policy template was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date and time that the policy template was originally created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The date and time that the policy template was originally created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The date and time that the policy template was originally created.</p>
     */
    inline GetPolicyTemplateResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date and time that the policy template was originally created.</p>
     */
    inline GetPolicyTemplateResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The date and time that the policy template was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }

    /**
     * <p>The date and time that the policy template was most recently updated.</p>
     */
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }

    /**
     * <p>The date and time that the policy template was most recently updated.</p>
     */
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = std::move(value); }

    /**
     * <p>The date and time that the policy template was most recently updated.</p>
     */
    inline GetPolicyTemplateResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}

    /**
     * <p>The date and time that the policy template was most recently updated.</p>
     */
    inline GetPolicyTemplateResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPolicyTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPolicyTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPolicyTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_policyStoreId;

    Aws::String m_policyTemplateId;

    Aws::String m_description;

    Aws::String m_statement;

    Aws::Utils::DateTime m_createdDate;

    Aws::Utils::DateTime m_lastUpdatedDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
