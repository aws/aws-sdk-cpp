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
    AWS_AGREEMENTSERVICE_API SearchAgreementsResult();
    AWS_AGREEMENTSERVICE_API SearchAgreementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AGREEMENTSERVICE_API SearchAgreementsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A summary of the agreement, including top-level attributes (for example, the
     * agreement ID, version, proposer, and acceptor).</p>
     */
    inline const Aws::Vector<AgreementViewSummary>& GetAgreementViewSummaries() const{ return m_agreementViewSummaries; }

    /**
     * <p>A summary of the agreement, including top-level attributes (for example, the
     * agreement ID, version, proposer, and acceptor).</p>
     */
    inline void SetAgreementViewSummaries(const Aws::Vector<AgreementViewSummary>& value) { m_agreementViewSummaries = value; }

    /**
     * <p>A summary of the agreement, including top-level attributes (for example, the
     * agreement ID, version, proposer, and acceptor).</p>
     */
    inline void SetAgreementViewSummaries(Aws::Vector<AgreementViewSummary>&& value) { m_agreementViewSummaries = std::move(value); }

    /**
     * <p>A summary of the agreement, including top-level attributes (for example, the
     * agreement ID, version, proposer, and acceptor).</p>
     */
    inline SearchAgreementsResult& WithAgreementViewSummaries(const Aws::Vector<AgreementViewSummary>& value) { SetAgreementViewSummaries(value); return *this;}

    /**
     * <p>A summary of the agreement, including top-level attributes (for example, the
     * agreement ID, version, proposer, and acceptor).</p>
     */
    inline SearchAgreementsResult& WithAgreementViewSummaries(Aws::Vector<AgreementViewSummary>&& value) { SetAgreementViewSummaries(std::move(value)); return *this;}

    /**
     * <p>A summary of the agreement, including top-level attributes (for example, the
     * agreement ID, version, proposer, and acceptor).</p>
     */
    inline SearchAgreementsResult& AddAgreementViewSummaries(const AgreementViewSummary& value) { m_agreementViewSummaries.push_back(value); return *this; }

    /**
     * <p>A summary of the agreement, including top-level attributes (for example, the
     * agreement ID, version, proposer, and acceptor).</p>
     */
    inline SearchAgreementsResult& AddAgreementViewSummaries(AgreementViewSummary&& value) { m_agreementViewSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token used for pagination. The field is <code>null</code> if there are no
     * more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used for pagination. The field is <code>null</code> if there are no
     * more results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token used for pagination. The field is <code>null</code> if there are no
     * more results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token used for pagination. The field is <code>null</code> if there are no
     * more results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token used for pagination. The field is <code>null</code> if there are no
     * more results.</p>
     */
    inline SearchAgreementsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used for pagination. The field is <code>null</code> if there are no
     * more results.</p>
     */
    inline SearchAgreementsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used for pagination. The field is <code>null</code> if there are no
     * more results.</p>
     */
    inline SearchAgreementsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SearchAgreementsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SearchAgreementsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SearchAgreementsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AgreementViewSummary> m_agreementViewSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
