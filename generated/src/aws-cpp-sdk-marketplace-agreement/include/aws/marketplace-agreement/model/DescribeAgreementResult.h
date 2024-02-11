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


    /**
     * <p>The date and time the offer was accepted or the agreement was created.</p>
     *  <p> <code>AcceptanceTime</code> and <code>StartTime</code> can differ for
     * future dated agreements (FDAs).</p> 
     */
    inline const Aws::Utils::DateTime& GetAcceptanceTime() const{ return m_acceptanceTime; }

    /**
     * <p>The date and time the offer was accepted or the agreement was created.</p>
     *  <p> <code>AcceptanceTime</code> and <code>StartTime</code> can differ for
     * future dated agreements (FDAs).</p> 
     */
    inline void SetAcceptanceTime(const Aws::Utils::DateTime& value) { m_acceptanceTime = value; }

    /**
     * <p>The date and time the offer was accepted or the agreement was created.</p>
     *  <p> <code>AcceptanceTime</code> and <code>StartTime</code> can differ for
     * future dated agreements (FDAs).</p> 
     */
    inline void SetAcceptanceTime(Aws::Utils::DateTime&& value) { m_acceptanceTime = std::move(value); }

    /**
     * <p>The date and time the offer was accepted or the agreement was created.</p>
     *  <p> <code>AcceptanceTime</code> and <code>StartTime</code> can differ for
     * future dated agreements (FDAs).</p> 
     */
    inline DescribeAgreementResult& WithAcceptanceTime(const Aws::Utils::DateTime& value) { SetAcceptanceTime(value); return *this;}

    /**
     * <p>The date and time the offer was accepted or the agreement was created.</p>
     *  <p> <code>AcceptanceTime</code> and <code>StartTime</code> can differ for
     * future dated agreements (FDAs).</p> 
     */
    inline DescribeAgreementResult& WithAcceptanceTime(Aws::Utils::DateTime&& value) { SetAcceptanceTime(std::move(value)); return *this;}


    /**
     * <p>The details of the party accepting the agreement terms. This is commonly the
     * buyer for <code>PurchaseAgreement</code>.</p>
     */
    inline const Acceptor& GetAcceptor() const{ return m_acceptor; }

    /**
     * <p>The details of the party accepting the agreement terms. This is commonly the
     * buyer for <code>PurchaseAgreement</code>.</p>
     */
    inline void SetAcceptor(const Acceptor& value) { m_acceptor = value; }

    /**
     * <p>The details of the party accepting the agreement terms. This is commonly the
     * buyer for <code>PurchaseAgreement</code>.</p>
     */
    inline void SetAcceptor(Acceptor&& value) { m_acceptor = std::move(value); }

    /**
     * <p>The details of the party accepting the agreement terms. This is commonly the
     * buyer for <code>PurchaseAgreement</code>.</p>
     */
    inline DescribeAgreementResult& WithAcceptor(const Acceptor& value) { SetAcceptor(value); return *this;}

    /**
     * <p>The details of the party accepting the agreement terms. This is commonly the
     * buyer for <code>PurchaseAgreement</code>.</p>
     */
    inline DescribeAgreementResult& WithAcceptor(Acceptor&& value) { SetAcceptor(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline const Aws::String& GetAgreementId() const{ return m_agreementId; }

    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline void SetAgreementId(const Aws::String& value) { m_agreementId = value; }

    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline void SetAgreementId(Aws::String&& value) { m_agreementId = std::move(value); }

    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline void SetAgreementId(const char* value) { m_agreementId.assign(value); }

    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline DescribeAgreementResult& WithAgreementId(const Aws::String& value) { SetAgreementId(value); return *this;}

    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline DescribeAgreementResult& WithAgreementId(Aws::String&& value) { SetAgreementId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline DescribeAgreementResult& WithAgreementId(const char* value) { SetAgreementId(value); return *this;}


    /**
     * <p>The type of agreement. Values are <code>PurchaseAgreement</code> or
     * <code>VendorInsightsAgreement</code>.</p>
     */
    inline const Aws::String& GetAgreementType() const{ return m_agreementType; }

    /**
     * <p>The type of agreement. Values are <code>PurchaseAgreement</code> or
     * <code>VendorInsightsAgreement</code>.</p>
     */
    inline void SetAgreementType(const Aws::String& value) { m_agreementType = value; }

    /**
     * <p>The type of agreement. Values are <code>PurchaseAgreement</code> or
     * <code>VendorInsightsAgreement</code>.</p>
     */
    inline void SetAgreementType(Aws::String&& value) { m_agreementType = std::move(value); }

    /**
     * <p>The type of agreement. Values are <code>PurchaseAgreement</code> or
     * <code>VendorInsightsAgreement</code>.</p>
     */
    inline void SetAgreementType(const char* value) { m_agreementType.assign(value); }

    /**
     * <p>The type of agreement. Values are <code>PurchaseAgreement</code> or
     * <code>VendorInsightsAgreement</code>.</p>
     */
    inline DescribeAgreementResult& WithAgreementType(const Aws::String& value) { SetAgreementType(value); return *this;}

    /**
     * <p>The type of agreement. Values are <code>PurchaseAgreement</code> or
     * <code>VendorInsightsAgreement</code>.</p>
     */
    inline DescribeAgreementResult& WithAgreementType(Aws::String&& value) { SetAgreementType(std::move(value)); return *this;}

    /**
     * <p>The type of agreement. Values are <code>PurchaseAgreement</code> or
     * <code>VendorInsightsAgreement</code>.</p>
     */
    inline DescribeAgreementResult& WithAgreementType(const char* value) { SetAgreementType(value); return *this;}


    /**
     * <p>The date and time when the agreement ends. The field is <code>null</code> for
     * pay-as-you-go agreements, which don’t have end dates.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The date and time when the agreement ends. The field is <code>null</code> for
     * pay-as-you-go agreements, which don’t have end dates.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }

    /**
     * <p>The date and time when the agreement ends. The field is <code>null</code> for
     * pay-as-you-go agreements, which don’t have end dates.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }

    /**
     * <p>The date and time when the agreement ends. The field is <code>null</code> for
     * pay-as-you-go agreements, which don’t have end dates.</p>
     */
    inline DescribeAgreementResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The date and time when the agreement ends. The field is <code>null</code> for
     * pay-as-you-go agreements, which don’t have end dates.</p>
     */
    inline DescribeAgreementResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The estimated cost of the agreement.</p>
     */
    inline const EstimatedCharges& GetEstimatedCharges() const{ return m_estimatedCharges; }

    /**
     * <p>The estimated cost of the agreement.</p>
     */
    inline void SetEstimatedCharges(const EstimatedCharges& value) { m_estimatedCharges = value; }

    /**
     * <p>The estimated cost of the agreement.</p>
     */
    inline void SetEstimatedCharges(EstimatedCharges&& value) { m_estimatedCharges = std::move(value); }

    /**
     * <p>The estimated cost of the agreement.</p>
     */
    inline DescribeAgreementResult& WithEstimatedCharges(const EstimatedCharges& value) { SetEstimatedCharges(value); return *this;}

    /**
     * <p>The estimated cost of the agreement.</p>
     */
    inline DescribeAgreementResult& WithEstimatedCharges(EstimatedCharges&& value) { SetEstimatedCharges(std::move(value)); return *this;}


    /**
     * <p>A summary of the proposal received from the proposer.</p>
     */
    inline const ProposalSummary& GetProposalSummary() const{ return m_proposalSummary; }

    /**
     * <p>A summary of the proposal received from the proposer.</p>
     */
    inline void SetProposalSummary(const ProposalSummary& value) { m_proposalSummary = value; }

    /**
     * <p>A summary of the proposal received from the proposer.</p>
     */
    inline void SetProposalSummary(ProposalSummary&& value) { m_proposalSummary = std::move(value); }

    /**
     * <p>A summary of the proposal received from the proposer.</p>
     */
    inline DescribeAgreementResult& WithProposalSummary(const ProposalSummary& value) { SetProposalSummary(value); return *this;}

    /**
     * <p>A summary of the proposal received from the proposer.</p>
     */
    inline DescribeAgreementResult& WithProposalSummary(ProposalSummary&& value) { SetProposalSummary(std::move(value)); return *this;}


    /**
     * <p>The details of the party proposing the agreement terms. This is commonly the
     * seller for <code>PurchaseAgreement</code>.</p>
     */
    inline const Proposer& GetProposer() const{ return m_proposer; }

    /**
     * <p>The details of the party proposing the agreement terms. This is commonly the
     * seller for <code>PurchaseAgreement</code>.</p>
     */
    inline void SetProposer(const Proposer& value) { m_proposer = value; }

    /**
     * <p>The details of the party proposing the agreement terms. This is commonly the
     * seller for <code>PurchaseAgreement</code>.</p>
     */
    inline void SetProposer(Proposer&& value) { m_proposer = std::move(value); }

    /**
     * <p>The details of the party proposing the agreement terms. This is commonly the
     * seller for <code>PurchaseAgreement</code>.</p>
     */
    inline DescribeAgreementResult& WithProposer(const Proposer& value) { SetProposer(value); return *this;}

    /**
     * <p>The details of the party proposing the agreement terms. This is commonly the
     * seller for <code>PurchaseAgreement</code>.</p>
     */
    inline DescribeAgreementResult& WithProposer(Proposer&& value) { SetProposer(std::move(value)); return *this;}


    /**
     * <p>The date and time when the agreement starts.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The date and time when the agreement starts.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p>The date and time when the agreement starts.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p>The date and time when the agreement starts.</p>
     */
    inline DescribeAgreementResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The date and time when the agreement starts.</p>
     */
    inline DescribeAgreementResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


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
    inline void SetStatus(const AgreementStatus& value) { m_status = value; }

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
    inline void SetStatus(AgreementStatus&& value) { m_status = std::move(value); }

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
    inline DescribeAgreementResult& WithStatus(const AgreementStatus& value) { SetStatus(value); return *this;}

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
    inline DescribeAgreementResult& WithStatus(AgreementStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeAgreementResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeAgreementResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeAgreementResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
