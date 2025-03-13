/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/model/TableSummary.h>
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
namespace S3Tables
{
namespace Model
{
  class ListTablesResult
  {
  public:
    AWS_S3TABLES_API ListTablesResult() = default;
    AWS_S3TABLES_API ListTablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3TABLES_API ListTablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of tables.</p>
     */
    inline const Aws::Vector<TableSummary>& GetTables() const { return m_tables; }
    template<typename TablesT = Aws::Vector<TableSummary>>
    void SetTables(TablesT&& value) { m_tablesHasBeenSet = true; m_tables = std::forward<TablesT>(value); }
    template<typename TablesT = Aws::Vector<TableSummary>>
    ListTablesResult& WithTables(TablesT&& value) { SetTables(std::forward<TablesT>(value)); return *this;}
    template<typename TablesT = TableSummary>
    ListTablesResult& AddTables(TablesT&& value) { m_tablesHasBeenSet = true; m_tables.emplace_back(std::forward<TablesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>You can use this <code>ContinuationToken</code> for pagination of the list
     * results.</p>
     */
    inline const Aws::String& GetContinuationToken() const { return m_continuationToken; }
    template<typename ContinuationTokenT = Aws::String>
    void SetContinuationToken(ContinuationTokenT&& value) { m_continuationTokenHasBeenSet = true; m_continuationToken = std::forward<ContinuationTokenT>(value); }
    template<typename ContinuationTokenT = Aws::String>
    ListTablesResult& WithContinuationToken(ContinuationTokenT&& value) { SetContinuationToken(std::forward<ContinuationTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTablesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TableSummary> m_tables;
    bool m_tablesHasBeenSet = false;

    Aws::String m_continuationToken;
    bool m_continuationTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
