/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/ComplianceDrift.h>
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
  class ListAppAssessmentComplianceDriftsResult
  {
  public:
    AWS_RESILIENCEHUB_API ListAppAssessmentComplianceDriftsResult() = default;
    AWS_RESILIENCEHUB_API ListAppAssessmentComplianceDriftsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListAppAssessmentComplianceDriftsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Indicates compliance drifts (recovery time objective (RTO) and recovery point
     * objective (RPO)) detected for an assessed entity.</p>
     */
    inline const Aws::Vector<ComplianceDrift>& GetComplianceDrifts() const { return m_complianceDrifts; }
    template<typename ComplianceDriftsT = Aws::Vector<ComplianceDrift>>
    void SetComplianceDrifts(ComplianceDriftsT&& value) { m_complianceDriftsHasBeenSet = true; m_complianceDrifts = std::forward<ComplianceDriftsT>(value); }
    template<typename ComplianceDriftsT = Aws::Vector<ComplianceDrift>>
    ListAppAssessmentComplianceDriftsResult& WithComplianceDrifts(ComplianceDriftsT&& value) { SetComplianceDrifts(std::forward<ComplianceDriftsT>(value)); return *this;}
    template<typename ComplianceDriftsT = ComplianceDrift>
    ListAppAssessmentComplianceDriftsResult& AddComplianceDrifts(ComplianceDriftsT&& value) { m_complianceDriftsHasBeenSet = true; m_complianceDrifts.emplace_back(std::forward<ComplianceDriftsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAppAssessmentComplianceDriftsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAppAssessmentComplianceDriftsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ComplianceDrift> m_complianceDrifts;
    bool m_complianceDriftsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
