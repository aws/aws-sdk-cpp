/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
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
namespace RedshiftDataAPIService
{
namespace Model
{
  class ExecuteStatementResult
  {
  public:
    AWS_REDSHIFTDATAAPISERVICE_API ExecuteStatementResult();
    AWS_REDSHIFTDATAAPISERVICE_API ExecuteStatementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTDATAAPISERVICE_API ExecuteStatementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The cluster identifier. This element is not returned when connecting to a
     * serverless workgroup. </p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifier.assign(value); }
    inline ExecuteStatementResult& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline ExecuteStatementResult& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline ExecuteStatementResult& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (UTC) the statement was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline ExecuteStatementResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ExecuteStatementResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }
    inline void SetDatabase(const Aws::String& value) { m_database = value; }
    inline void SetDatabase(Aws::String&& value) { m_database = std::move(value); }
    inline void SetDatabase(const char* value) { m_database.assign(value); }
    inline ExecuteStatementResult& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}
    inline ExecuteStatementResult& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}
    inline ExecuteStatementResult& WithDatabase(const char* value) { SetDatabase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of colon (:) separated names of database groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDbGroups() const{ return m_dbGroups; }
    inline void SetDbGroups(const Aws::Vector<Aws::String>& value) { m_dbGroups = value; }
    inline void SetDbGroups(Aws::Vector<Aws::String>&& value) { m_dbGroups = std::move(value); }
    inline ExecuteStatementResult& WithDbGroups(const Aws::Vector<Aws::String>& value) { SetDbGroups(value); return *this;}
    inline ExecuteStatementResult& WithDbGroups(Aws::Vector<Aws::String>&& value) { SetDbGroups(std::move(value)); return *this;}
    inline ExecuteStatementResult& AddDbGroups(const Aws::String& value) { m_dbGroups.push_back(value); return *this; }
    inline ExecuteStatementResult& AddDbGroups(Aws::String&& value) { m_dbGroups.push_back(std::move(value)); return *this; }
    inline ExecuteStatementResult& AddDbGroups(const char* value) { m_dbGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The database user name.</p>
     */
    inline const Aws::String& GetDbUser() const{ return m_dbUser; }
    inline void SetDbUser(const Aws::String& value) { m_dbUser = value; }
    inline void SetDbUser(Aws::String&& value) { m_dbUser = std::move(value); }
    inline void SetDbUser(const char* value) { m_dbUser.assign(value); }
    inline ExecuteStatementResult& WithDbUser(const Aws::String& value) { SetDbUser(value); return *this;}
    inline ExecuteStatementResult& WithDbUser(Aws::String&& value) { SetDbUser(std::move(value)); return *this;}
    inline ExecuteStatementResult& WithDbUser(const char* value) { SetDbUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the SQL statement whose results are to be fetched. This
     * value is a universally unique identifier (UUID) generated by Amazon Redshift
     * Data API. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline ExecuteStatementResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ExecuteStatementResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ExecuteStatementResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the secret that enables access to the database. </p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }
    inline void SetSecretArn(const Aws::String& value) { m_secretArn = value; }
    inline void SetSecretArn(Aws::String&& value) { m_secretArn = std::move(value); }
    inline void SetSecretArn(const char* value) { m_secretArn.assign(value); }
    inline ExecuteStatementResult& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}
    inline ExecuteStatementResult& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}
    inline ExecuteStatementResult& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session identifier of the query.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }
    inline ExecuteStatementResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline ExecuteStatementResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline ExecuteStatementResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The serverless workgroup name or Amazon Resource Name (ARN). This element is
     * not returned when connecting to a provisioned cluster.</p>
     */
    inline const Aws::String& GetWorkgroupName() const{ return m_workgroupName; }
    inline void SetWorkgroupName(const Aws::String& value) { m_workgroupName = value; }
    inline void SetWorkgroupName(Aws::String&& value) { m_workgroupName = std::move(value); }
    inline void SetWorkgroupName(const char* value) { m_workgroupName.assign(value); }
    inline ExecuteStatementResult& WithWorkgroupName(const Aws::String& value) { SetWorkgroupName(value); return *this;}
    inline ExecuteStatementResult& WithWorkgroupName(Aws::String&& value) { SetWorkgroupName(std::move(value)); return *this;}
    inline ExecuteStatementResult& WithWorkgroupName(const char* value) { SetWorkgroupName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ExecuteStatementResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ExecuteStatementResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ExecuteStatementResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterIdentifier;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_database;

    Aws::Vector<Aws::String> m_dbGroups;

    Aws::String m_dbUser;

    Aws::String m_id;

    Aws::String m_secretArn;

    Aws::String m_sessionId;

    Aws::String m_workgroupName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
