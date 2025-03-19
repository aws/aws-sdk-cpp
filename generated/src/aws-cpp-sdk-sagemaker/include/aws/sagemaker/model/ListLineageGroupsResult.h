/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/LineageGroupSummary.h>
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
  class ListLineageGroupsResult
  {
  public:
    AWS_SAGEMAKER_API ListLineageGroupsResult() = default;
    AWS_SAGEMAKER_API ListLineageGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListLineageGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of lineage groups and their properties.</p>
     */
    inline const Aws::Vector<LineageGroupSummary>& GetLineageGroupSummaries() const { return m_lineageGroupSummaries; }
    template<typename LineageGroupSummariesT = Aws::Vector<LineageGroupSummary>>
    void SetLineageGroupSummaries(LineageGroupSummariesT&& value) { m_lineageGroupSummariesHasBeenSet = true; m_lineageGroupSummaries = std::forward<LineageGroupSummariesT>(value); }
    template<typename LineageGroupSummariesT = Aws::Vector<LineageGroupSummary>>
    ListLineageGroupsResult& WithLineageGroupSummaries(LineageGroupSummariesT&& value) { SetLineageGroupSummaries(std::forward<LineageGroupSummariesT>(value)); return *this;}
    template<typename LineageGroupSummariesT = LineageGroupSummary>
    ListLineageGroupsResult& AddLineageGroupSummaries(LineageGroupSummariesT&& value) { m_lineageGroupSummariesHasBeenSet = true; m_lineageGroupSummaries.emplace_back(std::forward<LineageGroupSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of algorithms, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLineageGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLineageGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LineageGroupSummary> m_lineageGroupSummaries;
    bool m_lineageGroupSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
