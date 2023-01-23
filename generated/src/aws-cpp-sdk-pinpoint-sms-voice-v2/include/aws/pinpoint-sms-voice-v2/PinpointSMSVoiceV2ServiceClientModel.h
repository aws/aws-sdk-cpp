/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Errors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2EndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in PinpointSMSVoiceV2Client header */
#include <aws/pinpoint-sms-voice-v2/model/AssociateOriginationIdentityResult.h>
#include <aws/pinpoint-sms-voice-v2/model/CreateConfigurationSetResult.h>
#include <aws/pinpoint-sms-voice-v2/model/CreateEventDestinationResult.h>
#include <aws/pinpoint-sms-voice-v2/model/CreateOptOutListResult.h>
#include <aws/pinpoint-sms-voice-v2/model/CreatePoolResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteConfigurationSetResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteDefaultMessageTypeResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteDefaultSenderIdResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteEventDestinationResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteKeywordResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteOptOutListResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteOptedOutNumberResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DeletePoolResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteTextMessageSpendLimitOverrideResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteVoiceMessageSpendLimitOverrideResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeAccountAttributesResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeAccountLimitsResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeConfigurationSetsResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeKeywordsResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeOptOutListsResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeOptedOutNumbersResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribePhoneNumbersResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribePoolsResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeSenderIdsResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeSpendLimitsResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DisassociateOriginationIdentityResult.h>
#include <aws/pinpoint-sms-voice-v2/model/ListPoolOriginationIdentitiesResult.h>
#include <aws/pinpoint-sms-voice-v2/model/ListTagsForResourceResult.h>
#include <aws/pinpoint-sms-voice-v2/model/PutKeywordResult.h>
#include <aws/pinpoint-sms-voice-v2/model/PutOptedOutNumberResult.h>
#include <aws/pinpoint-sms-voice-v2/model/ReleasePhoneNumberResult.h>
#include <aws/pinpoint-sms-voice-v2/model/RequestPhoneNumberResult.h>
#include <aws/pinpoint-sms-voice-v2/model/SendTextMessageResult.h>
#include <aws/pinpoint-sms-voice-v2/model/SendVoiceMessageResult.h>
#include <aws/pinpoint-sms-voice-v2/model/SetDefaultMessageTypeResult.h>
#include <aws/pinpoint-sms-voice-v2/model/SetDefaultSenderIdResult.h>
#include <aws/pinpoint-sms-voice-v2/model/SetTextMessageSpendLimitOverrideResult.h>
#include <aws/pinpoint-sms-voice-v2/model/SetVoiceMessageSpendLimitOverrideResult.h>
#include <aws/pinpoint-sms-voice-v2/model/TagResourceResult.h>
#include <aws/pinpoint-sms-voice-v2/model/UntagResourceResult.h>
#include <aws/pinpoint-sms-voice-v2/model/UpdateEventDestinationResult.h>
#include <aws/pinpoint-sms-voice-v2/model/UpdatePhoneNumberResult.h>
#include <aws/pinpoint-sms-voice-v2/model/UpdatePoolResult.h>
/* End of service model headers required in PinpointSMSVoiceV2Client header */

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

  namespace PinpointSMSVoiceV2
  {
    using PinpointSMSVoiceV2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using PinpointSMSVoiceV2EndpointProviderBase = Aws::PinpointSMSVoiceV2::Endpoint::PinpointSMSVoiceV2EndpointProviderBase;
    using PinpointSMSVoiceV2EndpointProvider = Aws::PinpointSMSVoiceV2::Endpoint::PinpointSMSVoiceV2EndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in PinpointSMSVoiceV2Client header */
      class AssociateOriginationIdentityRequest;
      class CreateConfigurationSetRequest;
      class CreateEventDestinationRequest;
      class CreateOptOutListRequest;
      class CreatePoolRequest;
      class DeleteConfigurationSetRequest;
      class DeleteDefaultMessageTypeRequest;
      class DeleteDefaultSenderIdRequest;
      class DeleteEventDestinationRequest;
      class DeleteKeywordRequest;
      class DeleteOptOutListRequest;
      class DeleteOptedOutNumberRequest;
      class DeletePoolRequest;
      class DeleteTextMessageSpendLimitOverrideRequest;
      class DeleteVoiceMessageSpendLimitOverrideRequest;
      class DescribeAccountAttributesRequest;
      class DescribeAccountLimitsRequest;
      class DescribeConfigurationSetsRequest;
      class DescribeKeywordsRequest;
      class DescribeOptOutListsRequest;
      class DescribeOptedOutNumbersRequest;
      class DescribePhoneNumbersRequest;
      class DescribePoolsRequest;
      class DescribeSenderIdsRequest;
      class DescribeSpendLimitsRequest;
      class DisassociateOriginationIdentityRequest;
      class ListPoolOriginationIdentitiesRequest;
      class ListTagsForResourceRequest;
      class PutKeywordRequest;
      class PutOptedOutNumberRequest;
      class ReleasePhoneNumberRequest;
      class RequestPhoneNumberRequest;
      class SendTextMessageRequest;
      class SendVoiceMessageRequest;
      class SetDefaultMessageTypeRequest;
      class SetDefaultSenderIdRequest;
      class SetTextMessageSpendLimitOverrideRequest;
      class SetVoiceMessageSpendLimitOverrideRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateEventDestinationRequest;
      class UpdatePhoneNumberRequest;
      class UpdatePoolRequest;
      /* End of service model forward declarations required in PinpointSMSVoiceV2Client header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateOriginationIdentityResult, PinpointSMSVoiceV2Error> AssociateOriginationIdentityOutcome;
      typedef Aws::Utils::Outcome<CreateConfigurationSetResult, PinpointSMSVoiceV2Error> CreateConfigurationSetOutcome;
      typedef Aws::Utils::Outcome<CreateEventDestinationResult, PinpointSMSVoiceV2Error> CreateEventDestinationOutcome;
      typedef Aws::Utils::Outcome<CreateOptOutListResult, PinpointSMSVoiceV2Error> CreateOptOutListOutcome;
      typedef Aws::Utils::Outcome<CreatePoolResult, PinpointSMSVoiceV2Error> CreatePoolOutcome;
      typedef Aws::Utils::Outcome<DeleteConfigurationSetResult, PinpointSMSVoiceV2Error> DeleteConfigurationSetOutcome;
      typedef Aws::Utils::Outcome<DeleteDefaultMessageTypeResult, PinpointSMSVoiceV2Error> DeleteDefaultMessageTypeOutcome;
      typedef Aws::Utils::Outcome<DeleteDefaultSenderIdResult, PinpointSMSVoiceV2Error> DeleteDefaultSenderIdOutcome;
      typedef Aws::Utils::Outcome<DeleteEventDestinationResult, PinpointSMSVoiceV2Error> DeleteEventDestinationOutcome;
      typedef Aws::Utils::Outcome<DeleteKeywordResult, PinpointSMSVoiceV2Error> DeleteKeywordOutcome;
      typedef Aws::Utils::Outcome<DeleteOptOutListResult, PinpointSMSVoiceV2Error> DeleteOptOutListOutcome;
      typedef Aws::Utils::Outcome<DeleteOptedOutNumberResult, PinpointSMSVoiceV2Error> DeleteOptedOutNumberOutcome;
      typedef Aws::Utils::Outcome<DeletePoolResult, PinpointSMSVoiceV2Error> DeletePoolOutcome;
      typedef Aws::Utils::Outcome<DeleteTextMessageSpendLimitOverrideResult, PinpointSMSVoiceV2Error> DeleteTextMessageSpendLimitOverrideOutcome;
      typedef Aws::Utils::Outcome<DeleteVoiceMessageSpendLimitOverrideResult, PinpointSMSVoiceV2Error> DeleteVoiceMessageSpendLimitOverrideOutcome;
      typedef Aws::Utils::Outcome<DescribeAccountAttributesResult, PinpointSMSVoiceV2Error> DescribeAccountAttributesOutcome;
      typedef Aws::Utils::Outcome<DescribeAccountLimitsResult, PinpointSMSVoiceV2Error> DescribeAccountLimitsOutcome;
      typedef Aws::Utils::Outcome<DescribeConfigurationSetsResult, PinpointSMSVoiceV2Error> DescribeConfigurationSetsOutcome;
      typedef Aws::Utils::Outcome<DescribeKeywordsResult, PinpointSMSVoiceV2Error> DescribeKeywordsOutcome;
      typedef Aws::Utils::Outcome<DescribeOptOutListsResult, PinpointSMSVoiceV2Error> DescribeOptOutListsOutcome;
      typedef Aws::Utils::Outcome<DescribeOptedOutNumbersResult, PinpointSMSVoiceV2Error> DescribeOptedOutNumbersOutcome;
      typedef Aws::Utils::Outcome<DescribePhoneNumbersResult, PinpointSMSVoiceV2Error> DescribePhoneNumbersOutcome;
      typedef Aws::Utils::Outcome<DescribePoolsResult, PinpointSMSVoiceV2Error> DescribePoolsOutcome;
      typedef Aws::Utils::Outcome<DescribeSenderIdsResult, PinpointSMSVoiceV2Error> DescribeSenderIdsOutcome;
      typedef Aws::Utils::Outcome<DescribeSpendLimitsResult, PinpointSMSVoiceV2Error> DescribeSpendLimitsOutcome;
      typedef Aws::Utils::Outcome<DisassociateOriginationIdentityResult, PinpointSMSVoiceV2Error> DisassociateOriginationIdentityOutcome;
      typedef Aws::Utils::Outcome<ListPoolOriginationIdentitiesResult, PinpointSMSVoiceV2Error> ListPoolOriginationIdentitiesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, PinpointSMSVoiceV2Error> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutKeywordResult, PinpointSMSVoiceV2Error> PutKeywordOutcome;
      typedef Aws::Utils::Outcome<PutOptedOutNumberResult, PinpointSMSVoiceV2Error> PutOptedOutNumberOutcome;
      typedef Aws::Utils::Outcome<ReleasePhoneNumberResult, PinpointSMSVoiceV2Error> ReleasePhoneNumberOutcome;
      typedef Aws::Utils::Outcome<RequestPhoneNumberResult, PinpointSMSVoiceV2Error> RequestPhoneNumberOutcome;
      typedef Aws::Utils::Outcome<SendTextMessageResult, PinpointSMSVoiceV2Error> SendTextMessageOutcome;
      typedef Aws::Utils::Outcome<SendVoiceMessageResult, PinpointSMSVoiceV2Error> SendVoiceMessageOutcome;
      typedef Aws::Utils::Outcome<SetDefaultMessageTypeResult, PinpointSMSVoiceV2Error> SetDefaultMessageTypeOutcome;
      typedef Aws::Utils::Outcome<SetDefaultSenderIdResult, PinpointSMSVoiceV2Error> SetDefaultSenderIdOutcome;
      typedef Aws::Utils::Outcome<SetTextMessageSpendLimitOverrideResult, PinpointSMSVoiceV2Error> SetTextMessageSpendLimitOverrideOutcome;
      typedef Aws::Utils::Outcome<SetVoiceMessageSpendLimitOverrideResult, PinpointSMSVoiceV2Error> SetVoiceMessageSpendLimitOverrideOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, PinpointSMSVoiceV2Error> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, PinpointSMSVoiceV2Error> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateEventDestinationResult, PinpointSMSVoiceV2Error> UpdateEventDestinationOutcome;
      typedef Aws::Utils::Outcome<UpdatePhoneNumberResult, PinpointSMSVoiceV2Error> UpdatePhoneNumberOutcome;
      typedef Aws::Utils::Outcome<UpdatePoolResult, PinpointSMSVoiceV2Error> UpdatePoolOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateOriginationIdentityOutcome> AssociateOriginationIdentityOutcomeCallable;
      typedef std::future<CreateConfigurationSetOutcome> CreateConfigurationSetOutcomeCallable;
      typedef std::future<CreateEventDestinationOutcome> CreateEventDestinationOutcomeCallable;
      typedef std::future<CreateOptOutListOutcome> CreateOptOutListOutcomeCallable;
      typedef std::future<CreatePoolOutcome> CreatePoolOutcomeCallable;
      typedef std::future<DeleteConfigurationSetOutcome> DeleteConfigurationSetOutcomeCallable;
      typedef std::future<DeleteDefaultMessageTypeOutcome> DeleteDefaultMessageTypeOutcomeCallable;
      typedef std::future<DeleteDefaultSenderIdOutcome> DeleteDefaultSenderIdOutcomeCallable;
      typedef std::future<DeleteEventDestinationOutcome> DeleteEventDestinationOutcomeCallable;
      typedef std::future<DeleteKeywordOutcome> DeleteKeywordOutcomeCallable;
      typedef std::future<DeleteOptOutListOutcome> DeleteOptOutListOutcomeCallable;
      typedef std::future<DeleteOptedOutNumberOutcome> DeleteOptedOutNumberOutcomeCallable;
      typedef std::future<DeletePoolOutcome> DeletePoolOutcomeCallable;
      typedef std::future<DeleteTextMessageSpendLimitOverrideOutcome> DeleteTextMessageSpendLimitOverrideOutcomeCallable;
      typedef std::future<DeleteVoiceMessageSpendLimitOverrideOutcome> DeleteVoiceMessageSpendLimitOverrideOutcomeCallable;
      typedef std::future<DescribeAccountAttributesOutcome> DescribeAccountAttributesOutcomeCallable;
      typedef std::future<DescribeAccountLimitsOutcome> DescribeAccountLimitsOutcomeCallable;
      typedef std::future<DescribeConfigurationSetsOutcome> DescribeConfigurationSetsOutcomeCallable;
      typedef std::future<DescribeKeywordsOutcome> DescribeKeywordsOutcomeCallable;
      typedef std::future<DescribeOptOutListsOutcome> DescribeOptOutListsOutcomeCallable;
      typedef std::future<DescribeOptedOutNumbersOutcome> DescribeOptedOutNumbersOutcomeCallable;
      typedef std::future<DescribePhoneNumbersOutcome> DescribePhoneNumbersOutcomeCallable;
      typedef std::future<DescribePoolsOutcome> DescribePoolsOutcomeCallable;
      typedef std::future<DescribeSenderIdsOutcome> DescribeSenderIdsOutcomeCallable;
      typedef std::future<DescribeSpendLimitsOutcome> DescribeSpendLimitsOutcomeCallable;
      typedef std::future<DisassociateOriginationIdentityOutcome> DisassociateOriginationIdentityOutcomeCallable;
      typedef std::future<ListPoolOriginationIdentitiesOutcome> ListPoolOriginationIdentitiesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutKeywordOutcome> PutKeywordOutcomeCallable;
      typedef std::future<PutOptedOutNumberOutcome> PutOptedOutNumberOutcomeCallable;
      typedef std::future<ReleasePhoneNumberOutcome> ReleasePhoneNumberOutcomeCallable;
      typedef std::future<RequestPhoneNumberOutcome> RequestPhoneNumberOutcomeCallable;
      typedef std::future<SendTextMessageOutcome> SendTextMessageOutcomeCallable;
      typedef std::future<SendVoiceMessageOutcome> SendVoiceMessageOutcomeCallable;
      typedef std::future<SetDefaultMessageTypeOutcome> SetDefaultMessageTypeOutcomeCallable;
      typedef std::future<SetDefaultSenderIdOutcome> SetDefaultSenderIdOutcomeCallable;
      typedef std::future<SetTextMessageSpendLimitOverrideOutcome> SetTextMessageSpendLimitOverrideOutcomeCallable;
      typedef std::future<SetVoiceMessageSpendLimitOverrideOutcome> SetVoiceMessageSpendLimitOverrideOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateEventDestinationOutcome> UpdateEventDestinationOutcomeCallable;
      typedef std::future<UpdatePhoneNumberOutcome> UpdatePhoneNumberOutcomeCallable;
      typedef std::future<UpdatePoolOutcome> UpdatePoolOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class PinpointSMSVoiceV2Client;

    /* Service model async handlers definitions */
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::AssociateOriginationIdentityRequest&, const Model::AssociateOriginationIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateOriginationIdentityResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::CreateConfigurationSetRequest&, const Model::CreateConfigurationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfigurationSetResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::CreateEventDestinationRequest&, const Model::CreateEventDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventDestinationResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::CreateOptOutListRequest&, const Model::CreateOptOutListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOptOutListResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::CreatePoolRequest&, const Model::CreatePoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePoolResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DeleteConfigurationSetRequest&, const Model::DeleteConfigurationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigurationSetResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DeleteDefaultMessageTypeRequest&, const Model::DeleteDefaultMessageTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDefaultMessageTypeResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DeleteDefaultSenderIdRequest&, const Model::DeleteDefaultSenderIdOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDefaultSenderIdResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DeleteEventDestinationRequest&, const Model::DeleteEventDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventDestinationResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DeleteKeywordRequest&, const Model::DeleteKeywordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKeywordResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DeleteOptOutListRequest&, const Model::DeleteOptOutListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOptOutListResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DeleteOptedOutNumberRequest&, const Model::DeleteOptedOutNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOptedOutNumberResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DeletePoolRequest&, const Model::DeletePoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePoolResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DeleteTextMessageSpendLimitOverrideRequest&, const Model::DeleteTextMessageSpendLimitOverrideOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTextMessageSpendLimitOverrideResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DeleteVoiceMessageSpendLimitOverrideRequest&, const Model::DeleteVoiceMessageSpendLimitOverrideOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVoiceMessageSpendLimitOverrideResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DescribeAccountAttributesRequest&, const Model::DescribeAccountAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountAttributesResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DescribeAccountLimitsRequest&, const Model::DescribeAccountLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountLimitsResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DescribeConfigurationSetsRequest&, const Model::DescribeConfigurationSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigurationSetsResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DescribeKeywordsRequest&, const Model::DescribeKeywordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeKeywordsResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DescribeOptOutListsRequest&, const Model::DescribeOptOutListsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOptOutListsResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DescribeOptedOutNumbersRequest&, const Model::DescribeOptedOutNumbersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOptedOutNumbersResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DescribePhoneNumbersRequest&, const Model::DescribePhoneNumbersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePhoneNumbersResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DescribePoolsRequest&, const Model::DescribePoolsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePoolsResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DescribeSenderIdsRequest&, const Model::DescribeSenderIdsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSenderIdsResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DescribeSpendLimitsRequest&, const Model::DescribeSpendLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSpendLimitsResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DisassociateOriginationIdentityRequest&, const Model::DisassociateOriginationIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateOriginationIdentityResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::ListPoolOriginationIdentitiesRequest&, const Model::ListPoolOriginationIdentitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPoolOriginationIdentitiesResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::PutKeywordRequest&, const Model::PutKeywordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutKeywordResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::PutOptedOutNumberRequest&, const Model::PutOptedOutNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutOptedOutNumberResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::ReleasePhoneNumberRequest&, const Model::ReleasePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReleasePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::RequestPhoneNumberRequest&, const Model::RequestPhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RequestPhoneNumberResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::SendTextMessageRequest&, const Model::SendTextMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendTextMessageResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::SendVoiceMessageRequest&, const Model::SendVoiceMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendVoiceMessageResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::SetDefaultMessageTypeRequest&, const Model::SetDefaultMessageTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetDefaultMessageTypeResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::SetDefaultSenderIdRequest&, const Model::SetDefaultSenderIdOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetDefaultSenderIdResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::SetTextMessageSpendLimitOverrideRequest&, const Model::SetTextMessageSpendLimitOverrideOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetTextMessageSpendLimitOverrideResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::SetVoiceMessageSpendLimitOverrideRequest&, const Model::SetVoiceMessageSpendLimitOverrideOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetVoiceMessageSpendLimitOverrideResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::UpdateEventDestinationRequest&, const Model::UpdateEventDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEventDestinationResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::UpdatePhoneNumberRequest&, const Model::UpdatePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::UpdatePoolRequest&, const Model::UpdatePoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePoolResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
