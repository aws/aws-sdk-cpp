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
    AWS_S3TABLES_API ListTablesResult();
    AWS_S3TABLES_API ListTablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3TABLES_API ListTablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of tables.</p>
     */
    inline const Aws::Vector<TableSummary>& GetTables() const{ return m_tables; }
    inline void SetTables(const Aws::Vector<TableSummary>& value) { m_tables = value; }
    inline void SetTables(Aws::Vector<TableSummary>&& value) { m_tables = std::move(value); }
    inline ListTablesResult& WithTables(const Aws::Vector<TableSummary>& value) { SetTables(value); return *this;}
    inline ListTablesResult& WithTables(Aws::Vector<TableSummary>&& value) { SetTables(std::move(value)); return *this;}
    inline ListTablesResult& AddTables(const TableSummary& value) { m_tables.push_back(value); return *this; }
    inline ListTablesResult& AddTables(TableSummary&& value) { m_tables.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>You can use this <code>ContinuationToken</code> for pagination of the list
     * results.</p>
     */
    inline const Aws::String& GetContinuationToken() const{ return m_continuationToken; }
    inline void SetContinuationToken(const Aws::String& value) { m_continuationToken = value; }
    inline void SetContinuationToken(Aws::String&& value) { m_continuationToken = std::move(value); }
    inline void SetContinuationToken(const char* value) { m_continuationToken.assign(value); }
    inline ListTablesResult& WithContinuationToken(const Aws::String& value) { SetContinuationToken(value); return *this;}
    inline ListTablesResult& WithContinuationToken(Aws::String&& value) { SetContinuationToken(std::move(value)); return *this;}
    inline ListTablesResult& WithContinuationToken(const char* value) { SetContinuationToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTablesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTablesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTablesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TableSummary> m_tables;

    Aws::String m_continuationToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
