/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/marketplace-agreement/model/Acceptor.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/model/ProposalSummary.h>
#include <aws/marketplace-agreement/model/Proposer.h>
#include <aws/marketplace-agreement/model/AgreementStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AgreementService
{
namespace Model
{

  /**
   * <p>A summary of the agreement, including top-level attributes (for example, the
   * agreement ID, version, proposer, and acceptor).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/AgreementViewSummary">AWS
   * API Reference</a></p>
   */
  class AgreementViewSummary
  {
  public:
    AWS_AGREEMENTSERVICE_API AgreementViewSummary() = default;
    AWS_AGREEMENTSERVICE_API AgreementViewSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API AgreementViewSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time that the agreement was accepted.</p>
     */
    inline const Aws::Utils::DateTime& GetAcceptanceTime() const { return m_acceptanceTime; }
    inline bool AcceptanceTimeHasBeenSet() const { return m_acceptanceTimeHasBeenSet; }
    template<typename AcceptanceTimeT = Aws::Utils::DateTime>
    void SetAcceptanceTime(AcceptanceTimeT&& value) { m_acceptanceTimeHasBeenSet = true; m_acceptanceTime = std::forward<AcceptanceTimeT>(value); }
    template<typename AcceptanceTimeT = Aws::Utils::DateTime>
    AgreementViewSummary& WithAcceptanceTime(AcceptanceTimeT&& value) { SetAcceptanceTime(std::forward<AcceptanceTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the party accepting the agreement terms. This is commonly the
     * buyer for <code>PurchaseAgreement.</code> </p>
     */
    inline const Acceptor& GetAcceptor() const { return m_acceptor; }
    inline bool AcceptorHasBeenSet() const { return m_acceptorHasBeenSet; }
    template<typename AcceptorT = Acceptor>
    void SetAcceptor(AcceptorT&& value) { m_acceptorHasBeenSet = true; m_acceptor = std::forward<AcceptorT>(value); }
    template<typename AcceptorT = Acceptor>
    AgreementViewSummary& WithAcceptor(AcceptorT&& value) { SetAcceptor(std::forward<AcceptorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline const Aws::String& GetAgreementId() const { return m_agreementId; }
    inline bool AgreementIdHasBeenSet() const { return m_agreementIdHasBeenSet; }
    template<typename AgreementIdT = Aws::String>
    void SetAgreementId(AgreementIdT&& value) { m_agreementIdHasBeenSet = true; m_agreementId = std::forward<AgreementIdT>(value); }
    template<typename AgreementIdT = Aws::String>
    AgreementViewSummary& WithAgreementId(AgreementIdT&& value) { SetAgreementId(std::forward<AgreementIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of agreement. Values are <code>PurchaseAgreement</code> or
     * <code>VendorInsightsAgreement</code>.</p>
     */
    inline const Aws::String& GetAgreementType() const { return m_agreementType; }
    inline bool AgreementTypeHasBeenSet() const { return m_agreementTypeHasBeenSet; }
    template<typename AgreementTypeT = Aws::String>
    void SetAgreementType(AgreementTypeT&& value) { m_agreementTypeHasBeenSet = true; m_agreementType = std::forward<AgreementTypeT>(value); }
    template<typename AgreementTypeT = Aws::String>
    AgreementViewSummary& WithAgreementType(AgreementTypeT&& value) { SetAgreementType(std::forward<AgreementTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the agreement ends. The field is <code>null</code> for
     * pay-as-you-go agreements, which don’t have end dates.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    AgreementViewSummary& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the proposal</p>
     */
    inline const ProposalSummary& GetProposalSummary() const { return m_proposalSummary; }
    inline bool ProposalSummaryHasBeenSet() const { return m_proposalSummaryHasBeenSet; }
    template<typename ProposalSummaryT = ProposalSummary>
    void SetProposalSummary(ProposalSummaryT&& value) { m_proposalSummaryHasBeenSet = true; m_proposalSummary = std::forward<ProposalSummaryT>(value); }
    template<typename ProposalSummaryT = ProposalSummary>
    AgreementViewSummary& WithProposalSummary(ProposalSummaryT&& value) { SetProposalSummary(std::forward<ProposalSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the party proposing the agreement terms, most commonly the seller
     * for <code>PurchaseAgreement</code>.</p>
     */
    inline const Proposer& GetProposer() const { return m_proposer; }
    inline bool ProposerHasBeenSet() const { return m_proposerHasBeenSet; }
    template<typename ProposerT = Proposer>
    void SetProposer(ProposerT&& value) { m_proposerHasBeenSet = true; m_proposer = std::forward<ProposerT>(value); }
    template<typename ProposerT = Proposer>
    AgreementViewSummary& WithProposer(ProposerT&& value) { SetProposer(std::forward<ProposerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the agreement starts.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    AgreementViewSummary& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the agreement. </p>
     */
    inline AgreementStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AgreementStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AgreementViewSummary& WithStatus(AgreementStatus value) { SetStatus(value); return *this;}
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

    ProposalSummary m_proposalSummary;
    bool m_proposalSummaryHasBeenSet = false;

    Proposer m_proposer;
    bool m_proposerHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    AgreementStatus m_status{AgreementStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
