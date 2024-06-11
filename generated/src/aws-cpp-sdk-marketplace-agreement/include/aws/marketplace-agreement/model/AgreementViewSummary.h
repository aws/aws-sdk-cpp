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
    AWS_AGREEMENTSERVICE_API AgreementViewSummary();
    AWS_AGREEMENTSERVICE_API AgreementViewSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API AgreementViewSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time that the agreement was accepted.</p>
     */
    inline const Aws::Utils::DateTime& GetAcceptanceTime() const{ return m_acceptanceTime; }
    inline bool AcceptanceTimeHasBeenSet() const { return m_acceptanceTimeHasBeenSet; }
    inline void SetAcceptanceTime(const Aws::Utils::DateTime& value) { m_acceptanceTimeHasBeenSet = true; m_acceptanceTime = value; }
    inline void SetAcceptanceTime(Aws::Utils::DateTime&& value) { m_acceptanceTimeHasBeenSet = true; m_acceptanceTime = std::move(value); }
    inline AgreementViewSummary& WithAcceptanceTime(const Aws::Utils::DateTime& value) { SetAcceptanceTime(value); return *this;}
    inline AgreementViewSummary& WithAcceptanceTime(Aws::Utils::DateTime&& value) { SetAcceptanceTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the party accepting the agreement terms. This is commonly the
     * buyer for <code>PurchaseAgreement.</code> </p>
     */
    inline const Acceptor& GetAcceptor() const{ return m_acceptor; }
    inline bool AcceptorHasBeenSet() const { return m_acceptorHasBeenSet; }
    inline void SetAcceptor(const Acceptor& value) { m_acceptorHasBeenSet = true; m_acceptor = value; }
    inline void SetAcceptor(Acceptor&& value) { m_acceptorHasBeenSet = true; m_acceptor = std::move(value); }
    inline AgreementViewSummary& WithAcceptor(const Acceptor& value) { SetAcceptor(value); return *this;}
    inline AgreementViewSummary& WithAcceptor(Acceptor&& value) { SetAcceptor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline const Aws::String& GetAgreementId() const{ return m_agreementId; }
    inline bool AgreementIdHasBeenSet() const { return m_agreementIdHasBeenSet; }
    inline void SetAgreementId(const Aws::String& value) { m_agreementIdHasBeenSet = true; m_agreementId = value; }
    inline void SetAgreementId(Aws::String&& value) { m_agreementIdHasBeenSet = true; m_agreementId = std::move(value); }
    inline void SetAgreementId(const char* value) { m_agreementIdHasBeenSet = true; m_agreementId.assign(value); }
    inline AgreementViewSummary& WithAgreementId(const Aws::String& value) { SetAgreementId(value); return *this;}
    inline AgreementViewSummary& WithAgreementId(Aws::String&& value) { SetAgreementId(std::move(value)); return *this;}
    inline AgreementViewSummary& WithAgreementId(const char* value) { SetAgreementId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of agreement. Values are <code>PurchaseAgreement</code> or
     * <code>VendorInsightsAgreement</code>.</p>
     */
    inline const Aws::String& GetAgreementType() const{ return m_agreementType; }
    inline bool AgreementTypeHasBeenSet() const { return m_agreementTypeHasBeenSet; }
    inline void SetAgreementType(const Aws::String& value) { m_agreementTypeHasBeenSet = true; m_agreementType = value; }
    inline void SetAgreementType(Aws::String&& value) { m_agreementTypeHasBeenSet = true; m_agreementType = std::move(value); }
    inline void SetAgreementType(const char* value) { m_agreementTypeHasBeenSet = true; m_agreementType.assign(value); }
    inline AgreementViewSummary& WithAgreementType(const Aws::String& value) { SetAgreementType(value); return *this;}
    inline AgreementViewSummary& WithAgreementType(Aws::String&& value) { SetAgreementType(std::move(value)); return *this;}
    inline AgreementViewSummary& WithAgreementType(const char* value) { SetAgreementType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the agreement ends. The field is <code>null</code> for
     * pay-as-you-go agreements, which don’t have end dates.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline AgreementViewSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline AgreementViewSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the proposal</p>
     */
    inline const ProposalSummary& GetProposalSummary() const{ return m_proposalSummary; }
    inline bool ProposalSummaryHasBeenSet() const { return m_proposalSummaryHasBeenSet; }
    inline void SetProposalSummary(const ProposalSummary& value) { m_proposalSummaryHasBeenSet = true; m_proposalSummary = value; }
    inline void SetProposalSummary(ProposalSummary&& value) { m_proposalSummaryHasBeenSet = true; m_proposalSummary = std::move(value); }
    inline AgreementViewSummary& WithProposalSummary(const ProposalSummary& value) { SetProposalSummary(value); return *this;}
    inline AgreementViewSummary& WithProposalSummary(ProposalSummary&& value) { SetProposalSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the party proposing the agreement terms, most commonly the seller
     * for <code>PurchaseAgreement</code>.</p>
     */
    inline const Proposer& GetProposer() const{ return m_proposer; }
    inline bool ProposerHasBeenSet() const { return m_proposerHasBeenSet; }
    inline void SetProposer(const Proposer& value) { m_proposerHasBeenSet = true; m_proposer = value; }
    inline void SetProposer(Proposer&& value) { m_proposerHasBeenSet = true; m_proposer = std::move(value); }
    inline AgreementViewSummary& WithProposer(const Proposer& value) { SetProposer(value); return *this;}
    inline AgreementViewSummary& WithProposer(Proposer&& value) { SetProposer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the agreement starts.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline AgreementViewSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline AgreementViewSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the agreement. </p>
     */
    inline const AgreementStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AgreementStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AgreementStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AgreementViewSummary& WithStatus(const AgreementStatus& value) { SetStatus(value); return *this;}
    inline AgreementViewSummary& WithStatus(AgreementStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_acceptanceTime;
    bool m_acceptanceTimeHasBeenSet = false;

    Acceptor m_acceptor;
    bool m_acceptorHasBeenSet = false;

    Aws::String m_agreementId;
    bool m_agreementIdHasBeenSet = false;

    Aws::String m_agreementType;
    bool m_agreementTypeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    ProposalSummary m_proposalSummary;
    bool m_proposalSummaryHasBeenSet = false;

    Proposer m_proposer;
    bool m_proposerHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    AgreementStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
