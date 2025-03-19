/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HumanTaskUiSummary.h>
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
  class ListHumanTaskUisResult
  {
  public:
    AWS_SAGEMAKER_API ListHumanTaskUisResult() = default;
    AWS_SAGEMAKER_API ListHumanTaskUisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListHumanTaskUisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects describing the human task user interfaces.</p>
     */
    inline const Aws::Vector<HumanTaskUiSummary>& GetHumanTaskUiSummaries() const { return m_humanTaskUiSummaries; }
    template<typename HumanTaskUiSummariesT = Aws::Vector<HumanTaskUiSummary>>
    void SetHumanTaskUiSummaries(HumanTaskUiSummariesT&& value) { m_humanTaskUiSummariesHasBeenSet = true; m_humanTaskUiSummaries = std::forward<HumanTaskUiSummariesT>(value); }
    template<typename HumanTaskUiSummariesT = Aws::Vector<HumanTaskUiSummary>>
    ListHumanTaskUisResult& WithHumanTaskUiSummaries(HumanTaskUiSummariesT&& value) { SetHumanTaskUiSummaries(std::forward<HumanTaskUiSummariesT>(value)); return *this;}
    template<typename HumanTaskUiSummariesT = HumanTaskUiSummary>
    ListHumanTaskUisResult& AddHumanTaskUiSummaries(HumanTaskUiSummariesT&& value) { m_humanTaskUiSummariesHasBeenSet = true; m_humanTaskUiSummaries.emplace_back(std::forward<HumanTaskUiSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token to resume pagination.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListHumanTaskUisResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListHumanTaskUisResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<HumanTaskUiSummary> m_humanTaskUiSummaries;
    bool m_humanTaskUiSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
