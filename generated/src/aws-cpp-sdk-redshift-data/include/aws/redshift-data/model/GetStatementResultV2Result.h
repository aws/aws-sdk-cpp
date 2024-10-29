/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-data/model/ResultFormatString.h>
#include <aws/redshift-data/model/ColumnMetadata.h>
#include <aws/redshift-data/model/QueryRecords.h>
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
  class GetStatementResultV2Result
  {
  public:
    AWS_REDSHIFTDATAAPISERVICE_API GetStatementResultV2Result();
    AWS_REDSHIFTDATAAPISERVICE_API GetStatementResultV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTDATAAPISERVICE_API GetStatementResultV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The properties (metadata) of a column.</p>
     */
    inline const Aws::Vector<ColumnMetadata>& GetColumnMetadata() const{ return m_columnMetadata; }
    inline void SetColumnMetadata(const Aws::Vector<ColumnMetadata>& value) { m_columnMetadata = value; }
    inline void SetColumnMetadata(Aws::Vector<ColumnMetadata>&& value) { m_columnMetadata = std::move(value); }
    inline GetStatementResultV2Result& WithColumnMetadata(const Aws::Vector<ColumnMetadata>& value) { SetColumnMetadata(value); return *this;}
    inline GetStatementResultV2Result& WithColumnMetadata(Aws::Vector<ColumnMetadata>&& value) { SetColumnMetadata(std::move(value)); return *this;}
    inline GetStatementResultV2Result& AddColumnMetadata(const ColumnMetadata& value) { m_columnMetadata.push_back(value); return *this; }
    inline GetStatementResultV2Result& AddColumnMetadata(ColumnMetadata&& value) { m_columnMetadata.push_back(std::move(value)); return *this; }
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
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetStatementResultV2Result& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetStatementResultV2Result& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetStatementResultV2Result& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The results of the SQL statement in CSV format.</p>
     */
    inline const Aws::Vector<QueryRecords>& GetRecords() const{ return m_records; }
    inline void SetRecords(const Aws::Vector<QueryRecords>& value) { m_records = value; }
    inline void SetRecords(Aws::Vector<QueryRecords>&& value) { m_records = std::move(value); }
    inline GetStatementResultV2Result& WithRecords(const Aws::Vector<QueryRecords>& value) { SetRecords(value); return *this;}
    inline GetStatementResultV2Result& WithRecords(Aws::Vector<QueryRecords>&& value) { SetRecords(std::move(value)); return *this;}
    inline GetStatementResultV2Result& AddRecords(const QueryRecords& value) { m_records.push_back(value); return *this; }
    inline GetStatementResultV2Result& AddRecords(QueryRecords&& value) { m_records.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data format of the result of the SQL statement.</p>
     */
    inline const ResultFormatString& GetResultFormat() const{ return m_resultFormat; }
    inline void SetResultFormat(const ResultFormatString& value) { m_resultFormat = value; }
    inline void SetResultFormat(ResultFormatString&& value) { m_resultFormat = std::move(value); }
    inline GetStatementResultV2Result& WithResultFormat(const ResultFormatString& value) { SetResultFormat(value); return *this;}
    inline GetStatementResultV2Result& WithResultFormat(ResultFormatString&& value) { SetResultFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of rows in the result set returned from a query. You can use
     * this number to estimate the number of calls to the
     * <code>GetStatementResultV2</code> operation needed to page through the results.
     * </p>
     */
    inline long long GetTotalNumRows() const{ return m_totalNumRows; }
    inline void SetTotalNumRows(long long value) { m_totalNumRows = value; }
    inline GetStatementResultV2Result& WithTotalNumRows(long long value) { SetTotalNumRows(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetStatementResultV2Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetStatementResultV2Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetStatementResultV2Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ColumnMetadata> m_columnMetadata;

    Aws::String m_nextToken;

    Aws::Vector<QueryRecords> m_records;

    ResultFormatString m_resultFormat;

    long long m_totalNumRows;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
