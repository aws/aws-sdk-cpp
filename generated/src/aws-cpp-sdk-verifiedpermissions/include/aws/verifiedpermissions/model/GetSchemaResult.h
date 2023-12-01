/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class GetSchemaResult
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API GetSchemaResult();
    AWS_VERIFIEDPERMISSIONS_API GetSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VERIFIEDPERMISSIONS_API GetSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the policy store that contains the schema.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const{ return m_policyStoreId; }

    /**
     * <p>The ID of the policy store that contains the schema.</p>
     */
    inline void SetPolicyStoreId(const Aws::String& value) { m_policyStoreId = value; }

    /**
     * <p>The ID of the policy store that contains the schema.</p>
     */
    inline void SetPolicyStoreId(Aws::String&& value) { m_policyStoreId = std::move(value); }

    /**
     * <p>The ID of the policy store that contains the schema.</p>
     */
    inline void SetPolicyStoreId(const char* value) { m_policyStoreId.assign(value); }

    /**
     * <p>The ID of the policy store that contains the schema.</p>
     */
    inline GetSchemaResult& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}

    /**
     * <p>The ID of the policy store that contains the schema.</p>
     */
    inline GetSchemaResult& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}

    /**
     * <p>The ID of the policy store that contains the schema.</p>
     */
    inline GetSchemaResult& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}


    /**
     * <p>The body of the schema, written in Cedar schema JSON.</p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }

    /**
     * <p>The body of the schema, written in Cedar schema JSON.</p>
     */
    inline void SetSchema(const Aws::String& value) { m_schema = value; }

    /**
     * <p>The body of the schema, written in Cedar schema JSON.</p>
     */
    inline void SetSchema(Aws::String&& value) { m_schema = std::move(value); }

    /**
     * <p>The body of the schema, written in Cedar schema JSON.</p>
     */
    inline void SetSchema(const char* value) { m_schema.assign(value); }

    /**
     * <p>The body of the schema, written in Cedar schema JSON.</p>
     */
    inline GetSchemaResult& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}

    /**
     * <p>The body of the schema, written in Cedar schema JSON.</p>
     */
    inline GetSchemaResult& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>The body of the schema, written in Cedar schema JSON.</p>
     */
    inline GetSchemaResult& WithSchema(const char* value) { SetSchema(value); return *this;}


    /**
     * <p>The date and time that the schema was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date and time that the schema was originally created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The date and time that the schema was originally created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The date and time that the schema was originally created.</p>
     */
    inline GetSchemaResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date and time that the schema was originally created.</p>
     */
    inline GetSchemaResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The date and time that the schema was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }

    /**
     * <p>The date and time that the schema was most recently updated.</p>
     */
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }

    /**
     * <p>The date and time that the schema was most recently updated.</p>
     */
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = std::move(value); }

    /**
     * <p>The date and time that the schema was most recently updated.</p>
     */
    inline GetSchemaResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}

    /**
     * <p>The date and time that the schema was most recently updated.</p>
     */
    inline GetSchemaResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}


    /**
     * <p>The namespaces of the entities referenced by this schema.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNamespaces() const{ return m_namespaces; }

    /**
     * <p>The namespaces of the entities referenced by this schema.</p>
     */
    inline void SetNamespaces(const Aws::Vector<Aws::String>& value) { m_namespaces = value; }

    /**
     * <p>The namespaces of the entities referenced by this schema.</p>
     */
    inline void SetNamespaces(Aws::Vector<Aws::String>&& value) { m_namespaces = std::move(value); }

    /**
     * <p>The namespaces of the entities referenced by this schema.</p>
     */
    inline GetSchemaResult& WithNamespaces(const Aws::Vector<Aws::String>& value) { SetNamespaces(value); return *this;}

    /**
     * <p>The namespaces of the entities referenced by this schema.</p>
     */
    inline GetSchemaResult& WithNamespaces(Aws::Vector<Aws::String>&& value) { SetNamespaces(std::move(value)); return *this;}

    /**
     * <p>The namespaces of the entities referenced by this schema.</p>
     */
    inline GetSchemaResult& AddNamespaces(const Aws::String& value) { m_namespaces.push_back(value); return *this; }

    /**
     * <p>The namespaces of the entities referenced by this schema.</p>
     */
    inline GetSchemaResult& AddNamespaces(Aws::String&& value) { m_namespaces.push_back(std::move(value)); return *this; }

    /**
     * <p>The namespaces of the entities referenced by this schema.</p>
     */
    inline GetSchemaResult& AddNamespaces(const char* value) { m_namespaces.push_back(value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSchemaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSchemaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSchemaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_policyStoreId;

    Aws::String m_schema;

    Aws::Utils::DateTime m_createdDate;

    Aws::Utils::DateTime m_lastUpdatedDate;

    Aws::Vector<Aws::String> m_namespaces;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
