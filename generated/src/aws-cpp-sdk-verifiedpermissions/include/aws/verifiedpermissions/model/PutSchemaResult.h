/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class PutSchemaResult
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API PutSchemaResult();
    AWS_VERIFIEDPERMISSIONS_API PutSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VERIFIEDPERMISSIONS_API PutSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique ID of the policy store that contains the schema.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const{ return m_policyStoreId; }

    /**
     * <p>The unique ID of the policy store that contains the schema.</p>
     */
    inline void SetPolicyStoreId(const Aws::String& value) { m_policyStoreId = value; }

    /**
     * <p>The unique ID of the policy store that contains the schema.</p>
     */
    inline void SetPolicyStoreId(Aws::String&& value) { m_policyStoreId = std::move(value); }

    /**
     * <p>The unique ID of the policy store that contains the schema.</p>
     */
    inline void SetPolicyStoreId(const char* value) { m_policyStoreId.assign(value); }

    /**
     * <p>The unique ID of the policy store that contains the schema.</p>
     */
    inline PutSchemaResult& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}

    /**
     * <p>The unique ID of the policy store that contains the schema.</p>
     */
    inline PutSchemaResult& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the policy store that contains the schema.</p>
     */
    inline PutSchemaResult& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}


    /**
     * <p>Identifies the namespaces of the entities referenced by this schema.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNamespaces() const{ return m_namespaces; }

    /**
     * <p>Identifies the namespaces of the entities referenced by this schema.</p>
     */
    inline void SetNamespaces(const Aws::Vector<Aws::String>& value) { m_namespaces = value; }

    /**
     * <p>Identifies the namespaces of the entities referenced by this schema.</p>
     */
    inline void SetNamespaces(Aws::Vector<Aws::String>&& value) { m_namespaces = std::move(value); }

    /**
     * <p>Identifies the namespaces of the entities referenced by this schema.</p>
     */
    inline PutSchemaResult& WithNamespaces(const Aws::Vector<Aws::String>& value) { SetNamespaces(value); return *this;}

    /**
     * <p>Identifies the namespaces of the entities referenced by this schema.</p>
     */
    inline PutSchemaResult& WithNamespaces(Aws::Vector<Aws::String>&& value) { SetNamespaces(std::move(value)); return *this;}

    /**
     * <p>Identifies the namespaces of the entities referenced by this schema.</p>
     */
    inline PutSchemaResult& AddNamespaces(const Aws::String& value) { m_namespaces.push_back(value); return *this; }

    /**
     * <p>Identifies the namespaces of the entities referenced by this schema.</p>
     */
    inline PutSchemaResult& AddNamespaces(Aws::String&& value) { m_namespaces.push_back(std::move(value)); return *this; }

    /**
     * <p>Identifies the namespaces of the entities referenced by this schema.</p>
     */
    inline PutSchemaResult& AddNamespaces(const char* value) { m_namespaces.push_back(value); return *this; }


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
    inline PutSchemaResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date and time that the schema was originally created.</p>
     */
    inline PutSchemaResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The date and time that the schema was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }

    /**
     * <p>The date and time that the schema was last updated.</p>
     */
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }

    /**
     * <p>The date and time that the schema was last updated.</p>
     */
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = std::move(value); }

    /**
     * <p>The date and time that the schema was last updated.</p>
     */
    inline PutSchemaResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}

    /**
     * <p>The date and time that the schema was last updated.</p>
     */
    inline PutSchemaResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutSchemaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutSchemaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutSchemaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_policyStoreId;

    Aws::Vector<Aws::String> m_namespaces;

    Aws::Utils::DateTime m_createdDate;

    Aws::Utils::DateTime m_lastUpdatedDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
