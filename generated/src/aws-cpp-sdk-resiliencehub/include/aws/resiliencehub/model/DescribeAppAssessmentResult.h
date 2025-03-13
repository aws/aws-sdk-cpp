/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/model/AppAssessment.h>
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
namespace ResilienceHub
{
namespace Model
{
  class DescribeAppAssessmentResult
  {
  public:
    AWS_RESILIENCEHUB_API DescribeAppAssessmentResult() = default;
    AWS_RESILIENCEHUB_API DescribeAppAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API DescribeAppAssessmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The assessment for an Resilience Hub application, returned as an object. This
     * object includes Amazon Resource Names (ARNs), compliance information, compliance
     * status, cost, messages, resiliency scores, and more.</p>
     */
    inline const AppAssessment& GetAssessment() const { return m_assessment; }
    template<typename AssessmentT = AppAssessment>
    void SetAssessment(AssessmentT&& value) { m_assessmentHasBeenSet = true; m_assessment = std::forward<AssessmentT>(value); }
    template<typename AssessmentT = AppAssessment>
    DescribeAppAssessmentResult& WithAssessment(AssessmentT&& value) { SetAssessment(std::forward<AssessmentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAppAssessmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AppAssessment m_assessment;
    bool m_assessmentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
