/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/ssm-contacts/SSMContactsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/ssm-contacts/SSMContactsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SSMContactsClient header */
#include <aws/ssm-contacts/model/AcceptPageResult.h>
#include <aws/ssm-contacts/model/ActivateContactChannelResult.h>
#include <aws/ssm-contacts/model/CreateContactResult.h>
#include <aws/ssm-contacts/model/CreateContactChannelResult.h>
#include <aws/ssm-contacts/model/CreateRotationResult.h>
#include <aws/ssm-contacts/model/CreateRotationOverrideResult.h>
#include <aws/ssm-contacts/model/DeactivateContactChannelResult.h>
#include <aws/ssm-contacts/model/DeleteContactResult.h>
#include <aws/ssm-contacts/model/DeleteContactChannelResult.h>
#include <aws/ssm-contacts/model/DeleteRotationResult.h>
#include <aws/ssm-contacts/model/DeleteRotationOverrideResult.h>
#include <aws/ssm-contacts/model/DescribeEngagementResult.h>
#include <aws/ssm-contacts/model/DescribePageResult.h>
#include <aws/ssm-contacts/model/GetContactResult.h>
#include <aws/ssm-contacts/model/GetContactChannelResult.h>
#include <aws/ssm-contacts/model/GetContactPolicyResult.h>
#include <aws/ssm-contacts/model/GetRotationResult.h>
#include <aws/ssm-contacts/model/GetRotationOverrideResult.h>
#include <aws/ssm-contacts/model/ListContactChannelsResult.h>
#include <aws/ssm-contacts/model/ListContactsResult.h>
#include <aws/ssm-contacts/model/ListEngagementsResult.h>
#include <aws/ssm-contacts/model/ListPageReceiptsResult.h>
#include <aws/ssm-contacts/model/ListPageResolutionsResult.h>
#include <aws/ssm-contacts/model/ListPagesByContactResult.h>
#include <aws/ssm-contacts/model/ListPagesByEngagementResult.h>
#include <aws/ssm-contacts/model/ListPreviewRotationShiftsResult.h>
#include <aws/ssm-contacts/model/ListRotationOverridesResult.h>
#include <aws/ssm-contacts/model/ListRotationShiftsResult.h>
#include <aws/ssm-contacts/model/ListRotationsResult.h>
#include <aws/ssm-contacts/model/ListTagsForResourceResult.h>
#include <aws/ssm-contacts/model/PutContactPolicyResult.h>
#include <aws/ssm-contacts/model/SendActivationCodeResult.h>
#include <aws/ssm-contacts/model/StartEngagementResult.h>
#include <aws/ssm-contacts/model/StopEngagementResult.h>
#include <aws/ssm-contacts/model/TagResourceResult.h>
#include <aws/ssm-contacts/model/UntagResourceResult.h>
#include <aws/ssm-contacts/model/UpdateContactResult.h>
#include <aws/ssm-contacts/model/UpdateContactChannelResult.h>
#include <aws/ssm-contacts/model/UpdateRotationResult.h>
/* End of service model headers required in SSMContactsClient header */

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

  namespace SSMContacts
  {
    using SSMContactsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SSMContactsEndpointProviderBase = Aws::SSMContacts::Endpoint::SSMContactsEndpointProviderBase;
    using SSMContactsEndpointProvider = Aws::SSMContacts::Endpoint::SSMContactsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SSMContactsClient header */
      class AcceptPageRequest;
      class ActivateContactChannelRequest;
      class CreateContactRequest;
      class CreateContactChannelRequest;
      class CreateRotationRequest;
      class CreateRotationOverrideRequest;
      class DeactivateContactChannelRequest;
      class DeleteContactRequest;
      class DeleteContactChannelRequest;
      class DeleteRotationRequest;
      class DeleteRotationOverrideRequest;
      class DescribeEngagementRequest;
      class DescribePageRequest;
      class GetContactRequest;
      class GetContactChannelRequest;
      class GetContactPolicyRequest;
      class GetRotationRequest;
      class GetRotationOverrideRequest;
      class ListContactChannelsRequest;
      class ListContactsRequest;
      class ListEngagementsRequest;
      class ListPageReceiptsRequest;
      class ListPageResolutionsRequest;
      class ListPagesByContactRequest;
      class ListPagesByEngagementRequest;
      class ListPreviewRotationShiftsRequest;
      class ListRotationOverridesRequest;
      class ListRotationShiftsRequest;
      class ListRotationsRequest;
      class ListTagsForResourceRequest;
      class PutContactPolicyRequest;
      class SendActivationCodeRequest;
      class StartEngagementRequest;
      class StopEngagementRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateContactRequest;
      class UpdateContactChannelRequest;
      class UpdateRotationRequest;
      /* End of service model forward declarations required in SSMContactsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcceptPageResult, SSMContactsError> AcceptPageOutcome;
      typedef Aws::Utils::Outcome<ActivateContactChannelResult, SSMContactsError> ActivateContactChannelOutcome;
      typedef Aws::Utils::Outcome<CreateContactResult, SSMContactsError> CreateContactOutcome;
      typedef Aws::Utils::Outcome<CreateContactChannelResult, SSMContactsError> CreateContactChannelOutcome;
      typedef Aws::Utils::Outcome<CreateRotationResult, SSMContactsError> CreateRotationOutcome;
      typedef Aws::Utils::Outcome<CreateRotationOverrideResult, SSMContactsError> CreateRotationOverrideOutcome;
      typedef Aws::Utils::Outcome<DeactivateContactChannelResult, SSMContactsError> DeactivateContactChannelOutcome;
      typedef Aws::Utils::Outcome<DeleteContactResult, SSMContactsError> DeleteContactOutcome;
      typedef Aws::Utils::Outcome<DeleteContactChannelResult, SSMContactsError> DeleteContactChannelOutcome;
      typedef Aws::Utils::Outcome<DeleteRotationResult, SSMContactsError> DeleteRotationOutcome;
      typedef Aws::Utils::Outcome<DeleteRotationOverrideResult, SSMContactsError> DeleteRotationOverrideOutcome;
      typedef Aws::Utils::Outcome<DescribeEngagementResult, SSMContactsError> DescribeEngagementOutcome;
      typedef Aws::Utils::Outcome<DescribePageResult, SSMContactsError> DescribePageOutcome;
      typedef Aws::Utils::Outcome<GetContactResult, SSMContactsError> GetContactOutcome;
      typedef Aws::Utils::Outcome<GetContactChannelResult, SSMContactsError> GetContactChannelOutcome;
      typedef Aws::Utils::Outcome<GetContactPolicyResult, SSMContactsError> GetContactPolicyOutcome;
      typedef Aws::Utils::Outcome<GetRotationResult, SSMContactsError> GetRotationOutcome;
      typedef Aws::Utils::Outcome<GetRotationOverrideResult, SSMContactsError> GetRotationOverrideOutcome;
      typedef Aws::Utils::Outcome<ListContactChannelsResult, SSMContactsError> ListContactChannelsOutcome;
      typedef Aws::Utils::Outcome<ListContactsResult, SSMContactsError> ListContactsOutcome;
      typedef Aws::Utils::Outcome<ListEngagementsResult, SSMContactsError> ListEngagementsOutcome;
      typedef Aws::Utils::Outcome<ListPageReceiptsResult, SSMContactsError> ListPageReceiptsOutcome;
      typedef Aws::Utils::Outcome<ListPageResolutionsResult, SSMContactsError> ListPageResolutionsOutcome;
      typedef Aws::Utils::Outcome<ListPagesByContactResult, SSMContactsError> ListPagesByContactOutcome;
      typedef Aws::Utils::Outcome<ListPagesByEngagementResult, SSMContactsError> ListPagesByEngagementOutcome;
      typedef Aws::Utils::Outcome<ListPreviewRotationShiftsResult, SSMContactsError> ListPreviewRotationShiftsOutcome;
      typedef Aws::Utils::Outcome<ListRotationOverridesResult, SSMContactsError> ListRotationOverridesOutcome;
      typedef Aws::Utils::Outcome<ListRotationShiftsResult, SSMContactsError> ListRotationShiftsOutcome;
      typedef Aws::Utils::Outcome<ListRotationsResult, SSMContactsError> ListRotationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, SSMContactsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutContactPolicyResult, SSMContactsError> PutContactPolicyOutcome;
      typedef Aws::Utils::Outcome<SendActivationCodeResult, SSMContactsError> SendActivationCodeOutcome;
      typedef Aws::Utils::Outcome<StartEngagementResult, SSMContactsError> StartEngagementOutcome;
      typedef Aws::Utils::Outcome<StopEngagementResult, SSMContactsError> StopEngagementOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, SSMContactsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, SSMContactsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateContactResult, SSMContactsError> UpdateContactOutcome;
      typedef Aws::Utils::Outcome<UpdateContactChannelResult, SSMContactsError> UpdateContactChannelOutcome;
      typedef Aws::Utils::Outcome<UpdateRotationResult, SSMContactsError> UpdateRotationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptPageOutcome> AcceptPageOutcomeCallable;
      typedef std::future<ActivateContactChannelOutcome> ActivateContactChannelOutcomeCallable;
      typedef std::future<CreateContactOutcome> CreateContactOutcomeCallable;
      typedef std::future<CreateContactChannelOutcome> CreateContactChannelOutcomeCallable;
      typedef std::future<CreateRotationOutcome> CreateRotationOutcomeCallable;
      typedef std::future<CreateRotationOverrideOutcome> CreateRotationOverrideOutcomeCallable;
      typedef std::future<DeactivateContactChannelOutcome> DeactivateContactChannelOutcomeCallable;
      typedef std::future<DeleteContactOutcome> DeleteContactOutcomeCallable;
      typedef std::future<DeleteContactChannelOutcome> DeleteContactChannelOutcomeCallable;
      typedef std::future<DeleteRotationOutcome> DeleteRotationOutcomeCallable;
      typedef std::future<DeleteRotationOverrideOutcome> DeleteRotationOverrideOutcomeCallable;
      typedef std::future<DescribeEngagementOutcome> DescribeEngagementOutcomeCallable;
      typedef std::future<DescribePageOutcome> DescribePageOutcomeCallable;
      typedef std::future<GetContactOutcome> GetContactOutcomeCallable;
      typedef std::future<GetContactChannelOutcome> GetContactChannelOutcomeCallable;
      typedef std::future<GetContactPolicyOutcome> GetContactPolicyOutcomeCallable;
      typedef std::future<GetRotationOutcome> GetRotationOutcomeCallable;
      typedef std::future<GetRotationOverrideOutcome> GetRotationOverrideOutcomeCallable;
      typedef std::future<ListContactChannelsOutcome> ListContactChannelsOutcomeCallable;
      typedef std::future<ListContactsOutcome> ListContactsOutcomeCallable;
      typedef std::future<ListEngagementsOutcome> ListEngagementsOutcomeCallable;
      typedef std::future<ListPageReceiptsOutcome> ListPageReceiptsOutcomeCallable;
      typedef std::future<ListPageResolutionsOutcome> ListPageResolutionsOutcomeCallable;
      typedef std::future<ListPagesByContactOutcome> ListPagesByContactOutcomeCallable;
      typedef std::future<ListPagesByEngagementOutcome> ListPagesByEngagementOutcomeCallable;
      typedef std::future<ListPreviewRotationShiftsOutcome> ListPreviewRotationShiftsOutcomeCallable;
      typedef std::future<ListRotationOverridesOutcome> ListRotationOverridesOutcomeCallable;
      typedef std::future<ListRotationShiftsOutcome> ListRotationShiftsOutcomeCallable;
      typedef std::future<ListRotationsOutcome> ListRotationsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutContactPolicyOutcome> PutContactPolicyOutcomeCallable;
      typedef std::future<SendActivationCodeOutcome> SendActivationCodeOutcomeCallable;
      typedef std::future<StartEngagementOutcome> StartEngagementOutcomeCallable;
      typedef std::future<StopEngagementOutcome> StopEngagementOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateContactOutcome> UpdateContactOutcomeCallable;
      typedef std::future<UpdateContactChannelOutcome> UpdateContactChannelOutcomeCallable;
      typedef std::future<UpdateRotationOutcome> UpdateRotationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SSMContactsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SSMContactsClient*, const Model::AcceptPageRequest&, const Model::AcceptPageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptPageResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::ActivateContactChannelRequest&, const Model::ActivateContactChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ActivateContactChannelResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::CreateContactRequest&, const Model::CreateContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContactResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::CreateContactChannelRequest&, const Model::CreateContactChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContactChannelResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::CreateRotationRequest&, const Model::CreateRotationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRotationResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::CreateRotationOverrideRequest&, const Model::CreateRotationOverrideOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRotationOverrideResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::DeactivateContactChannelRequest&, const Model::DeactivateContactChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeactivateContactChannelResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::DeleteContactRequest&, const Model::DeleteContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContactResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::DeleteContactChannelRequest&, const Model::DeleteContactChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContactChannelResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::DeleteRotationRequest&, const Model::DeleteRotationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRotationResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::DeleteRotationOverrideRequest&, const Model::DeleteRotationOverrideOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRotationOverrideResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::DescribeEngagementRequest&, const Model::DescribeEngagementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEngagementResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::DescribePageRequest&, const Model::DescribePageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePageResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::GetContactRequest&, const Model::GetContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContactResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::GetContactChannelRequest&, const Model::GetContactChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContactChannelResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::GetContactPolicyRequest&, const Model::GetContactPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContactPolicyResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::GetRotationRequest&, const Model::GetRotationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRotationResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::GetRotationOverrideRequest&, const Model::GetRotationOverrideOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRotationOverrideResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::ListContactChannelsRequest&, const Model::ListContactChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContactChannelsResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::ListContactsRequest&, const Model::ListContactsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContactsResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::ListEngagementsRequest&, const Model::ListEngagementsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEngagementsResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::ListPageReceiptsRequest&, const Model::ListPageReceiptsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPageReceiptsResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::ListPageResolutionsRequest&, const Model::ListPageResolutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPageResolutionsResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::ListPagesByContactRequest&, const Model::ListPagesByContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPagesByContactResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::ListPagesByEngagementRequest&, const Model::ListPagesByEngagementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPagesByEngagementResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::ListPreviewRotationShiftsRequest&, const Model::ListPreviewRotationShiftsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPreviewRotationShiftsResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::ListRotationOverridesRequest&, const Model::ListRotationOverridesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRotationOverridesResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::ListRotationShiftsRequest&, const Model::ListRotationShiftsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRotationShiftsResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::ListRotationsRequest&, const Model::ListRotationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRotationsResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::PutContactPolicyRequest&, const Model::PutContactPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutContactPolicyResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::SendActivationCodeRequest&, const Model::SendActivationCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendActivationCodeResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::StartEngagementRequest&, const Model::StartEngagementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartEngagementResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::StopEngagementRequest&, const Model::StopEngagementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopEngagementResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::UpdateContactRequest&, const Model::UpdateContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::UpdateContactChannelRequest&, const Model::UpdateContactChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactChannelResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::UpdateRotationRequest&, const Model::UpdateRotationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRotationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SSMContacts
} // namespace Aws
