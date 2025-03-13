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
    AWS_REDSHIFTDATAAPISERVICE_API GetStatementResultV2Result() = default;
    AWS_REDSHIFTDATAAPISERVICE_API GetStatementResultV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTDATAAPISERVICE_API GetStatementResultV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The properties (metadata) of a column.</p>
     */
    inline const Aws::Vector<ColumnMetadata>& GetColumnMetadata() const { return m_columnMetadata; }
    template<typename ColumnMetadataT = Aws::Vector<ColumnMetadata>>
    void SetColumnMetadata(ColumnMetadataT&& value) { m_columnMetadataHasBeenSet = true; m_columnMetadata = std::forward<ColumnMetadataT>(value); }
    template<typename ColumnMetadataT = Aws::Vector<ColumnMetadata>>
    GetStatementResultV2Result& WithColumnMetadata(ColumnMetadataT&& value) { SetColumnMetadata(std::forward<ColumnMetadataT>(value)); return *this;}
    template<typename ColumnMetadataT = ColumnMetadata>
    GetStatementResultV2Result& AddColumnMetadata(ColumnMetadataT&& value) { m_columnMetadataHasBeenSet = true; m_columnMetadata.emplace_back(std::forward<ColumnMetadataT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetStatementResultV2Result& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The results of the SQL statement in CSV format.</p>
     */
    inline const Aws::Vector<QueryRecords>& GetRecords() const { return m_records; }
    template<typename RecordsT = Aws::Vector<QueryRecords>>
    void SetRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records = std::forward<RecordsT>(value); }
    template<typename RecordsT = Aws::Vector<QueryRecords>>
    GetStatementResultV2Result& WithRecords(RecordsT&& value) { SetRecords(std::forward<RecordsT>(value)); return *this;}
    template<typename RecordsT = QueryRecords>
    GetStatementResultV2Result& AddRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records.emplace_back(std::forward<RecordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data format of the result of the SQL statement.</p>
     */
    inline ResultFormatString GetResultFormat() const { return m_resultFormat; }
    inline void SetResultFormat(ResultFormatString value) { m_resultFormatHasBeenSet = true; m_resultFormat = value; }
    inline GetStatementResultV2Result& WithResultFormat(ResultFormatString value) { SetResultFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of rows in the result set returned from a query. You can use
     * this number to estimate the number of calls to the
     * <code>GetStatementResultV2</code> operation needed to page through the results.
     * </p>
     */
    inline long long GetTotalNumRows() const { return m_totalNumRows; }
    inline void SetTotalNumRows(long long value) { m_totalNumRowsHasBeenSet = true; m_totalNumRows = value; }
    inline GetStatementResultV2Result& WithTotalNumRows(long long value) { SetTotalNumRows(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetStatementResultV2Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ColumnMetadata> m_columnMetadata;
    bool m_columnMetadataHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<QueryRecords> m_records;
    bool m_recordsHasBeenSet = false;

    ResultFormatString m_resultFormat{ResultFormatString::NOT_SET};
    bool m_resultFormatHasBeenSet = false;

    long long m_totalNumRows{0};
    bool m_totalNumRowsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
