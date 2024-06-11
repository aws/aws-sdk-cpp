/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/marketplace-agreement/model/Acceptor.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/model/EstimatedCharges.h>
#include <aws/marketplace-agreement/model/ProposalSummary.h>
#include <aws/marketplace-agreement/model/Proposer.h>
#include <aws/marketplace-agreement/model/AgreementStatus.h>
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
  class DescribeAgreementResult
  {
  public:
    AWS_AGREEMENTSERVICE_API DescribeAgreementResult();
    AWS_AGREEMENTSERVICE_API DescribeAgreementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AGREEMENTSERVICE_API DescribeAgreementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The date and time the offer was accepted or the agreement was created.</p>
     *  <p> <code>AcceptanceTime</code> and <code>StartTime</code> can differ for
     * future dated agreements (FDAs).</p> 
     */
    inline const Aws::Utils::DateTime& GetAcceptanceTime() const{ return m_acceptanceTime; }
    inline void SetAcceptanceTime(const Aws::Utils::DateTime& value) { m_acceptanceTime = value; }
    inline void SetAcceptanceTime(Aws::Utils::DateTime&& value) { m_acceptanceTime = std::move(value); }
    inline DescribeAgreementResult& WithAcceptanceTime(const Aws::Utils::DateTime& value) { SetAcceptanceTime(value); return *this;}
    inline DescribeAgreementResult& WithAcceptanceTime(Aws::Utils::DateTime&& value) { SetAcceptanceTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the party accepting the agreement terms. This is commonly the
     * buyer for <code>PurchaseAgreement</code>.</p>
     */
    inline const Acceptor& GetAcceptor() const{ return m_acceptor; }
    inline void SetAcceptor(const Acceptor& value) { m_acceptor = value; }
    inline void SetAcceptor(Acceptor&& value) { m_acceptor = std::move(value); }
    inline DescribeAgreementResult& WithAcceptor(const Acceptor& value) { SetAcceptor(value); return *this;}
    inline DescribeAgreementResult& WithAcceptor(Acceptor&& value) { SetAcceptor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline const Aws::String& GetAgreementId() const{ return m_agreementId; }
    inline void SetAgreementId(const Aws::String& value) { m_agreementId = value; }
    inline void SetAgreementId(Aws::String&& value) { m_agreementId = std::move(value); }
    inline void SetAgreementId(const char* value) { m_agreementId.assign(value); }
    inline DescribeAgreementResult& WithAgreementId(const Aws::String& value) { SetAgreementId(value); return *this;}
    inline DescribeAgreementResult& WithAgreementId(Aws::String&& value) { SetAgreementId(std::move(value)); return *this;}
    inline DescribeAgreementResult& WithAgreementId(const char* value) { SetAgreementId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of agreement. Values are <code>PurchaseAgreement</code> or
     * <code>VendorInsightsAgreement</code>.</p>
     */
    inline const Aws::String& GetAgreementType() const{ return m_agreementType; }
    inline void SetAgreementType(const Aws::String& value) { m_agreementType = value; }
    inline void SetAgreementType(Aws::String&& value) { m_agreementType = std::move(value); }
    inline void SetAgreementType(const char* value) { m_agreementType.assign(value); }
    inline DescribeAgreementResult& WithAgreementType(const Aws::String& value) { SetAgreementType(value); return *this;}
    inline DescribeAgreementResult& WithAgreementType(Aws::String&& value) { SetAgreementType(std::move(value)); return *this;}
    inline DescribeAgreementResult& WithAgreementType(const char* value) { SetAgreementType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the agreement ends. The field is <code>null</code> for
     * pay-as-you-go agreements, which don’t have end dates.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }
    inline DescribeAgreementResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline DescribeAgreementResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated cost of the agreement.</p>
     */
    inline const EstimatedCharges& GetEstimatedCharges() const{ return m_estimatedCharges; }
    inline void SetEstimatedCharges(const EstimatedCharges& value) { m_estimatedCharges = value; }
    inline void SetEstimatedCharges(EstimatedCharges&& value) { m_estimatedCharges = std::move(value); }
    inline DescribeAgreementResult& WithEstimatedCharges(const EstimatedCharges& value) { SetEstimatedCharges(value); return *this;}
    inline DescribeAgreementResult& WithEstimatedCharges(EstimatedCharges&& value) { SetEstimatedCharges(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the proposal received from the proposer.</p>
     */
    inline const ProposalSummary& GetProposalSummary() const{ return m_proposalSummary; }
    inline void SetProposalSummary(const ProposalSummary& value) { m_proposalSummary = value; }
    inline void SetProposalSummary(ProposalSummary&& value) { m_proposalSummary = std::move(value); }
    inline DescribeAgreementResult& WithProposalSummary(const ProposalSummary& value) { SetProposalSummary(value); return *this;}
    inline DescribeAgreementResult& WithProposalSummary(ProposalSummary&& value) { SetProposalSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the party proposing the agreement terms. This is commonly the
     * seller for <code>PurchaseAgreement</code>.</p>
     */
    inline const Proposer& GetProposer() const{ return m_proposer; }
    inline void SetProposer(const Proposer& value) { m_proposer = value; }
    inline void SetProposer(Proposer&& value) { m_proposer = std::move(value); }
    inline DescribeAgreementResult& WithProposer(const Proposer& value) { SetProposer(value); return *this;}
    inline DescribeAgreementResult& WithProposer(Proposer&& value) { SetProposer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the agreement starts.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline DescribeAgreementResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline DescribeAgreementResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the agreement.</p> <p>Statuses include:</p> <ul> <li>
     * <p> <code>ACTIVE</code> – The terms of the agreement are active.</p> </li> <li>
     * <p> <code>ARCHIVED</code> – The agreement ended without a specified reason.</p>
     * </li> <li> <p> <code>CANCELLED</code> – The acceptor ended the agreement before
     * the defined end date.</p> </li> <li> <p> <code>EXPIRED</code> – The agreement
     * ended on the defined end date.</p> </li> <li> <p> <code>RENEWED</code> – The
     * agreement was renewed into a new agreement (for example, an auto-renewal).</p>
     * </li> <li> <p> <code>REPLACED</code> – The agreement was replaced using an
     * agreement replacement offer.</p> </li> <li> <p> <code>ROLLED_BACK</code> (Only
     * applicable to inactive agreement revisions) – The agreement revision has been
     * rolled back because of an error. An earlier revision is now active.</p> </li>
     * <li> <p> <code>SUPERCEDED</code> (Only applicable to inactive agreement
     * revisions) – The agreement revision is no longer active and another agreement
     * revision is now active.</p> </li> <li> <p> <code>TERMINATED</code> – The
     * agreement ended before the defined end date because of an AWS termination (for
     * example, a payment failure).</p> </li> </ul>
     */
    inline const AgreementStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const AgreementStatus& value) { m_status = value; }
    inline void SetStatus(AgreementStatus&& value) { m_status = std::move(value); }
    inline DescribeAgreementResult& WithStatus(const AgreementStatus& value) { SetStatus(value); return *this;}
    inline DescribeAgreementResult& WithStatus(AgreementStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAgreementResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAgreementResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAgreementResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_acceptanceTime;

    Acceptor m_acceptor;

    Aws::String m_agreementId;

    Aws::String m_agreementType;

    Aws::Utils::DateTime m_endTime;

    EstimatedCharges m_estimatedCharges;

    ProposalSummary m_proposalSummary;

    Proposer m_proposer;

    Aws::Utils::DateTime m_startTime;

    AgreementStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
