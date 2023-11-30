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


    /**
     * <p>The date and time that the agreement was accepted.</p>
     */
    inline const Aws::Utils::DateTime& GetAcceptanceTime() const{ return m_acceptanceTime; }

    /**
     * <p>The date and time that the agreement was accepted.</p>
     */
    inline bool AcceptanceTimeHasBeenSet() const { return m_acceptanceTimeHasBeenSet; }

    /**
     * <p>The date and time that the agreement was accepted.</p>
     */
    inline void SetAcceptanceTime(const Aws::Utils::DateTime& value) { m_acceptanceTimeHasBeenSet = true; m_acceptanceTime = value; }

    /**
     * <p>The date and time that the agreement was accepted.</p>
     */
    inline void SetAcceptanceTime(Aws::Utils::DateTime&& value) { m_acceptanceTimeHasBeenSet = true; m_acceptanceTime = std::move(value); }

    /**
     * <p>The date and time that the agreement was accepted.</p>
     */
    inline AgreementViewSummary& WithAcceptanceTime(const Aws::Utils::DateTime& value) { SetAcceptanceTime(value); return *this;}

    /**
     * <p>The date and time that the agreement was accepted.</p>
     */
    inline AgreementViewSummary& WithAcceptanceTime(Aws::Utils::DateTime&& value) { SetAcceptanceTime(std::move(value)); return *this;}


    /**
     * <p>Details of the party accepting the agreement terms. This is commonly the
     * buyer for <code>PurchaseAgreement.</code> </p>
     */
    inline const Acceptor& GetAcceptor() const{ return m_acceptor; }

    /**
     * <p>Details of the party accepting the agreement terms. This is commonly the
     * buyer for <code>PurchaseAgreement.</code> </p>
     */
    inline bool AcceptorHasBeenSet() const { return m_acceptorHasBeenSet; }

    /**
     * <p>Details of the party accepting the agreement terms. This is commonly the
     * buyer for <code>PurchaseAgreement.</code> </p>
     */
    inline void SetAcceptor(const Acceptor& value) { m_acceptorHasBeenSet = true; m_acceptor = value; }

    /**
     * <p>Details of the party accepting the agreement terms. This is commonly the
     * buyer for <code>PurchaseAgreement.</code> </p>
     */
    inline void SetAcceptor(Acceptor&& value) { m_acceptorHasBeenSet = true; m_acceptor = std::move(value); }

    /**
     * <p>Details of the party accepting the agreement terms. This is commonly the
     * buyer for <code>PurchaseAgreement.</code> </p>
     */
    inline AgreementViewSummary& WithAcceptor(const Acceptor& value) { SetAcceptor(value); return *this;}

    /**
     * <p>Details of the party accepting the agreement terms. This is commonly the
     * buyer for <code>PurchaseAgreement.</code> </p>
     */
    inline AgreementViewSummary& WithAcceptor(Acceptor&& value) { SetAcceptor(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline const Aws::String& GetAgreementId() const{ return m_agreementId; }

    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline bool AgreementIdHasBeenSet() const { return m_agreementIdHasBeenSet; }

    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline void SetAgreementId(const Aws::String& value) { m_agreementIdHasBeenSet = true; m_agreementId = value; }

    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline void SetAgreementId(Aws::String&& value) { m_agreementIdHasBeenSet = true; m_agreementId = std::move(value); }

    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline void SetAgreementId(const char* value) { m_agreementIdHasBeenSet = true; m_agreementId.assign(value); }

    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline AgreementViewSummary& WithAgreementId(const Aws::String& value) { SetAgreementId(value); return *this;}

    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline AgreementViewSummary& WithAgreementId(Aws::String&& value) { SetAgreementId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline AgreementViewSummary& WithAgreementId(const char* value) { SetAgreementId(value); return *this;}


    /**
     * <p>The type of agreement. Values are <code>PurchaseAgreement</code> or
     * <code>VendorInsightsAgreement</code>.</p>
     */
    inline const Aws::String& GetAgreementType() const{ return m_agreementType; }

    /**
     * <p>The type of agreement. Values are <code>PurchaseAgreement</code> or
     * <code>VendorInsightsAgreement</code>.</p>
     */
    inline bool AgreementTypeHasBeenSet() const { return m_agreementTypeHasBeenSet; }

    /**
     * <p>The type of agreement. Values are <code>PurchaseAgreement</code> or
     * <code>VendorInsightsAgreement</code>.</p>
     */
    inline void SetAgreementType(const Aws::String& value) { m_agreementTypeHasBeenSet = true; m_agreementType = value; }

    /**
     * <p>The type of agreement. Values are <code>PurchaseAgreement</code> or
     * <code>VendorInsightsAgreement</code>.</p>
     */
    inline void SetAgreementType(Aws::String&& value) { m_agreementTypeHasBeenSet = true; m_agreementType = std::move(value); }

    /**
     * <p>The type of agreement. Values are <code>PurchaseAgreement</code> or
     * <code>VendorInsightsAgreement</code>.</p>
     */
    inline void SetAgreementType(const char* value) { m_agreementTypeHasBeenSet = true; m_agreementType.assign(value); }

    /**
     * <p>The type of agreement. Values are <code>PurchaseAgreement</code> or
     * <code>VendorInsightsAgreement</code>.</p>
     */
    inline AgreementViewSummary& WithAgreementType(const Aws::String& value) { SetAgreementType(value); return *this;}

    /**
     * <p>The type of agreement. Values are <code>PurchaseAgreement</code> or
     * <code>VendorInsightsAgreement</code>.</p>
     */
    inline AgreementViewSummary& WithAgreementType(Aws::String&& value) { SetAgreementType(std::move(value)); return *this;}

    /**
     * <p>The type of agreement. Values are <code>PurchaseAgreement</code> or
     * <code>VendorInsightsAgreement</code>.</p>
     */
    inline AgreementViewSummary& WithAgreementType(const char* value) { SetAgreementType(value); return *this;}


    /**
     * <p>The date and time when the agreement ends. The field is <code>null</code> for
     * pay-as-you-go agreements, which don’t have end dates.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The date and time when the agreement ends. The field is <code>null</code> for
     * pay-as-you-go agreements, which don’t have end dates.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The date and time when the agreement ends. The field is <code>null</code> for
     * pay-as-you-go agreements, which don’t have end dates.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The date and time when the agreement ends. The field is <code>null</code> for
     * pay-as-you-go agreements, which don’t have end dates.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The date and time when the agreement ends. The field is <code>null</code> for
     * pay-as-you-go agreements, which don’t have end dates.</p>
     */
    inline AgreementViewSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The date and time when the agreement ends. The field is <code>null</code> for
     * pay-as-you-go agreements, which don’t have end dates.</p>
     */
    inline AgreementViewSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>A summary of the proposal</p>
     */
    inline const ProposalSummary& GetProposalSummary() const{ return m_proposalSummary; }

    /**
     * <p>A summary of the proposal</p>
     */
    inline bool ProposalSummaryHasBeenSet() const { return m_proposalSummaryHasBeenSet; }

    /**
     * <p>A summary of the proposal</p>
     */
    inline void SetProposalSummary(const ProposalSummary& value) { m_proposalSummaryHasBeenSet = true; m_proposalSummary = value; }

    /**
     * <p>A summary of the proposal</p>
     */
    inline void SetProposalSummary(ProposalSummary&& value) { m_proposalSummaryHasBeenSet = true; m_proposalSummary = std::move(value); }

    /**
     * <p>A summary of the proposal</p>
     */
    inline AgreementViewSummary& WithProposalSummary(const ProposalSummary& value) { SetProposalSummary(value); return *this;}

    /**
     * <p>A summary of the proposal</p>
     */
    inline AgreementViewSummary& WithProposalSummary(ProposalSummary&& value) { SetProposalSummary(std::move(value)); return *this;}


    /**
     * <p>Details of the party proposing the agreement terms, most commonly the seller
     * for <code>PurchaseAgreement</code>.</p>
     */
    inline const Proposer& GetProposer() const{ return m_proposer; }

    /**
     * <p>Details of the party proposing the agreement terms, most commonly the seller
     * for <code>PurchaseAgreement</code>.</p>
     */
    inline bool ProposerHasBeenSet() const { return m_proposerHasBeenSet; }

    /**
     * <p>Details of the party proposing the agreement terms, most commonly the seller
     * for <code>PurchaseAgreement</code>.</p>
     */
    inline void SetProposer(const Proposer& value) { m_proposerHasBeenSet = true; m_proposer = value; }

    /**
     * <p>Details of the party proposing the agreement terms, most commonly the seller
     * for <code>PurchaseAgreement</code>.</p>
     */
    inline void SetProposer(Proposer&& value) { m_proposerHasBeenSet = true; m_proposer = std::move(value); }

    /**
     * <p>Details of the party proposing the agreement terms, most commonly the seller
     * for <code>PurchaseAgreement</code>.</p>
     */
    inline AgreementViewSummary& WithProposer(const Proposer& value) { SetProposer(value); return *this;}

    /**
     * <p>Details of the party proposing the agreement terms, most commonly the seller
     * for <code>PurchaseAgreement</code>.</p>
     */
    inline AgreementViewSummary& WithProposer(Proposer&& value) { SetProposer(std::move(value)); return *this;}


    /**
     * <p>The date and time when the agreement starts.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The date and time when the agreement starts.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The date and time when the agreement starts.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The date and time when the agreement starts.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The date and time when the agreement starts.</p>
     */
    inline AgreementViewSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The date and time when the agreement starts.</p>
     */
    inline AgreementViewSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The current status of the agreement. </p>
     */
    inline const AgreementStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the agreement. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the agreement. </p>
     */
    inline void SetStatus(const AgreementStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the agreement. </p>
     */
    inline void SetStatus(AgreementStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the agreement. </p>
     */
    inline AgreementViewSummary& WithStatus(const AgreementStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the agreement. </p>
     */
    inline AgreementViewSummary& WithStatus(AgreementStatus&& value) { SetStatus(std::move(value)); return *this;}

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
