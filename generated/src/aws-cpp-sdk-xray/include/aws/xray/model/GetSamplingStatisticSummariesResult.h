/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/SamplingStatisticSummary.h>
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
namespace XRay
{
namespace Model
{
  class GetSamplingStatisticSummariesResult
  {
  public:
    AWS_XRAY_API GetSamplingStatisticSummariesResult() = default;
    AWS_XRAY_API GetSamplingStatisticSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API GetSamplingStatisticSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the number of requests instrumented for each sampling
     * rule.</p>
     */
    inline const Aws::Vector<SamplingStatisticSummary>& GetSamplingStatisticSummaries() const { return m_samplingStatisticSummaries; }
    template<typename SamplingStatisticSummariesT = Aws::Vector<SamplingStatisticSummary>>
    void SetSamplingStatisticSummaries(SamplingStatisticSummariesT&& value) { m_samplingStatisticSummariesHasBeenSet = true; m_samplingStatisticSummaries = std::forward<SamplingStatisticSummariesT>(value); }
    template<typename SamplingStatisticSummariesT = Aws::Vector<SamplingStatisticSummary>>
    GetSamplingStatisticSummariesResult& WithSamplingStatisticSummaries(SamplingStatisticSummariesT&& value) { SetSamplingStatisticSummaries(std::forward<SamplingStatisticSummariesT>(value)); return *this;}
    template<typename SamplingStatisticSummariesT = SamplingStatisticSummary>
    GetSamplingStatisticSummariesResult& AddSamplingStatisticSummaries(SamplingStatisticSummariesT&& value) { m_samplingStatisticSummariesHasBeenSet = true; m_samplingStatisticSummaries.emplace_back(std::forward<SamplingStatisticSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetSamplingStatisticSummariesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSamplingStatisticSummariesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SamplingStatisticSummary> m_samplingStatisticSummaries;
    bool m_samplingStatisticSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
