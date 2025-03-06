/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/redshift-data/RedshiftDataAPIServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-data/model/StatusString.h>
#include <utility>

namespace Aws
{
namespace RedshiftDataAPIService
{
namespace Model
{

  /**
   */
  class ListStatementsRequest : public RedshiftDataAPIServiceRequest
  {
  public:
    AWS_REDSHIFTDATAAPISERVICE_API ListStatementsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStatements"; }

    AWS_REDSHIFTDATAAPISERVICE_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTDATAAPISERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The cluster identifier. Only statements that ran on this cluster are
     * returned. When providing <code>ClusterIdentifier</code>, then
     * <code>WorkgroupName</code> can't be specified.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }
    inline ListStatementsRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline ListStatementsRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline ListStatementsRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database when listing statements run against a
     * <code>ClusterIdentifier</code> or <code>WorkgroupName</code>. </p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }
    inline ListStatementsRequest& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}
    inline ListStatementsRequest& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}
    inline ListStatementsRequest& WithDatabase(const char* value) { SetDatabase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of SQL statements to return in the response. If more SQL
     * statements exist than fit in one response, then <code>NextToken</code> is
     * returned to page through the results. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListStatementsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListStatementsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListStatementsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListStatementsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that filters which statements to return in the response. If true, all
     * statements run by the caller's IAM role are returned. If false, only statements
     * run by the caller's IAM role in the current IAM session are returned. The
     * default is true. </p>
     */
    inline bool GetRoleLevel() const{ return m_roleLevel; }
    inline bool RoleLevelHasBeenSet() const { return m_roleLevelHasBeenSet; }
    inline void SetRoleLevel(bool value) { m_roleLevelHasBeenSet = true; m_roleLevel = value; }
    inline ListStatementsRequest& WithRoleLevel(bool value) { SetRoleLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SQL statement specified as input to
     * <code>BatchExecuteStatement</code> or <code>ExecuteStatement</code> to identify
     * the query. You can list multiple statements by providing a prefix that matches
     * the beginning of the statement name. For example, to list myStatement1,
     * myStatement2, myStatement3, and so on, then provide the a value of
     * <code>myStatement</code>. Data API does a case-sensitive match of SQL statement
     * names to the prefix value you provide. </p>
     */
    inline const Aws::String& GetStatementName() const{ return m_statementName; }
    inline bool StatementNameHasBeenSet() const { return m_statementNameHasBeenSet; }
    inline void SetStatementName(const Aws::String& value) { m_statementNameHasBeenSet = true; m_statementName = value; }
    inline void SetStatementName(Aws::String&& value) { m_statementNameHasBeenSet = true; m_statementName = std::move(value); }
    inline void SetStatementName(const char* value) { m_statementNameHasBeenSet = true; m_statementName.assign(value); }
    inline ListStatementsRequest& WithStatementName(const Aws::String& value) { SetStatementName(value); return *this;}
    inline ListStatementsRequest& WithStatementName(Aws::String&& value) { SetStatementName(std::move(value)); return *this;}
    inline ListStatementsRequest& WithStatementName(const char* value) { SetStatementName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the SQL statement to list. Status values are defined as
     * follows: </p> <ul> <li> <p>ABORTED - The query run was stopped by the user. </p>
     * </li> <li> <p>ALL - A status value that includes all query statuses. This value
     * can be used to filter results. </p> </li> <li> <p>FAILED - The query run failed.
     * </p> </li> <li> <p>FINISHED - The query has finished running. </p> </li> <li>
     * <p>PICKED - The query has been chosen to be run. </p> </li> <li> <p>STARTED -
     * The query run has started. </p> </li> <li> <p>SUBMITTED - The query was
     * submitted, but not yet processed. </p> </li> </ul>
     */
    inline const StatusString& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const StatusString& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(StatusString&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListStatementsRequest& WithStatus(const StatusString& value) { SetStatus(value); return *this;}
    inline ListStatementsRequest& WithStatus(StatusString&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The serverless workgroup name or Amazon Resource Name (ARN). Only statements
     * that ran on this workgroup are returned. When providing
     * <code>WorkgroupName</code>, then <code>ClusterIdentifier</code> can't be
     * specified.</p>
     */
    inline const Aws::String& GetWorkgroupName() const{ return m_workgroupName; }
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }
    inline void SetWorkgroupName(const Aws::String& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = value; }
    inline void SetWorkgroupName(Aws::String&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::move(value); }
    inline void SetWorkgroupName(const char* value) { m_workgroupNameHasBeenSet = true; m_workgroupName.assign(value); }
    inline ListStatementsRequest& WithWorkgroupName(const Aws::String& value) { SetWorkgroupName(value); return *this;}
    inline ListStatementsRequest& WithWorkgroupName(Aws::String&& value) { SetWorkgroupName(std::move(value)); return *this;}
    inline ListStatementsRequest& WithWorkgroupName(const char* value) { SetWorkgroupName(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_roleLevel;
    bool m_roleLevelHasBeenSet = false;

    Aws::String m_statementName;
    bool m_statementNameHasBeenSet = false;

    StatusString m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_workgroupName;
    bool m_workgroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
