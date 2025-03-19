/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/InsightResults.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{
  class GetInsightResultsResult
  {
  public:
    AWS_SECURITYHUB_API GetInsightResultsResult() = default;
    AWS_SECURITYHUB_API GetInsightResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API GetInsightResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The insight results returned by the operation.</p>
     */
    inline const InsightResults& GetInsightResults() const { return m_insightResults; }
    template<typename InsightResultsT = InsightResults>
    void SetInsightResults(InsightResultsT&& value) { m_insightResultsHasBeenSet = true; m_insightResults = std::forward<InsightResultsT>(value); }
    template<typename InsightResultsT = InsightResults>
    GetInsightResultsResult& WithInsightResults(InsightResultsT&& value) { SetInsightResults(std::forward<InsightResultsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetInsightResultsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    InsightResults m_insightResults;
    bool m_insightResultsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
