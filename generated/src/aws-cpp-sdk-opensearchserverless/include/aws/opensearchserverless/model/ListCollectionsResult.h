/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/CollectionSummary.h>
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
namespace OpenSearchServerless
{
namespace Model
{
  class ListCollectionsResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API ListCollectionsResult() = default;
    AWS_OPENSEARCHSERVERLESS_API ListCollectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API ListCollectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about each collection.</p>
     */
    inline const Aws::Vector<CollectionSummary>& GetCollectionSummaries() const { return m_collectionSummaries; }
    template<typename CollectionSummariesT = Aws::Vector<CollectionSummary>>
    void SetCollectionSummaries(CollectionSummariesT&& value) { m_collectionSummariesHasBeenSet = true; m_collectionSummaries = std::forward<CollectionSummariesT>(value); }
    template<typename CollectionSummariesT = Aws::Vector<CollectionSummary>>
    ListCollectionsResult& WithCollectionSummaries(CollectionSummariesT&& value) { SetCollectionSummaries(std::forward<CollectionSummariesT>(value)); return *this;}
    template<typename CollectionSummariesT = CollectionSummary>
    ListCollectionsResult& AddCollectionSummaries(CollectionSummariesT&& value) { m_collectionSummariesHasBeenSet = true; m_collectionSummaries.emplace_back(std::forward<CollectionSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCollectionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCollectionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CollectionSummary> m_collectionSummaries;
    bool m_collectionSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
