/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/Retriever.h>
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
  class ListRetrieversResult
  {
  public:
    AWS_QBUSINESS_API ListRetrieversResult() = default;
    AWS_QBUSINESS_API ListRetrieversResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API ListRetrieversResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of summary information for one or more retrievers.</p>
     */
    inline const Aws::Vector<Retriever>& GetRetrievers() const { return m_retrievers; }
    template<typename RetrieversT = Aws::Vector<Retriever>>
    void SetRetrievers(RetrieversT&& value) { m_retrieversHasBeenSet = true; m_retrievers = std::forward<RetrieversT>(value); }
    template<typename RetrieversT = Aws::Vector<Retriever>>
    ListRetrieversResult& WithRetrievers(RetrieversT&& value) { SetRetrievers(std::forward<RetrieversT>(value)); return *this;}
    template<typename RetrieversT = Retriever>
    ListRetrieversResult& AddRetrievers(RetrieversT&& value) { m_retrieversHasBeenSet = true; m_retrievers.emplace_back(std::forward<RetrieversT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Q Business returns this token, which you
     * can use in a later request to list the next set of retrievers.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRetrieversResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRetrieversResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Retriever> m_retrievers;
    bool m_retrieversHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
