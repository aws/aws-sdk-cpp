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
    AWS_S3TABLES_API ListTableBucketsResult() = default;
    AWS_S3TABLES_API ListTableBucketsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3TABLES_API ListTableBucketsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of table buckets.</p>
     */
    inline const Aws::Vector<TableBucketSummary>& GetTableBuckets() const { return m_tableBuckets; }
    template<typename TableBucketsT = Aws::Vector<TableBucketSummary>>
    void SetTableBuckets(TableBucketsT&& value) { m_tableBucketsHasBeenSet = true; m_tableBuckets = std::forward<TableBucketsT>(value); }
    template<typename TableBucketsT = Aws::Vector<TableBucketSummary>>
    ListTableBucketsResult& WithTableBuckets(TableBucketsT&& value) { SetTableBuckets(std::forward<TableBucketsT>(value)); return *this;}
    template<typename TableBucketsT = TableBucketSummary>
    ListTableBucketsResult& AddTableBuckets(TableBucketsT&& value) { m_tableBucketsHasBeenSet = true; m_tableBuckets.emplace_back(std::forward<TableBucketsT>(value)); return *this; }
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
    ListTableBucketsResult& WithContinuationToken(ContinuationTokenT&& value) { SetContinuationToken(std::forward<ContinuationTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTableBucketsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TableBucketSummary> m_tableBuckets;
    bool m_tableBucketsHasBeenSet = false;

    Aws::String m_continuationToken;
    bool m_continuationTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
