/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wisdom/model/ContentSummary.h>
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
namespace ConnectWisdomService
{
namespace Model
{
  class ListContentsResult
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API ListContentsResult() = default;
    AWS_CONNECTWISDOMSERVICE_API ListContentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API ListContentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the content.</p>
     */
    inline const Aws::Vector<ContentSummary>& GetContentSummaries() const { return m_contentSummaries; }
    template<typename ContentSummariesT = Aws::Vector<ContentSummary>>
    void SetContentSummaries(ContentSummariesT&& value) { m_contentSummariesHasBeenSet = true; m_contentSummaries = std::forward<ContentSummariesT>(value); }
    template<typename ContentSummariesT = Aws::Vector<ContentSummary>>
    ListContentsResult& WithContentSummaries(ContentSummariesT&& value) { SetContentSummaries(std::forward<ContentSummariesT>(value)); return *this;}
    template<typename ContentSummariesT = ContentSummary>
    ListContentsResult& AddContentSummaries(ContentSummariesT&& value) { m_contentSummariesHasBeenSet = true; m_contentSummaries.emplace_back(std::forward<ContentSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListContentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListContentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ContentSummary> m_contentSummaries;
    bool m_contentSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
