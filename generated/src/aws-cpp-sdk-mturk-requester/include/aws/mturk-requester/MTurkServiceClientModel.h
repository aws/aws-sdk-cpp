/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/mturk-requester/MTurkErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/mturk-requester/MTurkEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MTurkClient header */
#include <aws/mturk-requester/model/AcceptQualificationRequestResult.h>
#include <aws/mturk-requester/model/ApproveAssignmentResult.h>
#include <aws/mturk-requester/model/AssociateQualificationWithWorkerResult.h>
#include <aws/mturk-requester/model/CreateAdditionalAssignmentsForHITResult.h>
#include <aws/mturk-requester/model/CreateHITResult.h>
#include <aws/mturk-requester/model/CreateHITTypeResult.h>
#include <aws/mturk-requester/model/CreateHITWithHITTypeResult.h>
#include <aws/mturk-requester/model/CreateQualificationTypeResult.h>
#include <aws/mturk-requester/model/CreateWorkerBlockResult.h>
#include <aws/mturk-requester/model/DeleteHITResult.h>
#include <aws/mturk-requester/model/DeleteQualificationTypeResult.h>
#include <aws/mturk-requester/model/DeleteWorkerBlockResult.h>
#include <aws/mturk-requester/model/DisassociateQualificationFromWorkerResult.h>
#include <aws/mturk-requester/model/GetAccountBalanceResult.h>
#include <aws/mturk-requester/model/GetAssignmentResult.h>
#include <aws/mturk-requester/model/GetFileUploadURLResult.h>
#include <aws/mturk-requester/model/GetHITResult.h>
#include <aws/mturk-requester/model/GetQualificationScoreResult.h>
#include <aws/mturk-requester/model/GetQualificationTypeResult.h>
#include <aws/mturk-requester/model/ListAssignmentsForHITResult.h>
#include <aws/mturk-requester/model/ListBonusPaymentsResult.h>
#include <aws/mturk-requester/model/ListHITsResult.h>
#include <aws/mturk-requester/model/ListHITsForQualificationTypeResult.h>
#include <aws/mturk-requester/model/ListQualificationRequestsResult.h>
#include <aws/mturk-requester/model/ListQualificationTypesResult.h>
#include <aws/mturk-requester/model/ListReviewPolicyResultsForHITResult.h>
#include <aws/mturk-requester/model/ListReviewableHITsResult.h>
#include <aws/mturk-requester/model/ListWorkerBlocksResult.h>
#include <aws/mturk-requester/model/ListWorkersWithQualificationTypeResult.h>
#include <aws/mturk-requester/model/NotifyWorkersResult.h>
#include <aws/mturk-requester/model/RejectAssignmentResult.h>
#include <aws/mturk-requester/model/RejectQualificationRequestResult.h>
#include <aws/mturk-requester/model/SendBonusResult.h>
#include <aws/mturk-requester/model/SendTestEventNotificationResult.h>
#include <aws/mturk-requester/model/UpdateExpirationForHITResult.h>
#include <aws/mturk-requester/model/UpdateHITReviewStatusResult.h>
#include <aws/mturk-requester/model/UpdateHITTypeOfHITResult.h>
#include <aws/mturk-requester/model/UpdateNotificationSettingsResult.h>
#include <aws/mturk-requester/model/UpdateQualificationTypeResult.h>
/* End of service model headers required in MTurkClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace MTurk
  {
    using MTurkClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using MTurkEndpointProviderBase = Aws::MTurk::Endpoint::MTurkEndpointProviderBase;
    using MTurkEndpointProvider = Aws::MTurk::Endpoint::MTurkEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MTurkClient header */
      class AcceptQualificationRequestRequest;
      class ApproveAssignmentRequest;
      class AssociateQualificationWithWorkerRequest;
      class CreateAdditionalAssignmentsForHITRequest;
      class CreateHITRequest;
      class CreateHITTypeRequest;
      class CreateHITWithHITTypeRequest;
      class CreateQualificationTypeRequest;
      class CreateWorkerBlockRequest;
      class DeleteHITRequest;
      class DeleteQualificationTypeRequest;
      class DeleteWorkerBlockRequest;
      class DisassociateQualificationFromWorkerRequest;
      class GetAccountBalanceRequest;
      class GetAssignmentRequest;
      class GetFileUploadURLRequest;
      class GetHITRequest;
      class GetQualificationScoreRequest;
      class GetQualificationTypeRequest;
      class ListAssignmentsForHITRequest;
      class ListBonusPaymentsRequest;
      class ListHITsRequest;
      class ListHITsForQualificationTypeRequest;
      class ListQualificationRequestsRequest;
      class ListQualificationTypesRequest;
      class ListReviewPolicyResultsForHITRequest;
      class ListReviewableHITsRequest;
      class ListWorkerBlocksRequest;
      class ListWorkersWithQualificationTypeRequest;
      class NotifyWorkersRequest;
      class RejectAssignmentRequest;
      class RejectQualificationRequestRequest;
      class SendBonusRequest;
      class SendTestEventNotificationRequest;
      class UpdateExpirationForHITRequest;
      class UpdateHITReviewStatusRequest;
      class UpdateHITTypeOfHITRequest;
      class UpdateNotificationSettingsRequest;
      class UpdateQualificationTypeRequest;
      /* End of service model forward declarations required in MTurkClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcceptQualificationRequestResult, MTurkError> AcceptQualificationRequestOutcome;
      typedef Aws::Utils::Outcome<ApproveAssignmentResult, MTurkError> ApproveAssignmentOutcome;
      typedef Aws::Utils::Outcome<AssociateQualificationWithWorkerResult, MTurkError> AssociateQualificationWithWorkerOutcome;
      typedef Aws::Utils::Outcome<CreateAdditionalAssignmentsForHITResult, MTurkError> CreateAdditionalAssignmentsForHITOutcome;
      typedef Aws::Utils::Outcome<CreateHITResult, MTurkError> CreateHITOutcome;
      typedef Aws::Utils::Outcome<CreateHITTypeResult, MTurkError> CreateHITTypeOutcome;
      typedef Aws::Utils::Outcome<CreateHITWithHITTypeResult, MTurkError> CreateHITWithHITTypeOutcome;
      typedef Aws::Utils::Outcome<CreateQualificationTypeResult, MTurkError> CreateQualificationTypeOutcome;
      typedef Aws::Utils::Outcome<CreateWorkerBlockResult, MTurkError> CreateWorkerBlockOutcome;
      typedef Aws::Utils::Outcome<DeleteHITResult, MTurkError> DeleteHITOutcome;
      typedef Aws::Utils::Outcome<DeleteQualificationTypeResult, MTurkError> DeleteQualificationTypeOutcome;
      typedef Aws::Utils::Outcome<DeleteWorkerBlockResult, MTurkError> DeleteWorkerBlockOutcome;
      typedef Aws::Utils::Outcome<DisassociateQualificationFromWorkerResult, MTurkError> DisassociateQualificationFromWorkerOutcome;
      typedef Aws::Utils::Outcome<GetAccountBalanceResult, MTurkError> GetAccountBalanceOutcome;
      typedef Aws::Utils::Outcome<GetAssignmentResult, MTurkError> GetAssignmentOutcome;
      typedef Aws::Utils::Outcome<GetFileUploadURLResult, MTurkError> GetFileUploadURLOutcome;
      typedef Aws::Utils::Outcome<GetHITResult, MTurkError> GetHITOutcome;
      typedef Aws::Utils::Outcome<GetQualificationScoreResult, MTurkError> GetQualificationScoreOutcome;
      typedef Aws::Utils::Outcome<GetQualificationTypeResult, MTurkError> GetQualificationTypeOutcome;
      typedef Aws::Utils::Outcome<ListAssignmentsForHITResult, MTurkError> ListAssignmentsForHITOutcome;
      typedef Aws::Utils::Outcome<ListBonusPaymentsResult, MTurkError> ListBonusPaymentsOutcome;
      typedef Aws::Utils::Outcome<ListHITsResult, MTurkError> ListHITsOutcome;
      typedef Aws::Utils::Outcome<ListHITsForQualificationTypeResult, MTurkError> ListHITsForQualificationTypeOutcome;
      typedef Aws::Utils::Outcome<ListQualificationRequestsResult, MTurkError> ListQualificationRequestsOutcome;
      typedef Aws::Utils::Outcome<ListQualificationTypesResult, MTurkError> ListQualificationTypesOutcome;
      typedef Aws::Utils::Outcome<ListReviewPolicyResultsForHITResult, MTurkError> ListReviewPolicyResultsForHITOutcome;
      typedef Aws::Utils::Outcome<ListReviewableHITsResult, MTurkError> ListReviewableHITsOutcome;
      typedef Aws::Utils::Outcome<ListWorkerBlocksResult, MTurkError> ListWorkerBlocksOutcome;
      typedef Aws::Utils::Outcome<ListWorkersWithQualificationTypeResult, MTurkError> ListWorkersWithQualificationTypeOutcome;
      typedef Aws::Utils::Outcome<NotifyWorkersResult, MTurkError> NotifyWorkersOutcome;
      typedef Aws::Utils::Outcome<RejectAssignmentResult, MTurkError> RejectAssignmentOutcome;
      typedef Aws::Utils::Outcome<RejectQualificationRequestResult, MTurkError> RejectQualificationRequestOutcome;
      typedef Aws::Utils::Outcome<SendBonusResult, MTurkError> SendBonusOutcome;
      typedef Aws::Utils::Outcome<SendTestEventNotificationResult, MTurkError> SendTestEventNotificationOutcome;
      typedef Aws::Utils::Outcome<UpdateExpirationForHITResult, MTurkError> UpdateExpirationForHITOutcome;
      typedef Aws::Utils::Outcome<UpdateHITReviewStatusResult, MTurkError> UpdateHITReviewStatusOutcome;
      typedef Aws::Utils::Outcome<UpdateHITTypeOfHITResult, MTurkError> UpdateHITTypeOfHITOutcome;
      typedef Aws::Utils::Outcome<UpdateNotificationSettingsResult, MTurkError> UpdateNotificationSettingsOutcome;
      typedef Aws::Utils::Outcome<UpdateQualificationTypeResult, MTurkError> UpdateQualificationTypeOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptQualificationRequestOutcome> AcceptQualificationRequestOutcomeCallable;
      typedef std::future<ApproveAssignmentOutcome> ApproveAssignmentOutcomeCallable;
      typedef std::future<AssociateQualificationWithWorkerOutcome> AssociateQualificationWithWorkerOutcomeCallable;
      typedef std::future<CreateAdditionalAssignmentsForHITOutcome> CreateAdditionalAssignmentsForHITOutcomeCallable;
      typedef std::future<CreateHITOutcome> CreateHITOutcomeCallable;
      typedef std::future<CreateHITTypeOutcome> CreateHITTypeOutcomeCallable;
      typedef std::future<CreateHITWithHITTypeOutcome> CreateHITWithHITTypeOutcomeCallable;
      typedef std::future<CreateQualificationTypeOutcome> CreateQualificationTypeOutcomeCallable;
      typedef std::future<CreateWorkerBlockOutcome> CreateWorkerBlockOutcomeCallable;
      typedef std::future<DeleteHITOutcome> DeleteHITOutcomeCallable;
      typedef std::future<DeleteQualificationTypeOutcome> DeleteQualificationTypeOutcomeCallable;
      typedef std::future<DeleteWorkerBlockOutcome> DeleteWorkerBlockOutcomeCallable;
      typedef std::future<DisassociateQualificationFromWorkerOutcome> DisassociateQualificationFromWorkerOutcomeCallable;
      typedef std::future<GetAccountBalanceOutcome> GetAccountBalanceOutcomeCallable;
      typedef std::future<GetAssignmentOutcome> GetAssignmentOutcomeCallable;
      typedef std::future<GetFileUploadURLOutcome> GetFileUploadURLOutcomeCallable;
      typedef std::future<GetHITOutcome> GetHITOutcomeCallable;
      typedef std::future<GetQualificationScoreOutcome> GetQualificationScoreOutcomeCallable;
      typedef std::future<GetQualificationTypeOutcome> GetQualificationTypeOutcomeCallable;
      typedef std::future<ListAssignmentsForHITOutcome> ListAssignmentsForHITOutcomeCallable;
      typedef std::future<ListBonusPaymentsOutcome> ListBonusPaymentsOutcomeCallable;
      typedef std::future<ListHITsOutcome> ListHITsOutcomeCallable;
      typedef std::future<ListHITsForQualificationTypeOutcome> ListHITsForQualificationTypeOutcomeCallable;
      typedef std::future<ListQualificationRequestsOutcome> ListQualificationRequestsOutcomeCallable;
      typedef std::future<ListQualificationTypesOutcome> ListQualificationTypesOutcomeCallable;
      typedef std::future<ListReviewPolicyResultsForHITOutcome> ListReviewPolicyResultsForHITOutcomeCallable;
      typedef std::future<ListReviewableHITsOutcome> ListReviewableHITsOutcomeCallable;
      typedef std::future<ListWorkerBlocksOutcome> ListWorkerBlocksOutcomeCallable;
      typedef std::future<ListWorkersWithQualificationTypeOutcome> ListWorkersWithQualificationTypeOutcomeCallable;
      typedef std::future<NotifyWorkersOutcome> NotifyWorkersOutcomeCallable;
      typedef std::future<RejectAssignmentOutcome> RejectAssignmentOutcomeCallable;
      typedef std::future<RejectQualificationRequestOutcome> RejectQualificationRequestOutcomeCallable;
      typedef std::future<SendBonusOutcome> SendBonusOutcomeCallable;
      typedef std::future<SendTestEventNotificationOutcome> SendTestEventNotificationOutcomeCallable;
      typedef std::future<UpdateExpirationForHITOutcome> UpdateExpirationForHITOutcomeCallable;
      typedef std::future<UpdateHITReviewStatusOutcome> UpdateHITReviewStatusOutcomeCallable;
      typedef std::future<UpdateHITTypeOfHITOutcome> UpdateHITTypeOfHITOutcomeCallable;
      typedef std::future<UpdateNotificationSettingsOutcome> UpdateNotificationSettingsOutcomeCallable;
      typedef std::future<UpdateQualificationTypeOutcome> UpdateQualificationTypeOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MTurkClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MTurkClient*, const Model::AcceptQualificationRequestRequest&, const Model::AcceptQualificationRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptQualificationRequestResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::ApproveAssignmentRequest&, const Model::ApproveAssignmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ApproveAssignmentResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::AssociateQualificationWithWorkerRequest&, const Model::AssociateQualificationWithWorkerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateQualificationWithWorkerResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::CreateAdditionalAssignmentsForHITRequest&, const Model::CreateAdditionalAssignmentsForHITOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAdditionalAssignmentsForHITResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::CreateHITRequest&, const Model::CreateHITOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHITResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::CreateHITTypeRequest&, const Model::CreateHITTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHITTypeResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::CreateHITWithHITTypeRequest&, const Model::CreateHITWithHITTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHITWithHITTypeResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::CreateQualificationTypeRequest&, const Model::CreateQualificationTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateQualificationTypeResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::CreateWorkerBlockRequest&, const Model::CreateWorkerBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkerBlockResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::DeleteHITRequest&, const Model::DeleteHITOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHITResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::DeleteQualificationTypeRequest&, const Model::DeleteQualificationTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteQualificationTypeResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::DeleteWorkerBlockRequest&, const Model::DeleteWorkerBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkerBlockResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::DisassociateQualificationFromWorkerRequest&, const Model::DisassociateQualificationFromWorkerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateQualificationFromWorkerResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::GetAccountBalanceRequest&, const Model::GetAccountBalanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountBalanceResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::GetAssignmentRequest&, const Model::GetAssignmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssignmentResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::GetFileUploadURLRequest&, const Model::GetFileUploadURLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFileUploadURLResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::GetHITRequest&, const Model::GetHITOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHITResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::GetQualificationScoreRequest&, const Model::GetQualificationScoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQualificationScoreResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::GetQualificationTypeRequest&, const Model::GetQualificationTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQualificationTypeResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::ListAssignmentsForHITRequest&, const Model::ListAssignmentsForHITOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssignmentsForHITResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::ListBonusPaymentsRequest&, const Model::ListBonusPaymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBonusPaymentsResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::ListHITsRequest&, const Model::ListHITsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHITsResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::ListHITsForQualificationTypeRequest&, const Model::ListHITsForQualificationTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHITsForQualificationTypeResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::ListQualificationRequestsRequest&, const Model::ListQualificationRequestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQualificationRequestsResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::ListQualificationTypesRequest&, const Model::ListQualificationTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQualificationTypesResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::ListReviewPolicyResultsForHITRequest&, const Model::ListReviewPolicyResultsForHITOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReviewPolicyResultsForHITResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::ListReviewableHITsRequest&, const Model::ListReviewableHITsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReviewableHITsResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::ListWorkerBlocksRequest&, const Model::ListWorkerBlocksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkerBlocksResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::ListWorkersWithQualificationTypeRequest&, const Model::ListWorkersWithQualificationTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkersWithQualificationTypeResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::NotifyWorkersRequest&, const Model::NotifyWorkersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > NotifyWorkersResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::RejectAssignmentRequest&, const Model::RejectAssignmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectAssignmentResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::RejectQualificationRequestRequest&, const Model::RejectQualificationRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectQualificationRequestResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::SendBonusRequest&, const Model::SendBonusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendBonusResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::SendTestEventNotificationRequest&, const Model::SendTestEventNotificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendTestEventNotificationResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::UpdateExpirationForHITRequest&, const Model::UpdateExpirationForHITOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateExpirationForHITResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::UpdateHITReviewStatusRequest&, const Model::UpdateHITReviewStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateHITReviewStatusResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::UpdateHITTypeOfHITRequest&, const Model::UpdateHITTypeOfHITOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateHITTypeOfHITResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::UpdateNotificationSettingsRequest&, const Model::UpdateNotificationSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNotificationSettingsResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::UpdateQualificationTypeRequest&, const Model::UpdateQualificationTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQualificationTypeResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MTurk
} // namespace Aws
