/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/security-ir/SecurityIRErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/security-ir/SecurityIREndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SecurityIRClient header */
#include <aws/security-ir/model/BatchGetMemberAccountDetailsResult.h>
#include <aws/security-ir/model/CancelMembershipResult.h>
#include <aws/security-ir/model/CloseCaseResult.h>
#include <aws/security-ir/model/CreateCaseResult.h>
#include <aws/security-ir/model/CreateCaseCommentResult.h>
#include <aws/security-ir/model/CreateMembershipResult.h>
#include <aws/security-ir/model/GetCaseResult.h>
#include <aws/security-ir/model/GetCaseAttachmentDownloadUrlResult.h>
#include <aws/security-ir/model/GetCaseAttachmentUploadUrlResult.h>
#include <aws/security-ir/model/GetMembershipResult.h>
#include <aws/security-ir/model/ListCaseEditsResult.h>
#include <aws/security-ir/model/ListCasesResult.h>
#include <aws/security-ir/model/ListCommentsResult.h>
#include <aws/security-ir/model/ListMembershipsResult.h>
#include <aws/security-ir/model/ListTagsForResourceResult.h>
#include <aws/security-ir/model/TagResourceResult.h>
#include <aws/security-ir/model/UntagResourceResult.h>
#include <aws/security-ir/model/UpdateCaseResult.h>
#include <aws/security-ir/model/UpdateCaseCommentResult.h>
#include <aws/security-ir/model/UpdateCaseStatusResult.h>
#include <aws/security-ir/model/UpdateMembershipResult.h>
#include <aws/security-ir/model/UpdateResolverTypeResult.h>
#include <aws/security-ir/model/ListCasesRequest.h>
#include <aws/security-ir/model/ListMembershipsRequest.h>
/* End of service model headers required in SecurityIRClient header */

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

  namespace SecurityIR
  {
    using SecurityIRClientConfiguration = Aws::Client::GenericClientConfiguration;
    using SecurityIREndpointProviderBase = Aws::SecurityIR::Endpoint::SecurityIREndpointProviderBase;
    using SecurityIREndpointProvider = Aws::SecurityIR::Endpoint::SecurityIREndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SecurityIRClient header */
      class BatchGetMemberAccountDetailsRequest;
      class CancelMembershipRequest;
      class CloseCaseRequest;
      class CreateCaseRequest;
      class CreateCaseCommentRequest;
      class CreateMembershipRequest;
      class GetCaseRequest;
      class GetCaseAttachmentDownloadUrlRequest;
      class GetCaseAttachmentUploadUrlRequest;
      class GetMembershipRequest;
      class ListCaseEditsRequest;
      class ListCasesRequest;
      class ListCommentsRequest;
      class ListMembershipsRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateCaseRequest;
      class UpdateCaseCommentRequest;
      class UpdateCaseStatusRequest;
      class UpdateMembershipRequest;
      class UpdateResolverTypeRequest;
      /* End of service model forward declarations required in SecurityIRClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchGetMemberAccountDetailsResult, SecurityIRError> BatchGetMemberAccountDetailsOutcome;
      typedef Aws::Utils::Outcome<CancelMembershipResult, SecurityIRError> CancelMembershipOutcome;
      typedef Aws::Utils::Outcome<CloseCaseResult, SecurityIRError> CloseCaseOutcome;
      typedef Aws::Utils::Outcome<CreateCaseResult, SecurityIRError> CreateCaseOutcome;
      typedef Aws::Utils::Outcome<CreateCaseCommentResult, SecurityIRError> CreateCaseCommentOutcome;
      typedef Aws::Utils::Outcome<CreateMembershipResult, SecurityIRError> CreateMembershipOutcome;
      typedef Aws::Utils::Outcome<GetCaseResult, SecurityIRError> GetCaseOutcome;
      typedef Aws::Utils::Outcome<GetCaseAttachmentDownloadUrlResult, SecurityIRError> GetCaseAttachmentDownloadUrlOutcome;
      typedef Aws::Utils::Outcome<GetCaseAttachmentUploadUrlResult, SecurityIRError> GetCaseAttachmentUploadUrlOutcome;
      typedef Aws::Utils::Outcome<GetMembershipResult, SecurityIRError> GetMembershipOutcome;
      typedef Aws::Utils::Outcome<ListCaseEditsResult, SecurityIRError> ListCaseEditsOutcome;
      typedef Aws::Utils::Outcome<ListCasesResult, SecurityIRError> ListCasesOutcome;
      typedef Aws::Utils::Outcome<ListCommentsResult, SecurityIRError> ListCommentsOutcome;
      typedef Aws::Utils::Outcome<ListMembershipsResult, SecurityIRError> ListMembershipsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, SecurityIRError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, SecurityIRError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, SecurityIRError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateCaseResult, SecurityIRError> UpdateCaseOutcome;
      typedef Aws::Utils::Outcome<UpdateCaseCommentResult, SecurityIRError> UpdateCaseCommentOutcome;
      typedef Aws::Utils::Outcome<UpdateCaseStatusResult, SecurityIRError> UpdateCaseStatusOutcome;
      typedef Aws::Utils::Outcome<UpdateMembershipResult, SecurityIRError> UpdateMembershipOutcome;
      typedef Aws::Utils::Outcome<UpdateResolverTypeResult, SecurityIRError> UpdateResolverTypeOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchGetMemberAccountDetailsOutcome> BatchGetMemberAccountDetailsOutcomeCallable;
      typedef std::future<CancelMembershipOutcome> CancelMembershipOutcomeCallable;
      typedef std::future<CloseCaseOutcome> CloseCaseOutcomeCallable;
      typedef std::future<CreateCaseOutcome> CreateCaseOutcomeCallable;
      typedef std::future<CreateCaseCommentOutcome> CreateCaseCommentOutcomeCallable;
      typedef std::future<CreateMembershipOutcome> CreateMembershipOutcomeCallable;
      typedef std::future<GetCaseOutcome> GetCaseOutcomeCallable;
      typedef std::future<GetCaseAttachmentDownloadUrlOutcome> GetCaseAttachmentDownloadUrlOutcomeCallable;
      typedef std::future<GetCaseAttachmentUploadUrlOutcome> GetCaseAttachmentUploadUrlOutcomeCallable;
      typedef std::future<GetMembershipOutcome> GetMembershipOutcomeCallable;
      typedef std::future<ListCaseEditsOutcome> ListCaseEditsOutcomeCallable;
      typedef std::future<ListCasesOutcome> ListCasesOutcomeCallable;
      typedef std::future<ListCommentsOutcome> ListCommentsOutcomeCallable;
      typedef std::future<ListMembershipsOutcome> ListMembershipsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateCaseOutcome> UpdateCaseOutcomeCallable;
      typedef std::future<UpdateCaseCommentOutcome> UpdateCaseCommentOutcomeCallable;
      typedef std::future<UpdateCaseStatusOutcome> UpdateCaseStatusOutcomeCallable;
      typedef std::future<UpdateMembershipOutcome> UpdateMembershipOutcomeCallable;
      typedef std::future<UpdateResolverTypeOutcome> UpdateResolverTypeOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SecurityIRClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SecurityIRClient*, const Model::BatchGetMemberAccountDetailsRequest&, const Model::BatchGetMemberAccountDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetMemberAccountDetailsResponseReceivedHandler;
    typedef std::function<void(const SecurityIRClient*, const Model::CancelMembershipRequest&, const Model::CancelMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelMembershipResponseReceivedHandler;
    typedef std::function<void(const SecurityIRClient*, const Model::CloseCaseRequest&, const Model::CloseCaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CloseCaseResponseReceivedHandler;
    typedef std::function<void(const SecurityIRClient*, const Model::CreateCaseRequest&, const Model::CreateCaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCaseResponseReceivedHandler;
    typedef std::function<void(const SecurityIRClient*, const Model::CreateCaseCommentRequest&, const Model::CreateCaseCommentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCaseCommentResponseReceivedHandler;
    typedef std::function<void(const SecurityIRClient*, const Model::CreateMembershipRequest&, const Model::CreateMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMembershipResponseReceivedHandler;
    typedef std::function<void(const SecurityIRClient*, const Model::GetCaseRequest&, const Model::GetCaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCaseResponseReceivedHandler;
    typedef std::function<void(const SecurityIRClient*, const Model::GetCaseAttachmentDownloadUrlRequest&, const Model::GetCaseAttachmentDownloadUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCaseAttachmentDownloadUrlResponseReceivedHandler;
    typedef std::function<void(const SecurityIRClient*, const Model::GetCaseAttachmentUploadUrlRequest&, const Model::GetCaseAttachmentUploadUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCaseAttachmentUploadUrlResponseReceivedHandler;
    typedef std::function<void(const SecurityIRClient*, const Model::GetMembershipRequest&, const Model::GetMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMembershipResponseReceivedHandler;
    typedef std::function<void(const SecurityIRClient*, const Model::ListCaseEditsRequest&, const Model::ListCaseEditsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCaseEditsResponseReceivedHandler;
    typedef std::function<void(const SecurityIRClient*, const Model::ListCasesRequest&, const Model::ListCasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCasesResponseReceivedHandler;
    typedef std::function<void(const SecurityIRClient*, const Model::ListCommentsRequest&, const Model::ListCommentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCommentsResponseReceivedHandler;
    typedef std::function<void(const SecurityIRClient*, const Model::ListMembershipsRequest&, const Model::ListMembershipsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMembershipsResponseReceivedHandler;
    typedef std::function<void(const SecurityIRClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SecurityIRClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SecurityIRClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const SecurityIRClient*, const Model::UpdateCaseRequest&, const Model::UpdateCaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCaseResponseReceivedHandler;
    typedef std::function<void(const SecurityIRClient*, const Model::UpdateCaseCommentRequest&, const Model::UpdateCaseCommentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCaseCommentResponseReceivedHandler;
    typedef std::function<void(const SecurityIRClient*, const Model::UpdateCaseStatusRequest&, const Model::UpdateCaseStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCaseStatusResponseReceivedHandler;
    typedef std::function<void(const SecurityIRClient*, const Model::UpdateMembershipRequest&, const Model::UpdateMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMembershipResponseReceivedHandler;
    typedef std::function<void(const SecurityIRClient*, const Model::UpdateResolverTypeRequest&, const Model::UpdateResolverTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResolverTypeResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SecurityIR
} // namespace Aws
