/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/model/AgreementViewSummary.h>
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
namespace AgreementService
{
namespace Model
{
  class SearchAgreementsResult
  {
  public:
    AWS_AGREEMENTSERVICE_API SearchAgreementsResult() = default;
    AWS_AGREEMENTSERVICE_API SearchAgreementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AGREEMENTSERVICE_API SearchAgreementsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A summary of the agreement, including top-level attributes (for example, the
     * agreement ID, version, proposer, and acceptor).</p>
     */
    inline const Aws::Vector<AgreementViewSummary>& GetAgreementViewSummaries() const { return m_agreementViewSummaries; }
    template<typename AgreementViewSummariesT = Aws::Vector<AgreementViewSummary>>
    void SetAgreementViewSummaries(AgreementViewSummariesT&& value) { m_agreementViewSummariesHasBeenSet = true; m_agreementViewSummaries = std::forward<AgreementViewSummariesT>(value); }
    template<typename AgreementViewSummariesT = Aws::Vector<AgreementViewSummary>>
    SearchAgreementsResult& WithAgreementViewSummaries(AgreementViewSummariesT&& value) { SetAgreementViewSummaries(std::forward<AgreementViewSummariesT>(value)); return *this;}
    template<typename AgreementViewSummariesT = AgreementViewSummary>
    SearchAgreementsResult& AddAgreementViewSummaries(AgreementViewSummariesT&& value) { m_agreementViewSummariesHasBeenSet = true; m_agreementViewSummaries.emplace_back(std::forward<AgreementViewSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token used for pagination. The field is <code>null</code> if there are no
     * more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchAgreementsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchAgreementsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AgreementViewSummary> m_agreementViewSummaries;
    bool m_agreementViewSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
