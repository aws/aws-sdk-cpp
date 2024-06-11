﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-data/model/StatusString.h>
#include <aws/redshift-data/model/SqlParameter.h>
#include <aws/redshift-data/model/SubStatementData.h>
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
  class DescribeStatementResult
  {
  public:
    AWS_REDSHIFTDATAAPISERVICE_API DescribeStatementResult();
    AWS_REDSHIFTDATAAPISERVICE_API DescribeStatementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTDATAAPISERVICE_API DescribeStatementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The cluster identifier. </p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifier.assign(value); }
    inline DescribeStatementResult& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline DescribeStatementResult& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline DescribeStatementResult& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (UTC) when the SQL statement was submitted to run. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline DescribeStatementResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline DescribeStatementResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database. </p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }
    inline void SetDatabase(const Aws::String& value) { m_database = value; }
    inline void SetDatabase(Aws::String&& value) { m_database = std::move(value); }
    inline void SetDatabase(const char* value) { m_database.assign(value); }
    inline DescribeStatementResult& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}
    inline DescribeStatementResult& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}
    inline DescribeStatementResult& WithDatabase(const char* value) { SetDatabase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database user name. </p>
     */
    inline const Aws::String& GetDbUser() const{ return m_dbUser; }
    inline void SetDbUser(const Aws::String& value) { m_dbUser = value; }
    inline void SetDbUser(Aws::String&& value) { m_dbUser = std::move(value); }
    inline void SetDbUser(const char* value) { m_dbUser.assign(value); }
    inline DescribeStatementResult& WithDbUser(const Aws::String& value) { SetDbUser(value); return *this;}
    inline DescribeStatementResult& WithDbUser(Aws::String&& value) { SetDbUser(std::move(value)); return *this;}
    inline DescribeStatementResult& WithDbUser(const char* value) { SetDbUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time in nanoseconds that the statement ran. </p>
     */
    inline long long GetDuration() const{ return m_duration; }
    inline void SetDuration(long long value) { m_duration = value; }
    inline DescribeStatementResult& WithDuration(long long value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message from the cluster if the SQL statement encountered an error
     * while running. </p>
     */
    inline const Aws::String& GetError() const{ return m_error; }
    inline void SetError(const Aws::String& value) { m_error = value; }
    inline void SetError(Aws::String&& value) { m_error = std::move(value); }
    inline void SetError(const char* value) { m_error.assign(value); }
    inline DescribeStatementResult& WithError(const Aws::String& value) { SetError(value); return *this;}
    inline DescribeStatementResult& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}
    inline DescribeStatementResult& WithError(const char* value) { SetError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether the statement has a result set. The result set
     * can be empty. The value is true for an empty result set. The value is true if
     * any substatement returns a result set.</p>
     */
    inline bool GetHasResultSet() const{ return m_hasResultSet; }
    inline void SetHasResultSet(bool value) { m_hasResultSet = value; }
    inline DescribeStatementResult& WithHasResultSet(bool value) { SetHasResultSet(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the SQL statement described. This value is a universally
     * unique identifier (UUID) generated by Amazon Redshift Data API. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline DescribeStatementResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DescribeStatementResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DescribeStatementResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for the SQL statement.</p>
     */
    inline const Aws::Vector<SqlParameter>& GetQueryParameters() const{ return m_queryParameters; }
    inline void SetQueryParameters(const Aws::Vector<SqlParameter>& value) { m_queryParameters = value; }
    inline void SetQueryParameters(Aws::Vector<SqlParameter>&& value) { m_queryParameters = std::move(value); }
    inline DescribeStatementResult& WithQueryParameters(const Aws::Vector<SqlParameter>& value) { SetQueryParameters(value); return *this;}
    inline DescribeStatementResult& WithQueryParameters(Aws::Vector<SqlParameter>&& value) { SetQueryParameters(std::move(value)); return *this;}
    inline DescribeStatementResult& AddQueryParameters(const SqlParameter& value) { m_queryParameters.push_back(value); return *this; }
    inline DescribeStatementResult& AddQueryParameters(SqlParameter&& value) { m_queryParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The SQL statement text. </p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }
    inline void SetQueryString(const Aws::String& value) { m_queryString = value; }
    inline void SetQueryString(Aws::String&& value) { m_queryString = std::move(value); }
    inline void SetQueryString(const char* value) { m_queryString.assign(value); }
    inline DescribeStatementResult& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}
    inline DescribeStatementResult& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}
    inline DescribeStatementResult& WithQueryString(const char* value) { SetQueryString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The process identifier from Amazon Redshift. </p>
     */
    inline long long GetRedshiftPid() const{ return m_redshiftPid; }
    inline void SetRedshiftPid(long long value) { m_redshiftPid = value; }
    inline DescribeStatementResult& WithRedshiftPid(long long value) { SetRedshiftPid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the query generated by Amazon Redshift. These identifiers
     * are also available in the <code>query</code> column of the
     * <code>STL_QUERY</code> system view. </p>
     */
    inline long long GetRedshiftQueryId() const{ return m_redshiftQueryId; }
    inline void SetRedshiftQueryId(long long value) { m_redshiftQueryId = value; }
    inline DescribeStatementResult& WithRedshiftQueryId(long long value) { SetRedshiftQueryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Either the number of rows returned from the SQL statement or the number of
     * rows affected. If result size is greater than zero, the result rows can be the
     * number of rows affected by SQL statements such as INSERT, UPDATE, DELETE, COPY,
     * and others. A <code>-1</code> indicates the value is null.</p>
     */
    inline long long GetResultRows() const{ return m_resultRows; }
    inline void SetResultRows(long long value) { m_resultRows = value; }
    inline DescribeStatementResult& WithResultRows(long long value) { SetResultRows(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size in bytes of the returned results. A <code>-1</code> indicates the
     * value is null.</p>
     */
    inline long long GetResultSize() const{ return m_resultSize; }
    inline void SetResultSize(long long value) { m_resultSize = value; }
    inline DescribeStatementResult& WithResultSize(long long value) { SetResultSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the secret that enables access to
     * the database. </p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }
    inline void SetSecretArn(const Aws::String& value) { m_secretArn = value; }
    inline void SetSecretArn(Aws::String&& value) { m_secretArn = std::move(value); }
    inline void SetSecretArn(const char* value) { m_secretArn.assign(value); }
    inline DescribeStatementResult& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}
    inline DescribeStatementResult& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}
    inline DescribeStatementResult& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the SQL statement being described. Status values are defined as
     * follows: </p> <ul> <li> <p>ABORTED - The query run was stopped by the user. </p>
     * </li> <li> <p>ALL - A status value that includes all query statuses. This value
     * can be used to filter results. </p> </li> <li> <p>FAILED - The query run failed.
     * </p> </li> <li> <p>FINISHED - The query has finished running. </p> </li> <li>
     * <p>PICKED - The query has been chosen to be run. </p> </li> <li> <p>STARTED -
     * The query run has started. </p> </li> <li> <p>SUBMITTED - The query was
     * submitted, but not yet processed. </p> </li> </ul>
     */
    inline const StatusString& GetStatus() const{ return m_status; }
    inline void SetStatus(const StatusString& value) { m_status = value; }
    inline void SetStatus(StatusString&& value) { m_status = std::move(value); }
    inline DescribeStatementResult& WithStatus(const StatusString& value) { SetStatus(value); return *this;}
    inline DescribeStatementResult& WithStatus(StatusString&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SQL statements from a multiple statement run.</p>
     */
    inline const Aws::Vector<SubStatementData>& GetSubStatements() const{ return m_subStatements; }
    inline void SetSubStatements(const Aws::Vector<SubStatementData>& value) { m_subStatements = value; }
    inline void SetSubStatements(Aws::Vector<SubStatementData>&& value) { m_subStatements = std::move(value); }
    inline DescribeStatementResult& WithSubStatements(const Aws::Vector<SubStatementData>& value) { SetSubStatements(value); return *this;}
    inline DescribeStatementResult& WithSubStatements(Aws::Vector<SubStatementData>&& value) { SetSubStatements(std::move(value)); return *this;}
    inline DescribeStatementResult& AddSubStatements(const SubStatementData& value) { m_subStatements.push_back(value); return *this; }
    inline DescribeStatementResult& AddSubStatements(SubStatementData&& value) { m_subStatements.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time (UTC) that the metadata for the SQL statement was last
     * updated. An example is the time the status last changed. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline DescribeStatementResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline DescribeStatementResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The serverless workgroup name or Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetWorkgroupName() const{ return m_workgroupName; }
    inline void SetWorkgroupName(const Aws::String& value) { m_workgroupName = value; }
    inline void SetWorkgroupName(Aws::String&& value) { m_workgroupName = std::move(value); }
    inline void SetWorkgroupName(const char* value) { m_workgroupName.assign(value); }
    inline DescribeStatementResult& WithWorkgroupName(const Aws::String& value) { SetWorkgroupName(value); return *this;}
    inline DescribeStatementResult& WithWorkgroupName(Aws::String&& value) { SetWorkgroupName(std::move(value)); return *this;}
    inline DescribeStatementResult& WithWorkgroupName(const char* value) { SetWorkgroupName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeStatementResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeStatementResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeStatementResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterIdentifier;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_database;

    Aws::String m_dbUser;

    long long m_duration;

    Aws::String m_error;

    bool m_hasResultSet;

    Aws::String m_id;

    Aws::Vector<SqlParameter> m_queryParameters;

    Aws::String m_queryString;

    long long m_redshiftPid;

    long long m_redshiftQueryId;

    long long m_resultRows;

    long long m_resultSize;

    Aws::String m_secretArn;

    StatusString m_status;

    Aws::Vector<SubStatementData> m_subStatements;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_workgroupName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
