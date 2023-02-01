/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-data/model/ColumnMetadata.h>
#include <aws/redshift-data/model/Field.h>
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
  class GetStatementResultResult
  {
  public:
    AWS_REDSHIFTDATAAPISERVICE_API GetStatementResultResult();
    AWS_REDSHIFTDATAAPISERVICE_API GetStatementResultResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTDATAAPISERVICE_API GetStatementResultResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The properties (metadata) of a column. </p>
     */
    inline const Aws::Vector<ColumnMetadata>& GetColumnMetadata() const{ return m_columnMetadata; }

    /**
     * <p>The properties (metadata) of a column. </p>
     */
    inline void SetColumnMetadata(const Aws::Vector<ColumnMetadata>& value) { m_columnMetadata = value; }

    /**
     * <p>The properties (metadata) of a column. </p>
     */
    inline void SetColumnMetadata(Aws::Vector<ColumnMetadata>&& value) { m_columnMetadata = std::move(value); }

    /**
     * <p>The properties (metadata) of a column. </p>
     */
    inline GetStatementResultResult& WithColumnMetadata(const Aws::Vector<ColumnMetadata>& value) { SetColumnMetadata(value); return *this;}

    /**
     * <p>The properties (metadata) of a column. </p>
     */
    inline GetStatementResultResult& WithColumnMetadata(Aws::Vector<ColumnMetadata>&& value) { SetColumnMetadata(std::move(value)); return *this;}

    /**
     * <p>The properties (metadata) of a column. </p>
     */
    inline GetStatementResultResult& AddColumnMetadata(const ColumnMetadata& value) { m_columnMetadata.push_back(value); return *this; }

    /**
     * <p>The properties (metadata) of a column. </p>
     */
    inline GetStatementResultResult& AddColumnMetadata(ColumnMetadata&& value) { m_columnMetadata.push_back(std::move(value)); return *this; }


    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline GetStatementResultResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline GetStatementResultResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline GetStatementResultResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The results of the SQL statement.</p>
     */
    inline const Aws::Vector<Aws::Vector<Field>>& GetRecords() const{ return m_records; }

    /**
     * <p>The results of the SQL statement.</p>
     */
    inline void SetRecords(const Aws::Vector<Aws::Vector<Field>>& value) { m_records = value; }

    /**
     * <p>The results of the SQL statement.</p>
     */
    inline void SetRecords(Aws::Vector<Aws::Vector<Field>>&& value) { m_records = std::move(value); }

    /**
     * <p>The results of the SQL statement.</p>
     */
    inline GetStatementResultResult& WithRecords(const Aws::Vector<Aws::Vector<Field>>& value) { SetRecords(value); return *this;}

    /**
     * <p>The results of the SQL statement.</p>
     */
    inline GetStatementResultResult& WithRecords(Aws::Vector<Aws::Vector<Field>>&& value) { SetRecords(std::move(value)); return *this;}

    /**
     * <p>The results of the SQL statement.</p>
     */
    inline GetStatementResultResult& AddRecords(const Aws::Vector<Field>& value) { m_records.push_back(value); return *this; }

    /**
     * <p>The results of the SQL statement.</p>
     */
    inline GetStatementResultResult& AddRecords(Aws::Vector<Field>&& value) { m_records.push_back(std::move(value)); return *this; }


    /**
     * <p>The total number of rows in the result set returned from a query. You can use
     * this number to estimate the number of calls to the
     * <code>GetStatementResult</code> operation needed to page through the results.
     * </p>
     */
    inline long long GetTotalNumRows() const{ return m_totalNumRows; }

    /**
     * <p>The total number of rows in the result set returned from a query. You can use
     * this number to estimate the number of calls to the
     * <code>GetStatementResult</code> operation needed to page through the results.
     * </p>
     */
    inline void SetTotalNumRows(long long value) { m_totalNumRows = value; }

    /**
     * <p>The total number of rows in the result set returned from a query. You can use
     * this number to estimate the number of calls to the
     * <code>GetStatementResult</code> operation needed to page through the results.
     * </p>
     */
    inline GetStatementResultResult& WithTotalNumRows(long long value) { SetTotalNumRows(value); return *this;}

  private:

    Aws::Vector<ColumnMetadata> m_columnMetadata;

    Aws::String m_nextToken;

    Aws::Vector<Aws::Vector<Field>> m_records;

    long long m_totalNumRows;
  };

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
