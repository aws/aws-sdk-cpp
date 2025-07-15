/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3vectors/model/IndexSummary.h>
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
namespace S3Vectors
{
namespace Model
{
  class ListIndexesResult
  {
  public:
    AWS_S3VECTORS_API ListIndexesResult() = default;
    AWS_S3VECTORS_API ListIndexesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3VECTORS_API ListIndexesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The next pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListIndexesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes of the vector indexes</p>
     */
    inline const Aws::Vector<IndexSummary>& GetIndexes() const { return m_indexes; }
    template<typename IndexesT = Aws::Vector<IndexSummary>>
    void SetIndexes(IndexesT&& value) { m_indexesHasBeenSet = true; m_indexes = std::forward<IndexesT>(value); }
    template<typename IndexesT = Aws::Vector<IndexSummary>>
    ListIndexesResult& WithIndexes(IndexesT&& value) { SetIndexes(std::forward<IndexesT>(value)); return *this;}
    template<typename IndexesT = IndexSummary>
    ListIndexesResult& AddIndexes(IndexesT&& value) { m_indexesHasBeenSet = true; m_indexes.emplace_back(std::forward<IndexesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIndexesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<IndexSummary> m_indexes;
    bool m_indexesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Vectors
} // namespace Aws
