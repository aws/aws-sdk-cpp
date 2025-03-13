/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/Index.h>
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
namespace QBusiness
{
namespace Model
{
  class ListIndicesResult
  {
  public:
    AWS_QBUSINESS_API ListIndicesResult() = default;
    AWS_QBUSINESS_API ListIndicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API ListIndicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the response is truncated, Amazon Q Business returns this token that you
     * can use in the subsequent request to retrieve the next set of indexes.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListIndicesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of information on the items in one or more indexes.</p>
     */
    inline const Aws::Vector<Index>& GetIndices() const { return m_indices; }
    template<typename IndicesT = Aws::Vector<Index>>
    void SetIndices(IndicesT&& value) { m_indicesHasBeenSet = true; m_indices = std::forward<IndicesT>(value); }
    template<typename IndicesT = Aws::Vector<Index>>
    ListIndicesResult& WithIndices(IndicesT&& value) { SetIndices(std::forward<IndicesT>(value)); return *this;}
    template<typename IndicesT = Index>
    ListIndicesResult& AddIndices(IndicesT&& value) { m_indicesHasBeenSet = true; m_indices.emplace_back(std::forward<IndicesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIndicesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Index> m_indices;
    bool m_indicesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
