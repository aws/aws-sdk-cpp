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
    AWS_AGREEMENTSERVICE_API GetAgreementTermsResult();
    AWS_AGREEMENTSERVICE_API GetAgreementTermsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AGREEMENTSERVICE_API GetAgreementTermsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A subset of terms proposed by the proposer that have been accepted by the
     * acceptor as part of the agreement creation.</p>
     */
    inline const Aws::Vector<AcceptedTerm>& GetAcceptedTerms() const{ return m_acceptedTerms; }

    /**
     * <p>A subset of terms proposed by the proposer that have been accepted by the
     * acceptor as part of the agreement creation.</p>
     */
    inline void SetAcceptedTerms(const Aws::Vector<AcceptedTerm>& value) { m_acceptedTerms = value; }

    /**
     * <p>A subset of terms proposed by the proposer that have been accepted by the
     * acceptor as part of the agreement creation.</p>
     */
    inline void SetAcceptedTerms(Aws::Vector<AcceptedTerm>&& value) { m_acceptedTerms = std::move(value); }

    /**
     * <p>A subset of terms proposed by the proposer that have been accepted by the
     * acceptor as part of the agreement creation.</p>
     */
    inline GetAgreementTermsResult& WithAcceptedTerms(const Aws::Vector<AcceptedTerm>& value) { SetAcceptedTerms(value); return *this;}

    /**
     * <p>A subset of terms proposed by the proposer that have been accepted by the
     * acceptor as part of the agreement creation.</p>
     */
    inline GetAgreementTermsResult& WithAcceptedTerms(Aws::Vector<AcceptedTerm>&& value) { SetAcceptedTerms(std::move(value)); return *this;}

    /**
     * <p>A subset of terms proposed by the proposer that have been accepted by the
     * acceptor as part of the agreement creation.</p>
     */
    inline GetAgreementTermsResult& AddAcceptedTerms(const AcceptedTerm& value) { m_acceptedTerms.push_back(value); return *this; }

    /**
     * <p>A subset of terms proposed by the proposer that have been accepted by the
     * acceptor as part of the agreement creation.</p>
     */
    inline GetAgreementTermsResult& AddAcceptedTerms(AcceptedTerm&& value) { m_acceptedTerms.push_back(std::move(value)); return *this; }


    /**
     * <p>A token to specify where to start pagination</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to specify where to start pagination</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token to specify where to start pagination</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token to specify where to start pagination</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token to specify where to start pagination</p>
     */
    inline GetAgreementTermsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to specify where to start pagination</p>
     */
    inline GetAgreementTermsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to specify where to start pagination</p>
     */
    inline GetAgreementTermsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAgreementTermsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAgreementTermsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAgreementTermsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AcceptedTerm> m_acceptedTerms;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
