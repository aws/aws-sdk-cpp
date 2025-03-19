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
    AWS_AGREEMENTSERVICE_API DescribeAgreementResult() = default;
    AWS_AGREEMENTSERVICE_API DescribeAgreementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AGREEMENTSERVICE_API DescribeAgreementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The date and time the offer was accepted or the agreement was created.</p>
     *  <p> <code>AcceptanceTime</code> and <code>StartTime</code> can differ for
     * future dated agreements (FDAs).</p> 
     */
    inline const Aws::Utils::DateTime& GetAcceptanceTime() const { return m_acceptanceTime; }
    template<typename AcceptanceTimeT = Aws::Utils::DateTime>
    void SetAcceptanceTime(AcceptanceTimeT&& value) { m_acceptanceTimeHasBeenSet = true; m_acceptanceTime = std::forward<AcceptanceTimeT>(value); }
    template<typename AcceptanceTimeT = Aws::Utils::DateTime>
    DescribeAgreementResult& WithAcceptanceTime(AcceptanceTimeT&& value) { SetAcceptanceTime(std::forward<AcceptanceTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the party accepting the agreement terms. This is commonly the
     * buyer for <code>PurchaseAgreement</code>.</p>
     */
    inline const Acceptor& GetAcceptor() const { return m_acceptor; }
    template<typename AcceptorT = Acceptor>
    void SetAcceptor(AcceptorT&& value) { m_acceptorHasBeenSet = true; m_acceptor = std::forward<AcceptorT>(value); }
    template<typename AcceptorT = Acceptor>
    DescribeAgreementResult& WithAcceptor(AcceptorT&& value) { SetAcceptor(std::forward<AcceptorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline const Aws::String& GetAgreementId() const { return m_agreementId; }
    template<typename AgreementIdT = Aws::String>
    void SetAgreementId(AgreementIdT&& value) { m_agreementIdHasBeenSet = true; m_agreementId = std::forward<AgreementIdT>(value); }
    template<typename AgreementIdT = Aws::String>
    DescribeAgreementResult& WithAgreementId(AgreementIdT&& value) { SetAgreementId(std::forward<AgreementIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of agreement. Values are <code>PurchaseAgreement</code> or
     * <code>VendorInsightsAgreement</code>.</p>
     */
    inline const Aws::String& GetAgreementType() const { return m_agreementType; }
    template<typename AgreementTypeT = Aws::String>
    void SetAgreementType(AgreementTypeT&& value) { m_agreementTypeHasBeenSet = true; m_agreementType = std::forward<AgreementTypeT>(value); }
    template<typename AgreementTypeT = Aws::String>
    DescribeAgreementResult& WithAgreementType(AgreementTypeT&& value) { SetAgreementType(std::forward<AgreementTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the agreement ends. The field is <code>null</code> for
     * pay-as-you-go agreements, which don’t have end dates.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    DescribeAgreementResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated cost of the agreement.</p>
     */
    inline const EstimatedCharges& GetEstimatedCharges() const { return m_estimatedCharges; }
    template<typename EstimatedChargesT = EstimatedCharges>
    void SetEstimatedCharges(EstimatedChargesT&& value) { m_estimatedChargesHasBeenSet = true; m_estimatedCharges = std::forward<EstimatedChargesT>(value); }
    template<typename EstimatedChargesT = EstimatedCharges>
    DescribeAgreementResult& WithEstimatedCharges(EstimatedChargesT&& value) { SetEstimatedCharges(std::forward<EstimatedChargesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the proposal received from the proposer.</p>
     */
    inline const ProposalSummary& GetProposalSummary() const { return m_proposalSummary; }
    template<typename ProposalSummaryT = ProposalSummary>
    void SetProposalSummary(ProposalSummaryT&& value) { m_proposalSummaryHasBeenSet = true; m_proposalSummary = std::forward<ProposalSummaryT>(value); }
    template<typename ProposalSummaryT = ProposalSummary>
    DescribeAgreementResult& WithProposalSummary(ProposalSummaryT&& value) { SetProposalSummary(std::forward<ProposalSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the party proposing the agreement terms. This is commonly the
     * seller for <code>PurchaseAgreement</code>.</p>
     */
    inline const Proposer& GetProposer() const { return m_proposer; }
    template<typename ProposerT = Proposer>
    void SetProposer(ProposerT&& value) { m_proposerHasBeenSet = true; m_proposer = std::forward<ProposerT>(value); }
    template<typename ProposerT = Proposer>
    DescribeAgreementResult& WithProposer(ProposerT&& value) { SetProposer(std::forward<ProposerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the agreement starts.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    DescribeAgreementResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
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
    inline AgreementStatus GetStatus() const { return m_status; }
    inline void SetStatus(AgreementStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeAgreementResult& WithStatus(AgreementStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAgreementResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_acceptanceTime{};
    bool m_acceptanceTimeHasBeenSet = false;

    Acceptor m_acceptor;
    bool m_acceptorHasBeenSet = false;

    Aws::String m_agreementId;
    bool m_agreementIdHasBeenSet = false;

    Aws::String m_agreementType;
    bool m_agreementTypeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    EstimatedCharges m_estimatedCharges;
    bool m_estimatedChargesHasBeenSet = false;

    ProposalSummary m_proposalSummary;
    bool m_proposalSummaryHasBeenSet = false;

    Proposer m_proposer;
    bool m_proposerHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    AgreementStatus m_status{AgreementStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
