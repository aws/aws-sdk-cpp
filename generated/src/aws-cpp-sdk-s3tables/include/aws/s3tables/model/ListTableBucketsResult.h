/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/model/TableBucketSummary.h>
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
  class ListTableBucketsResult
  {
  public:
    AWS_S3TABLES_API ListTableBucketsResult();
    AWS_S3TABLES_API ListTableBucketsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3TABLES_API ListTableBucketsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of table buckets.</p>
     */
    inline const Aws::Vector<TableBucketSummary>& GetTableBuckets() const{ return m_tableBuckets; }
    inline void SetTableBuckets(const Aws::Vector<TableBucketSummary>& value) { m_tableBuckets = value; }
    inline void SetTableBuckets(Aws::Vector<TableBucketSummary>&& value) { m_tableBuckets = std::move(value); }
    inline ListTableBucketsResult& WithTableBuckets(const Aws::Vector<TableBucketSummary>& value) { SetTableBuckets(value); return *this;}
    inline ListTableBucketsResult& WithTableBuckets(Aws::Vector<TableBucketSummary>&& value) { SetTableBuckets(std::move(value)); return *this;}
    inline ListTableBucketsResult& AddTableBuckets(const TableBucketSummary& value) { m_tableBuckets.push_back(value); return *this; }
    inline ListTableBucketsResult& AddTableBuckets(TableBucketSummary&& value) { m_tableBuckets.push_back(std::move(value)); return *this; }
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
    inline ListTableBucketsResult& WithContinuationToken(const Aws::String& value) { SetContinuationToken(value); return *this;}
    inline ListTableBucketsResult& WithContinuationToken(Aws::String&& value) { SetContinuationToken(std::move(value)); return *this;}
    inline ListTableBucketsResult& WithContinuationToken(const char* value) { SetContinuationToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTableBucketsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTableBucketsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTableBucketsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TableBucketSummary> m_tableBuckets;

    Aws::String m_continuationToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
