/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HubContentInfo.h>
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
namespace SageMaker
{
namespace Model
{
  class ListHubContentVersionsResult
  {
  public:
    AWS_SAGEMAKER_API ListHubContentVersionsResult() = default;
    AWS_SAGEMAKER_API ListHubContentVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListHubContentVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summaries of the listed hub content versions.</p>
     */
    inline const Aws::Vector<HubContentInfo>& GetHubContentSummaries() const { return m_hubContentSummaries; }
    template<typename HubContentSummariesT = Aws::Vector<HubContentInfo>>
    void SetHubContentSummaries(HubContentSummariesT&& value) { m_hubContentSummariesHasBeenSet = true; m_hubContentSummaries = std::forward<HubContentSummariesT>(value); }
    template<typename HubContentSummariesT = Aws::Vector<HubContentInfo>>
    ListHubContentVersionsResult& WithHubContentSummaries(HubContentSummariesT&& value) { SetHubContentSummaries(std::forward<HubContentSummariesT>(value)); return *this;}
    template<typename HubContentSummariesT = HubContentInfo>
    ListHubContentVersionsResult& AddHubContentSummaries(HubContentSummariesT&& value) { m_hubContentSummariesHasBeenSet = true; m_hubContentSummaries.emplace_back(std::forward<HubContentSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of hub content versions, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListHubContentVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListHubContentVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<HubContentInfo> m_hubContentSummaries;
    bool m_hubContentSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
