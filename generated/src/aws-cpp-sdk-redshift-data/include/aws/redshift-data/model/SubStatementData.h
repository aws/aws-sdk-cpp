/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-data/model/StatementStatusString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace RedshiftDataAPIService
{
namespace Model
{

  /**
   * <p>Information about an SQL statement.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/SubStatementData">AWS
   * API Reference</a></p>
   */
  class SubStatementData
  {
  public:
    AWS_REDSHIFTDATAAPISERVICE_API SubStatementData();
    AWS_REDSHIFTDATAAPISERVICE_API SubStatementData(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTDATAAPISERVICE_API SubStatementData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTDATAAPISERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time (UTC) the statement was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time (UTC) the statement was created. </p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time (UTC) the statement was created. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time (UTC) the statement was created. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time (UTC) the statement was created. </p>
     */
    inline SubStatementData& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time (UTC) the statement was created. </p>
     */
    inline SubStatementData& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The amount of time in nanoseconds that the statement ran.</p>
     */
    inline long long GetDuration() const{ return m_duration; }

    /**
     * <p>The amount of time in nanoseconds that the statement ran.</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>The amount of time in nanoseconds that the statement ran.</p>
     */
    inline void SetDuration(long long value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The amount of time in nanoseconds that the statement ran.</p>
     */
    inline SubStatementData& WithDuration(long long value) { SetDuration(value); return *this;}


    /**
     * <p>The error message from the cluster if the SQL statement encountered an error
     * while running.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }

    /**
     * <p>The error message from the cluster if the SQL statement encountered an error
     * while running.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>The error message from the cluster if the SQL statement encountered an error
     * while running.</p>
     */
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>The error message from the cluster if the SQL statement encountered an error
     * while running.</p>
     */
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>The error message from the cluster if the SQL statement encountered an error
     * while running.</p>
     */
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }

    /**
     * <p>The error message from the cluster if the SQL statement encountered an error
     * while running.</p>
     */
    inline SubStatementData& WithError(const Aws::String& value) { SetError(value); return *this;}

    /**
     * <p>The error message from the cluster if the SQL statement encountered an error
     * while running.</p>
     */
    inline SubStatementData& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}

    /**
     * <p>The error message from the cluster if the SQL statement encountered an error
     * while running.</p>
     */
    inline SubStatementData& WithError(const char* value) { SetError(value); return *this;}


    /**
     * <p>A value that indicates whether the statement has a result set. The result set
     * can be empty. The value is true for an empty result set.</p>
     */
    inline bool GetHasResultSet() const{ return m_hasResultSet; }

    /**
     * <p>A value that indicates whether the statement has a result set. The result set
     * can be empty. The value is true for an empty result set.</p>
     */
    inline bool HasResultSetHasBeenSet() const { return m_hasResultSetHasBeenSet; }

    /**
     * <p>A value that indicates whether the statement has a result set. The result set
     * can be empty. The value is true for an empty result set.</p>
     */
    inline void SetHasResultSet(bool value) { m_hasResultSetHasBeenSet = true; m_hasResultSet = value; }

    /**
     * <p>A value that indicates whether the statement has a result set. The result set
     * can be empty. The value is true for an empty result set.</p>
     */
    inline SubStatementData& WithHasResultSet(bool value) { SetHasResultSet(value); return *this;}


    /**
     * <p>The identifier of the SQL statement. This value is a universally unique
     * identifier (UUID) generated by Amazon Redshift Data API. A suffix indicates the
     * number of the SQL statement. For example,
     * <code>d9b6c0c9-0747-4bf4-b142-e8883122f766:2</code> has a suffix of
     * <code>:2</code> that indicates the second SQL statement of a batch query.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the SQL statement. This value is a universally unique
     * identifier (UUID) generated by Amazon Redshift Data API. A suffix indicates the
     * number of the SQL statement. For example,
     * <code>d9b6c0c9-0747-4bf4-b142-e8883122f766:2</code> has a suffix of
     * <code>:2</code> that indicates the second SQL statement of a batch query.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the SQL statement. This value is a universally unique
     * identifier (UUID) generated by Amazon Redshift Data API. A suffix indicates the
     * number of the SQL statement. For example,
     * <code>d9b6c0c9-0747-4bf4-b142-e8883122f766:2</code> has a suffix of
     * <code>:2</code> that indicates the second SQL statement of a batch query.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the SQL statement. This value is a universally unique
     * identifier (UUID) generated by Amazon Redshift Data API. A suffix indicates the
     * number of the SQL statement. For example,
     * <code>d9b6c0c9-0747-4bf4-b142-e8883122f766:2</code> has a suffix of
     * <code>:2</code> that indicates the second SQL statement of a batch query.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the SQL statement. This value is a universally unique
     * identifier (UUID) generated by Amazon Redshift Data API. A suffix indicates the
     * number of the SQL statement. For example,
     * <code>d9b6c0c9-0747-4bf4-b142-e8883122f766:2</code> has a suffix of
     * <code>:2</code> that indicates the second SQL statement of a batch query.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the SQL statement. This value is a universally unique
     * identifier (UUID) generated by Amazon Redshift Data API. A suffix indicates the
     * number of the SQL statement. For example,
     * <code>d9b6c0c9-0747-4bf4-b142-e8883122f766:2</code> has a suffix of
     * <code>:2</code> that indicates the second SQL statement of a batch query.</p>
     */
    inline SubStatementData& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the SQL statement. This value is a universally unique
     * identifier (UUID) generated by Amazon Redshift Data API. A suffix indicates the
     * number of the SQL statement. For example,
     * <code>d9b6c0c9-0747-4bf4-b142-e8883122f766:2</code> has a suffix of
     * <code>:2</code> that indicates the second SQL statement of a batch query.</p>
     */
    inline SubStatementData& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the SQL statement. This value is a universally unique
     * identifier (UUID) generated by Amazon Redshift Data API. A suffix indicates the
     * number of the SQL statement. For example,
     * <code>d9b6c0c9-0747-4bf4-b142-e8883122f766:2</code> has a suffix of
     * <code>:2</code> that indicates the second SQL statement of a batch query.</p>
     */
    inline SubStatementData& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The SQL statement text.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    /**
     * <p>The SQL statement text.</p>
     */
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    /**
     * <p>The SQL statement text.</p>
     */
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    /**
     * <p>The SQL statement text.</p>
     */
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

    /**
     * <p>The SQL statement text.</p>
     */
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }

    /**
     * <p>The SQL statement text.</p>
     */
    inline SubStatementData& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    /**
     * <p>The SQL statement text.</p>
     */
    inline SubStatementData& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    /**
     * <p>The SQL statement text.</p>
     */
    inline SubStatementData& WithQueryString(const char* value) { SetQueryString(value); return *this;}


    /**
     * <p>The SQL statement identifier. This value is a universally unique identifier
     * (UUID) generated by Amazon Redshift Data API. </p>
     */
    inline long long GetRedshiftQueryId() const{ return m_redshiftQueryId; }

    /**
     * <p>The SQL statement identifier. This value is a universally unique identifier
     * (UUID) generated by Amazon Redshift Data API. </p>
     */
    inline bool RedshiftQueryIdHasBeenSet() const { return m_redshiftQueryIdHasBeenSet; }

    /**
     * <p>The SQL statement identifier. This value is a universally unique identifier
     * (UUID) generated by Amazon Redshift Data API. </p>
     */
    inline void SetRedshiftQueryId(long long value) { m_redshiftQueryIdHasBeenSet = true; m_redshiftQueryId = value; }

    /**
     * <p>The SQL statement identifier. This value is a universally unique identifier
     * (UUID) generated by Amazon Redshift Data API. </p>
     */
    inline SubStatementData& WithRedshiftQueryId(long long value) { SetRedshiftQueryId(value); return *this;}


    /**
     * <p>Either the number of rows returned from the SQL statement or the number of
     * rows affected. If result size is greater than zero, the result rows can be the
     * number of rows affected by SQL statements such as INSERT, UPDATE, DELETE, COPY,
     * and others. A <code>-1</code> indicates the value is null.</p>
     */
    inline long long GetResultRows() const{ return m_resultRows; }

    /**
     * <p>Either the number of rows returned from the SQL statement or the number of
     * rows affected. If result size is greater than zero, the result rows can be the
     * number of rows affected by SQL statements such as INSERT, UPDATE, DELETE, COPY,
     * and others. A <code>-1</code> indicates the value is null.</p>
     */
    inline bool ResultRowsHasBeenSet() const { return m_resultRowsHasBeenSet; }

    /**
     * <p>Either the number of rows returned from the SQL statement or the number of
     * rows affected. If result size is greater than zero, the result rows can be the
     * number of rows affected by SQL statements such as INSERT, UPDATE, DELETE, COPY,
     * and others. A <code>-1</code> indicates the value is null.</p>
     */
    inline void SetResultRows(long long value) { m_resultRowsHasBeenSet = true; m_resultRows = value; }

    /**
     * <p>Either the number of rows returned from the SQL statement or the number of
     * rows affected. If result size is greater than zero, the result rows can be the
     * number of rows affected by SQL statements such as INSERT, UPDATE, DELETE, COPY,
     * and others. A <code>-1</code> indicates the value is null.</p>
     */
    inline SubStatementData& WithResultRows(long long value) { SetResultRows(value); return *this;}


    /**
     * <p>The size in bytes of the returned results. A <code>-1</code> indicates the
     * value is null.</p>
     */
    inline long long GetResultSize() const{ return m_resultSize; }

    /**
     * <p>The size in bytes of the returned results. A <code>-1</code> indicates the
     * value is null.</p>
     */
    inline bool ResultSizeHasBeenSet() const { return m_resultSizeHasBeenSet; }

    /**
     * <p>The size in bytes of the returned results. A <code>-1</code> indicates the
     * value is null.</p>
     */
    inline void SetResultSize(long long value) { m_resultSizeHasBeenSet = true; m_resultSize = value; }

    /**
     * <p>The size in bytes of the returned results. A <code>-1</code> indicates the
     * value is null.</p>
     */
    inline SubStatementData& WithResultSize(long long value) { SetResultSize(value); return *this;}


    /**
     * <p>The status of the SQL statement. An example is the that the SQL statement
     * finished. </p>
     */
    inline const StatementStatusString& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the SQL statement. An example is the that the SQL statement
     * finished. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the SQL statement. An example is the that the SQL statement
     * finished. </p>
     */
    inline void SetStatus(const StatementStatusString& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the SQL statement. An example is the that the SQL statement
     * finished. </p>
     */
    inline void SetStatus(StatementStatusString&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the SQL statement. An example is the that the SQL statement
     * finished. </p>
     */
    inline SubStatementData& WithStatus(const StatementStatusString& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the SQL statement. An example is the that the SQL statement
     * finished. </p>
     */
    inline SubStatementData& WithStatus(StatementStatusString&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time (UTC) that the statement metadata was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time (UTC) that the statement metadata was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The date and time (UTC) that the statement metadata was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The date and time (UTC) that the statement metadata was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The date and time (UTC) that the statement metadata was last updated.</p>
     */
    inline SubStatementData& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time (UTC) that the statement metadata was last updated.</p>
     */
    inline SubStatementData& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    long long m_duration;
    bool m_durationHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    bool m_hasResultSet;
    bool m_hasResultSetHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    long long m_redshiftQueryId;
    bool m_redshiftQueryIdHasBeenSet = false;

    long long m_resultRows;
    bool m_resultRowsHasBeenSet = false;

    long long m_resultSize;
    bool m_resultSizeHasBeenSet = false;

    StatementStatusString m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
