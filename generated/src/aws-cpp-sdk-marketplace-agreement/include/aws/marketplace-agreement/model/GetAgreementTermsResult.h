/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/model/AcceptedTerm.h>
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
  class GetAgreementTermsResult
  {
  public:
    AWS_AGREEMENTSERVICE_API GetAgreementTermsResult() = default;
    AWS_AGREEMENTSERVICE_API GetAgreementTermsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AGREEMENTSERVICE_API GetAgreementTermsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A subset of terms proposed by the proposer that have been accepted by the
     * acceptor as part of the agreement creation.</p>
     */
    inline const Aws::Vector<AcceptedTerm>& GetAcceptedTerms() const { return m_acceptedTerms; }
    template<typename AcceptedTermsT = Aws::Vector<AcceptedTerm>>
    void SetAcceptedTerms(AcceptedTermsT&& value) { m_acceptedTermsHasBeenSet = true; m_acceptedTerms = std::forward<AcceptedTermsT>(value); }
    template<typename AcceptedTermsT = Aws::Vector<AcceptedTerm>>
    GetAgreementTermsResult& WithAcceptedTerms(AcceptedTermsT&& value) { SetAcceptedTerms(std::forward<AcceptedTermsT>(value)); return *this;}
    template<typename AcceptedTermsT = AcceptedTerm>
    GetAgreementTermsResult& AddAcceptedTerms(AcceptedTermsT&& value) { m_acceptedTermsHasBeenSet = true; m_acceptedTerms.emplace_back(std::forward<AcceptedTermsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token to specify where to start pagination</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetAgreementTermsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAgreementTermsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AcceptedTerm> m_acceptedTerms;
    bool m_acceptedTermsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
