/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support/model/TrustedAdvisorCheckSummary.h>
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
namespace Support
{
namespace Model
{
  /**
   * <p>The summaries of the Trusted Advisor checks returned by the
   * <a>DescribeTrustedAdvisorCheckSummaries</a> operation.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeTrustedAdvisorCheckSummariesResponse">AWS
   * API Reference</a></p>
   */
  class DescribeTrustedAdvisorCheckSummariesResult
  {
  public:
    AWS_SUPPORT_API DescribeTrustedAdvisorCheckSummariesResult() = default;
    AWS_SUPPORT_API DescribeTrustedAdvisorCheckSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORT_API DescribeTrustedAdvisorCheckSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summary information for the requested Trusted Advisor checks.</p>
     */
    inline const Aws::Vector<TrustedAdvisorCheckSummary>& GetSummaries() const { return m_summaries; }
    template<typename SummariesT = Aws::Vector<TrustedAdvisorCheckSummary>>
    void SetSummaries(SummariesT&& value) { m_summariesHasBeenSet = true; m_summaries = std::forward<SummariesT>(value); }
    template<typename SummariesT = Aws::Vector<TrustedAdvisorCheckSummary>>
    DescribeTrustedAdvisorCheckSummariesResult& WithSummaries(SummariesT&& value) { SetSummaries(std::forward<SummariesT>(value)); return *this;}
    template<typename SummariesT = TrustedAdvisorCheckSummary>
    DescribeTrustedAdvisorCheckSummariesResult& AddSummaries(SummariesT&& value) { m_summariesHasBeenSet = true; m_summaries.emplace_back(std::forward<SummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeTrustedAdvisorCheckSummariesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TrustedAdvisorCheckSummary> m_summaries;
    bool m_summariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
