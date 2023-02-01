/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/pinpoint/PinpointErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/pinpoint/PinpointEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in PinpointClient header */
#include <aws/pinpoint/model/CreateAppResult.h>
#include <aws/pinpoint/model/CreateCampaignResult.h>
#include <aws/pinpoint/model/CreateEmailTemplateResult.h>
#include <aws/pinpoint/model/CreateExportJobResult.h>
#include <aws/pinpoint/model/CreateImportJobResult.h>
#include <aws/pinpoint/model/CreateInAppTemplateResult.h>
#include <aws/pinpoint/model/CreateJourneyResult.h>
#include <aws/pinpoint/model/CreatePushTemplateResult.h>
#include <aws/pinpoint/model/CreateRecommenderConfigurationResult.h>
#include <aws/pinpoint/model/CreateSegmentResult.h>
#include <aws/pinpoint/model/CreateSmsTemplateResult.h>
#include <aws/pinpoint/model/CreateVoiceTemplateResult.h>
#include <aws/pinpoint/model/DeleteAdmChannelResult.h>
#include <aws/pinpoint/model/DeleteApnsChannelResult.h>
#include <aws/pinpoint/model/DeleteApnsSandboxChannelResult.h>
#include <aws/pinpoint/model/DeleteApnsVoipChannelResult.h>
#include <aws/pinpoint/model/DeleteApnsVoipSandboxChannelResult.h>
#include <aws/pinpoint/model/DeleteAppResult.h>
#include <aws/pinpoint/model/DeleteBaiduChannelResult.h>
#include <aws/pinpoint/model/DeleteCampaignResult.h>
#include <aws/pinpoint/model/DeleteEmailChannelResult.h>
#include <aws/pinpoint/model/DeleteEmailTemplateResult.h>
#include <aws/pinpoint/model/DeleteEndpointResult.h>
#include <aws/pinpoint/model/DeleteEventStreamResult.h>
#include <aws/pinpoint/model/DeleteGcmChannelResult.h>
#include <aws/pinpoint/model/DeleteInAppTemplateResult.h>
#include <aws/pinpoint/model/DeleteJourneyResult.h>
#include <aws/pinpoint/model/DeletePushTemplateResult.h>
#include <aws/pinpoint/model/DeleteRecommenderConfigurationResult.h>
#include <aws/pinpoint/model/DeleteSegmentResult.h>
#include <aws/pinpoint/model/DeleteSmsChannelResult.h>
#include <aws/pinpoint/model/DeleteSmsTemplateResult.h>
#include <aws/pinpoint/model/DeleteUserEndpointsResult.h>
#include <aws/pinpoint/model/DeleteVoiceChannelResult.h>
#include <aws/pinpoint/model/DeleteVoiceTemplateResult.h>
#include <aws/pinpoint/model/GetAdmChannelResult.h>
#include <aws/pinpoint/model/GetApnsChannelResult.h>
#include <aws/pinpoint/model/GetApnsSandboxChannelResult.h>
#include <aws/pinpoint/model/GetApnsVoipChannelResult.h>
#include <aws/pinpoint/model/GetApnsVoipSandboxChannelResult.h>
#include <aws/pinpoint/model/GetAppResult.h>
#include <aws/pinpoint/model/GetApplicationDateRangeKpiResult.h>
#include <aws/pinpoint/model/GetApplicationSettingsResult.h>
#include <aws/pinpoint/model/GetAppsResult.h>
#include <aws/pinpoint/model/GetBaiduChannelResult.h>
#include <aws/pinpoint/model/GetCampaignResult.h>
#include <aws/pinpoint/model/GetCampaignActivitiesResult.h>
#include <aws/pinpoint/model/GetCampaignDateRangeKpiResult.h>
#include <aws/pinpoint/model/GetCampaignVersionResult.h>
#include <aws/pinpoint/model/GetCampaignVersionsResult.h>
#include <aws/pinpoint/model/GetCampaignsResult.h>
#include <aws/pinpoint/model/GetChannelsResult.h>
#include <aws/pinpoint/model/GetEmailChannelResult.h>
#include <aws/pinpoint/model/GetEmailTemplateResult.h>
#include <aws/pinpoint/model/GetEndpointResult.h>
#include <aws/pinpoint/model/GetEventStreamResult.h>
#include <aws/pinpoint/model/GetExportJobResult.h>
#include <aws/pinpoint/model/GetExportJobsResult.h>
#include <aws/pinpoint/model/GetGcmChannelResult.h>
#include <aws/pinpoint/model/GetImportJobResult.h>
#include <aws/pinpoint/model/GetImportJobsResult.h>
#include <aws/pinpoint/model/GetInAppMessagesResult.h>
#include <aws/pinpoint/model/GetInAppTemplateResult.h>
#include <aws/pinpoint/model/GetJourneyResult.h>
#include <aws/pinpoint/model/GetJourneyDateRangeKpiResult.h>
#include <aws/pinpoint/model/GetJourneyExecutionActivityMetricsResult.h>
#include <aws/pinpoint/model/GetJourneyExecutionMetricsResult.h>
#include <aws/pinpoint/model/GetPushTemplateResult.h>
#include <aws/pinpoint/model/GetRecommenderConfigurationResult.h>
#include <aws/pinpoint/model/GetRecommenderConfigurationsResult.h>
#include <aws/pinpoint/model/GetSegmentResult.h>
#include <aws/pinpoint/model/GetSegmentExportJobsResult.h>
#include <aws/pinpoint/model/GetSegmentImportJobsResult.h>
#include <aws/pinpoint/model/GetSegmentVersionResult.h>
#include <aws/pinpoint/model/GetSegmentVersionsResult.h>
#include <aws/pinpoint/model/GetSegmentsResult.h>
#include <aws/pinpoint/model/GetSmsChannelResult.h>
#include <aws/pinpoint/model/GetSmsTemplateResult.h>
#include <aws/pinpoint/model/GetUserEndpointsResult.h>
#include <aws/pinpoint/model/GetVoiceChannelResult.h>
#include <aws/pinpoint/model/GetVoiceTemplateResult.h>
#include <aws/pinpoint/model/ListJourneysResult.h>
#include <aws/pinpoint/model/ListTagsForResourceResult.h>
#include <aws/pinpoint/model/ListTemplateVersionsResult.h>
#include <aws/pinpoint/model/ListTemplatesResult.h>
#include <aws/pinpoint/model/PhoneNumberValidateResult.h>
#include <aws/pinpoint/model/PutEventStreamResult.h>
#include <aws/pinpoint/model/PutEventsResult.h>
#include <aws/pinpoint/model/RemoveAttributesResult.h>
#include <aws/pinpoint/model/SendMessagesResult.h>
#include <aws/pinpoint/model/SendOTPMessageResult.h>
#include <aws/pinpoint/model/SendUsersMessagesResult.h>
#include <aws/pinpoint/model/UpdateAdmChannelResult.h>
#include <aws/pinpoint/model/UpdateApnsChannelResult.h>
#include <aws/pinpoint/model/UpdateApnsSandboxChannelResult.h>
#include <aws/pinpoint/model/UpdateApnsVoipChannelResult.h>
#include <aws/pinpoint/model/UpdateApnsVoipSandboxChannelResult.h>
#include <aws/pinpoint/model/UpdateApplicationSettingsResult.h>
#include <aws/pinpoint/model/UpdateBaiduChannelResult.h>
#include <aws/pinpoint/model/UpdateCampaignResult.h>
#include <aws/pinpoint/model/UpdateEmailChannelResult.h>
#include <aws/pinpoint/model/UpdateEmailTemplateResult.h>
#include <aws/pinpoint/model/UpdateEndpointResult.h>
#include <aws/pinpoint/model/UpdateEndpointsBatchResult.h>
#include <aws/pinpoint/model/UpdateGcmChannelResult.h>
#include <aws/pinpoint/model/UpdateInAppTemplateResult.h>
#include <aws/pinpoint/model/UpdateJourneyResult.h>
#include <aws/pinpoint/model/UpdateJourneyStateResult.h>
#include <aws/pinpoint/model/UpdatePushTemplateResult.h>
#include <aws/pinpoint/model/UpdateRecommenderConfigurationResult.h>
#include <aws/pinpoint/model/UpdateSegmentResult.h>
#include <aws/pinpoint/model/UpdateSmsChannelResult.h>
#include <aws/pinpoint/model/UpdateSmsTemplateResult.h>
#include <aws/pinpoint/model/UpdateTemplateActiveVersionResult.h>
#include <aws/pinpoint/model/UpdateVoiceChannelResult.h>
#include <aws/pinpoint/model/UpdateVoiceTemplateResult.h>
#include <aws/pinpoint/model/VerifyOTPMessageResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in PinpointClient header */

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

  namespace Pinpoint
  {
    using PinpointClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using PinpointEndpointProviderBase = Aws::Pinpoint::Endpoint::PinpointEndpointProviderBase;
    using PinpointEndpointProvider = Aws::Pinpoint::Endpoint::PinpointEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in PinpointClient header */
      class CreateAppRequest;
      class CreateCampaignRequest;
      class CreateEmailTemplateRequest;
      class CreateExportJobRequest;
      class CreateImportJobRequest;
      class CreateInAppTemplateRequest;
      class CreateJourneyRequest;
      class CreatePushTemplateRequest;
      class CreateRecommenderConfigurationRequest;
      class CreateSegmentRequest;
      class CreateSmsTemplateRequest;
      class CreateVoiceTemplateRequest;
      class DeleteAdmChannelRequest;
      class DeleteApnsChannelRequest;
      class DeleteApnsSandboxChannelRequest;
      class DeleteApnsVoipChannelRequest;
      class DeleteApnsVoipSandboxChannelRequest;
      class DeleteAppRequest;
      class DeleteBaiduChannelRequest;
      class DeleteCampaignRequest;
      class DeleteEmailChannelRequest;
      class DeleteEmailTemplateRequest;
      class DeleteEndpointRequest;
      class DeleteEventStreamRequest;
      class DeleteGcmChannelRequest;
      class DeleteInAppTemplateRequest;
      class DeleteJourneyRequest;
      class DeletePushTemplateRequest;
      class DeleteRecommenderConfigurationRequest;
      class DeleteSegmentRequest;
      class DeleteSmsChannelRequest;
      class DeleteSmsTemplateRequest;
      class DeleteUserEndpointsRequest;
      class DeleteVoiceChannelRequest;
      class DeleteVoiceTemplateRequest;
      class GetAdmChannelRequest;
      class GetApnsChannelRequest;
      class GetApnsSandboxChannelRequest;
      class GetApnsVoipChannelRequest;
      class GetApnsVoipSandboxChannelRequest;
      class GetAppRequest;
      class GetApplicationDateRangeKpiRequest;
      class GetApplicationSettingsRequest;
      class GetAppsRequest;
      class GetBaiduChannelRequest;
      class GetCampaignRequest;
      class GetCampaignActivitiesRequest;
      class GetCampaignDateRangeKpiRequest;
      class GetCampaignVersionRequest;
      class GetCampaignVersionsRequest;
      class GetCampaignsRequest;
      class GetChannelsRequest;
      class GetEmailChannelRequest;
      class GetEmailTemplateRequest;
      class GetEndpointRequest;
      class GetEventStreamRequest;
      class GetExportJobRequest;
      class GetExportJobsRequest;
      class GetGcmChannelRequest;
      class GetImportJobRequest;
      class GetImportJobsRequest;
      class GetInAppMessagesRequest;
      class GetInAppTemplateRequest;
      class GetJourneyRequest;
      class GetJourneyDateRangeKpiRequest;
      class GetJourneyExecutionActivityMetricsRequest;
      class GetJourneyExecutionMetricsRequest;
      class GetPushTemplateRequest;
      class GetRecommenderConfigurationRequest;
      class GetRecommenderConfigurationsRequest;
      class GetSegmentRequest;
      class GetSegmentExportJobsRequest;
      class GetSegmentImportJobsRequest;
      class GetSegmentVersionRequest;
      class GetSegmentVersionsRequest;
      class GetSegmentsRequest;
      class GetSmsChannelRequest;
      class GetSmsTemplateRequest;
      class GetUserEndpointsRequest;
      class GetVoiceChannelRequest;
      class GetVoiceTemplateRequest;
      class ListJourneysRequest;
      class ListTagsForResourceRequest;
      class ListTemplateVersionsRequest;
      class ListTemplatesRequest;
      class PhoneNumberValidateRequest;
      class PutEventStreamRequest;
      class PutEventsRequest;
      class RemoveAttributesRequest;
      class SendMessagesRequest;
      class SendOTPMessageRequest;
      class SendUsersMessagesRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAdmChannelRequest;
      class UpdateApnsChannelRequest;
      class UpdateApnsSandboxChannelRequest;
      class UpdateApnsVoipChannelRequest;
      class UpdateApnsVoipSandboxChannelRequest;
      class UpdateApplicationSettingsRequest;
      class UpdateBaiduChannelRequest;
      class UpdateCampaignRequest;
      class UpdateEmailChannelRequest;
      class UpdateEmailTemplateRequest;
      class UpdateEndpointRequest;
      class UpdateEndpointsBatchRequest;
      class UpdateGcmChannelRequest;
      class UpdateInAppTemplateRequest;
      class UpdateJourneyRequest;
      class UpdateJourneyStateRequest;
      class UpdatePushTemplateRequest;
      class UpdateRecommenderConfigurationRequest;
      class UpdateSegmentRequest;
      class UpdateSmsChannelRequest;
      class UpdateSmsTemplateRequest;
      class UpdateTemplateActiveVersionRequest;
      class UpdateVoiceChannelRequest;
      class UpdateVoiceTemplateRequest;
      class VerifyOTPMessageRequest;
      /* End of service model forward declarations required in PinpointClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateAppResult, PinpointError> CreateAppOutcome;
      typedef Aws::Utils::Outcome<CreateCampaignResult, PinpointError> CreateCampaignOutcome;
      typedef Aws::Utils::Outcome<CreateEmailTemplateResult, PinpointError> CreateEmailTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateExportJobResult, PinpointError> CreateExportJobOutcome;
      typedef Aws::Utils::Outcome<CreateImportJobResult, PinpointError> CreateImportJobOutcome;
      typedef Aws::Utils::Outcome<CreateInAppTemplateResult, PinpointError> CreateInAppTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateJourneyResult, PinpointError> CreateJourneyOutcome;
      typedef Aws::Utils::Outcome<CreatePushTemplateResult, PinpointError> CreatePushTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateRecommenderConfigurationResult, PinpointError> CreateRecommenderConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateSegmentResult, PinpointError> CreateSegmentOutcome;
      typedef Aws::Utils::Outcome<CreateSmsTemplateResult, PinpointError> CreateSmsTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateVoiceTemplateResult, PinpointError> CreateVoiceTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteAdmChannelResult, PinpointError> DeleteAdmChannelOutcome;
      typedef Aws::Utils::Outcome<DeleteApnsChannelResult, PinpointError> DeleteApnsChannelOutcome;
      typedef Aws::Utils::Outcome<DeleteApnsSandboxChannelResult, PinpointError> DeleteApnsSandboxChannelOutcome;
      typedef Aws::Utils::Outcome<DeleteApnsVoipChannelResult, PinpointError> DeleteApnsVoipChannelOutcome;
      typedef Aws::Utils::Outcome<DeleteApnsVoipSandboxChannelResult, PinpointError> DeleteApnsVoipSandboxChannelOutcome;
      typedef Aws::Utils::Outcome<DeleteAppResult, PinpointError> DeleteAppOutcome;
      typedef Aws::Utils::Outcome<DeleteBaiduChannelResult, PinpointError> DeleteBaiduChannelOutcome;
      typedef Aws::Utils::Outcome<DeleteCampaignResult, PinpointError> DeleteCampaignOutcome;
      typedef Aws::Utils::Outcome<DeleteEmailChannelResult, PinpointError> DeleteEmailChannelOutcome;
      typedef Aws::Utils::Outcome<DeleteEmailTemplateResult, PinpointError> DeleteEmailTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteEndpointResult, PinpointError> DeleteEndpointOutcome;
      typedef Aws::Utils::Outcome<DeleteEventStreamResult, PinpointError> DeleteEventStreamOutcome;
      typedef Aws::Utils::Outcome<DeleteGcmChannelResult, PinpointError> DeleteGcmChannelOutcome;
      typedef Aws::Utils::Outcome<DeleteInAppTemplateResult, PinpointError> DeleteInAppTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteJourneyResult, PinpointError> DeleteJourneyOutcome;
      typedef Aws::Utils::Outcome<DeletePushTemplateResult, PinpointError> DeletePushTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteRecommenderConfigurationResult, PinpointError> DeleteRecommenderConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteSegmentResult, PinpointError> DeleteSegmentOutcome;
      typedef Aws::Utils::Outcome<DeleteSmsChannelResult, PinpointError> DeleteSmsChannelOutcome;
      typedef Aws::Utils::Outcome<DeleteSmsTemplateResult, PinpointError> DeleteSmsTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteUserEndpointsResult, PinpointError> DeleteUserEndpointsOutcome;
      typedef Aws::Utils::Outcome<DeleteVoiceChannelResult, PinpointError> DeleteVoiceChannelOutcome;
      typedef Aws::Utils::Outcome<DeleteVoiceTemplateResult, PinpointError> DeleteVoiceTemplateOutcome;
      typedef Aws::Utils::Outcome<GetAdmChannelResult, PinpointError> GetAdmChannelOutcome;
      typedef Aws::Utils::Outcome<GetApnsChannelResult, PinpointError> GetApnsChannelOutcome;
      typedef Aws::Utils::Outcome<GetApnsSandboxChannelResult, PinpointError> GetApnsSandboxChannelOutcome;
      typedef Aws::Utils::Outcome<GetApnsVoipChannelResult, PinpointError> GetApnsVoipChannelOutcome;
      typedef Aws::Utils::Outcome<GetApnsVoipSandboxChannelResult, PinpointError> GetApnsVoipSandboxChannelOutcome;
      typedef Aws::Utils::Outcome<GetAppResult, PinpointError> GetAppOutcome;
      typedef Aws::Utils::Outcome<GetApplicationDateRangeKpiResult, PinpointError> GetApplicationDateRangeKpiOutcome;
      typedef Aws::Utils::Outcome<GetApplicationSettingsResult, PinpointError> GetApplicationSettingsOutcome;
      typedef Aws::Utils::Outcome<GetAppsResult, PinpointError> GetAppsOutcome;
      typedef Aws::Utils::Outcome<GetBaiduChannelResult, PinpointError> GetBaiduChannelOutcome;
      typedef Aws::Utils::Outcome<GetCampaignResult, PinpointError> GetCampaignOutcome;
      typedef Aws::Utils::Outcome<GetCampaignActivitiesResult, PinpointError> GetCampaignActivitiesOutcome;
      typedef Aws::Utils::Outcome<GetCampaignDateRangeKpiResult, PinpointError> GetCampaignDateRangeKpiOutcome;
      typedef Aws::Utils::Outcome<GetCampaignVersionResult, PinpointError> GetCampaignVersionOutcome;
      typedef Aws::Utils::Outcome<GetCampaignVersionsResult, PinpointError> GetCampaignVersionsOutcome;
      typedef Aws::Utils::Outcome<GetCampaignsResult, PinpointError> GetCampaignsOutcome;
      typedef Aws::Utils::Outcome<GetChannelsResult, PinpointError> GetChannelsOutcome;
      typedef Aws::Utils::Outcome<GetEmailChannelResult, PinpointError> GetEmailChannelOutcome;
      typedef Aws::Utils::Outcome<GetEmailTemplateResult, PinpointError> GetEmailTemplateOutcome;
      typedef Aws::Utils::Outcome<GetEndpointResult, PinpointError> GetEndpointOutcome;
      typedef Aws::Utils::Outcome<GetEventStreamResult, PinpointError> GetEventStreamOutcome;
      typedef Aws::Utils::Outcome<GetExportJobResult, PinpointError> GetExportJobOutcome;
      typedef Aws::Utils::Outcome<GetExportJobsResult, PinpointError> GetExportJobsOutcome;
      typedef Aws::Utils::Outcome<GetGcmChannelResult, PinpointError> GetGcmChannelOutcome;
      typedef Aws::Utils::Outcome<GetImportJobResult, PinpointError> GetImportJobOutcome;
      typedef Aws::Utils::Outcome<GetImportJobsResult, PinpointError> GetImportJobsOutcome;
      typedef Aws::Utils::Outcome<GetInAppMessagesResult, PinpointError> GetInAppMessagesOutcome;
      typedef Aws::Utils::Outcome<GetInAppTemplateResult, PinpointError> GetInAppTemplateOutcome;
      typedef Aws::Utils::Outcome<GetJourneyResult, PinpointError> GetJourneyOutcome;
      typedef Aws::Utils::Outcome<GetJourneyDateRangeKpiResult, PinpointError> GetJourneyDateRangeKpiOutcome;
      typedef Aws::Utils::Outcome<GetJourneyExecutionActivityMetricsResult, PinpointError> GetJourneyExecutionActivityMetricsOutcome;
      typedef Aws::Utils::Outcome<GetJourneyExecutionMetricsResult, PinpointError> GetJourneyExecutionMetricsOutcome;
      typedef Aws::Utils::Outcome<GetPushTemplateResult, PinpointError> GetPushTemplateOutcome;
      typedef Aws::Utils::Outcome<GetRecommenderConfigurationResult, PinpointError> GetRecommenderConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetRecommenderConfigurationsResult, PinpointError> GetRecommenderConfigurationsOutcome;
      typedef Aws::Utils::Outcome<GetSegmentResult, PinpointError> GetSegmentOutcome;
      typedef Aws::Utils::Outcome<GetSegmentExportJobsResult, PinpointError> GetSegmentExportJobsOutcome;
      typedef Aws::Utils::Outcome<GetSegmentImportJobsResult, PinpointError> GetSegmentImportJobsOutcome;
      typedef Aws::Utils::Outcome<GetSegmentVersionResult, PinpointError> GetSegmentVersionOutcome;
      typedef Aws::Utils::Outcome<GetSegmentVersionsResult, PinpointError> GetSegmentVersionsOutcome;
      typedef Aws::Utils::Outcome<GetSegmentsResult, PinpointError> GetSegmentsOutcome;
      typedef Aws::Utils::Outcome<GetSmsChannelResult, PinpointError> GetSmsChannelOutcome;
      typedef Aws::Utils::Outcome<GetSmsTemplateResult, PinpointError> GetSmsTemplateOutcome;
      typedef Aws::Utils::Outcome<GetUserEndpointsResult, PinpointError> GetUserEndpointsOutcome;
      typedef Aws::Utils::Outcome<GetVoiceChannelResult, PinpointError> GetVoiceChannelOutcome;
      typedef Aws::Utils::Outcome<GetVoiceTemplateResult, PinpointError> GetVoiceTemplateOutcome;
      typedef Aws::Utils::Outcome<ListJourneysResult, PinpointError> ListJourneysOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, PinpointError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTemplateVersionsResult, PinpointError> ListTemplateVersionsOutcome;
      typedef Aws::Utils::Outcome<ListTemplatesResult, PinpointError> ListTemplatesOutcome;
      typedef Aws::Utils::Outcome<PhoneNumberValidateResult, PinpointError> PhoneNumberValidateOutcome;
      typedef Aws::Utils::Outcome<PutEventStreamResult, PinpointError> PutEventStreamOutcome;
      typedef Aws::Utils::Outcome<PutEventsResult, PinpointError> PutEventsOutcome;
      typedef Aws::Utils::Outcome<RemoveAttributesResult, PinpointError> RemoveAttributesOutcome;
      typedef Aws::Utils::Outcome<SendMessagesResult, PinpointError> SendMessagesOutcome;
      typedef Aws::Utils::Outcome<SendOTPMessageResult, PinpointError> SendOTPMessageOutcome;
      typedef Aws::Utils::Outcome<SendUsersMessagesResult, PinpointError> SendUsersMessagesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PinpointError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PinpointError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAdmChannelResult, PinpointError> UpdateAdmChannelOutcome;
      typedef Aws::Utils::Outcome<UpdateApnsChannelResult, PinpointError> UpdateApnsChannelOutcome;
      typedef Aws::Utils::Outcome<UpdateApnsSandboxChannelResult, PinpointError> UpdateApnsSandboxChannelOutcome;
      typedef Aws::Utils::Outcome<UpdateApnsVoipChannelResult, PinpointError> UpdateApnsVoipChannelOutcome;
      typedef Aws::Utils::Outcome<UpdateApnsVoipSandboxChannelResult, PinpointError> UpdateApnsVoipSandboxChannelOutcome;
      typedef Aws::Utils::Outcome<UpdateApplicationSettingsResult, PinpointError> UpdateApplicationSettingsOutcome;
      typedef Aws::Utils::Outcome<UpdateBaiduChannelResult, PinpointError> UpdateBaiduChannelOutcome;
      typedef Aws::Utils::Outcome<UpdateCampaignResult, PinpointError> UpdateCampaignOutcome;
      typedef Aws::Utils::Outcome<UpdateEmailChannelResult, PinpointError> UpdateEmailChannelOutcome;
      typedef Aws::Utils::Outcome<UpdateEmailTemplateResult, PinpointError> UpdateEmailTemplateOutcome;
      typedef Aws::Utils::Outcome<UpdateEndpointResult, PinpointError> UpdateEndpointOutcome;
      typedef Aws::Utils::Outcome<UpdateEndpointsBatchResult, PinpointError> UpdateEndpointsBatchOutcome;
      typedef Aws::Utils::Outcome<UpdateGcmChannelResult, PinpointError> UpdateGcmChannelOutcome;
      typedef Aws::Utils::Outcome<UpdateInAppTemplateResult, PinpointError> UpdateInAppTemplateOutcome;
      typedef Aws::Utils::Outcome<UpdateJourneyResult, PinpointError> UpdateJourneyOutcome;
      typedef Aws::Utils::Outcome<UpdateJourneyStateResult, PinpointError> UpdateJourneyStateOutcome;
      typedef Aws::Utils::Outcome<UpdatePushTemplateResult, PinpointError> UpdatePushTemplateOutcome;
      typedef Aws::Utils::Outcome<UpdateRecommenderConfigurationResult, PinpointError> UpdateRecommenderConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateSegmentResult, PinpointError> UpdateSegmentOutcome;
      typedef Aws::Utils::Outcome<UpdateSmsChannelResult, PinpointError> UpdateSmsChannelOutcome;
      typedef Aws::Utils::Outcome<UpdateSmsTemplateResult, PinpointError> UpdateSmsTemplateOutcome;
      typedef Aws::Utils::Outcome<UpdateTemplateActiveVersionResult, PinpointError> UpdateTemplateActiveVersionOutcome;
      typedef Aws::Utils::Outcome<UpdateVoiceChannelResult, PinpointError> UpdateVoiceChannelOutcome;
      typedef Aws::Utils::Outcome<UpdateVoiceTemplateResult, PinpointError> UpdateVoiceTemplateOutcome;
      typedef Aws::Utils::Outcome<VerifyOTPMessageResult, PinpointError> VerifyOTPMessageOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateAppOutcome> CreateAppOutcomeCallable;
      typedef std::future<CreateCampaignOutcome> CreateCampaignOutcomeCallable;
      typedef std::future<CreateEmailTemplateOutcome> CreateEmailTemplateOutcomeCallable;
      typedef std::future<CreateExportJobOutcome> CreateExportJobOutcomeCallable;
      typedef std::future<CreateImportJobOutcome> CreateImportJobOutcomeCallable;
      typedef std::future<CreateInAppTemplateOutcome> CreateInAppTemplateOutcomeCallable;
      typedef std::future<CreateJourneyOutcome> CreateJourneyOutcomeCallable;
      typedef std::future<CreatePushTemplateOutcome> CreatePushTemplateOutcomeCallable;
      typedef std::future<CreateRecommenderConfigurationOutcome> CreateRecommenderConfigurationOutcomeCallable;
      typedef std::future<CreateSegmentOutcome> CreateSegmentOutcomeCallable;
      typedef std::future<CreateSmsTemplateOutcome> CreateSmsTemplateOutcomeCallable;
      typedef std::future<CreateVoiceTemplateOutcome> CreateVoiceTemplateOutcomeCallable;
      typedef std::future<DeleteAdmChannelOutcome> DeleteAdmChannelOutcomeCallable;
      typedef std::future<DeleteApnsChannelOutcome> DeleteApnsChannelOutcomeCallable;
      typedef std::future<DeleteApnsSandboxChannelOutcome> DeleteApnsSandboxChannelOutcomeCallable;
      typedef std::future<DeleteApnsVoipChannelOutcome> DeleteApnsVoipChannelOutcomeCallable;
      typedef std::future<DeleteApnsVoipSandboxChannelOutcome> DeleteApnsVoipSandboxChannelOutcomeCallable;
      typedef std::future<DeleteAppOutcome> DeleteAppOutcomeCallable;
      typedef std::future<DeleteBaiduChannelOutcome> DeleteBaiduChannelOutcomeCallable;
      typedef std::future<DeleteCampaignOutcome> DeleteCampaignOutcomeCallable;
      typedef std::future<DeleteEmailChannelOutcome> DeleteEmailChannelOutcomeCallable;
      typedef std::future<DeleteEmailTemplateOutcome> DeleteEmailTemplateOutcomeCallable;
      typedef std::future<DeleteEndpointOutcome> DeleteEndpointOutcomeCallable;
      typedef std::future<DeleteEventStreamOutcome> DeleteEventStreamOutcomeCallable;
      typedef std::future<DeleteGcmChannelOutcome> DeleteGcmChannelOutcomeCallable;
      typedef std::future<DeleteInAppTemplateOutcome> DeleteInAppTemplateOutcomeCallable;
      typedef std::future<DeleteJourneyOutcome> DeleteJourneyOutcomeCallable;
      typedef std::future<DeletePushTemplateOutcome> DeletePushTemplateOutcomeCallable;
      typedef std::future<DeleteRecommenderConfigurationOutcome> DeleteRecommenderConfigurationOutcomeCallable;
      typedef std::future<DeleteSegmentOutcome> DeleteSegmentOutcomeCallable;
      typedef std::future<DeleteSmsChannelOutcome> DeleteSmsChannelOutcomeCallable;
      typedef std::future<DeleteSmsTemplateOutcome> DeleteSmsTemplateOutcomeCallable;
      typedef std::future<DeleteUserEndpointsOutcome> DeleteUserEndpointsOutcomeCallable;
      typedef std::future<DeleteVoiceChannelOutcome> DeleteVoiceChannelOutcomeCallable;
      typedef std::future<DeleteVoiceTemplateOutcome> DeleteVoiceTemplateOutcomeCallable;
      typedef std::future<GetAdmChannelOutcome> GetAdmChannelOutcomeCallable;
      typedef std::future<GetApnsChannelOutcome> GetApnsChannelOutcomeCallable;
      typedef std::future<GetApnsSandboxChannelOutcome> GetApnsSandboxChannelOutcomeCallable;
      typedef std::future<GetApnsVoipChannelOutcome> GetApnsVoipChannelOutcomeCallable;
      typedef std::future<GetApnsVoipSandboxChannelOutcome> GetApnsVoipSandboxChannelOutcomeCallable;
      typedef std::future<GetAppOutcome> GetAppOutcomeCallable;
      typedef std::future<GetApplicationDateRangeKpiOutcome> GetApplicationDateRangeKpiOutcomeCallable;
      typedef std::future<GetApplicationSettingsOutcome> GetApplicationSettingsOutcomeCallable;
      typedef std::future<GetAppsOutcome> GetAppsOutcomeCallable;
      typedef std::future<GetBaiduChannelOutcome> GetBaiduChannelOutcomeCallable;
      typedef std::future<GetCampaignOutcome> GetCampaignOutcomeCallable;
      typedef std::future<GetCampaignActivitiesOutcome> GetCampaignActivitiesOutcomeCallable;
      typedef std::future<GetCampaignDateRangeKpiOutcome> GetCampaignDateRangeKpiOutcomeCallable;
      typedef std::future<GetCampaignVersionOutcome> GetCampaignVersionOutcomeCallable;
      typedef std::future<GetCampaignVersionsOutcome> GetCampaignVersionsOutcomeCallable;
      typedef std::future<GetCampaignsOutcome> GetCampaignsOutcomeCallable;
      typedef std::future<GetChannelsOutcome> GetChannelsOutcomeCallable;
      typedef std::future<GetEmailChannelOutcome> GetEmailChannelOutcomeCallable;
      typedef std::future<GetEmailTemplateOutcome> GetEmailTemplateOutcomeCallable;
      typedef std::future<GetEndpointOutcome> GetEndpointOutcomeCallable;
      typedef std::future<GetEventStreamOutcome> GetEventStreamOutcomeCallable;
      typedef std::future<GetExportJobOutcome> GetExportJobOutcomeCallable;
      typedef std::future<GetExportJobsOutcome> GetExportJobsOutcomeCallable;
      typedef std::future<GetGcmChannelOutcome> GetGcmChannelOutcomeCallable;
      typedef std::future<GetImportJobOutcome> GetImportJobOutcomeCallable;
      typedef std::future<GetImportJobsOutcome> GetImportJobsOutcomeCallable;
      typedef std::future<GetInAppMessagesOutcome> GetInAppMessagesOutcomeCallable;
      typedef std::future<GetInAppTemplateOutcome> GetInAppTemplateOutcomeCallable;
      typedef std::future<GetJourneyOutcome> GetJourneyOutcomeCallable;
      typedef std::future<GetJourneyDateRangeKpiOutcome> GetJourneyDateRangeKpiOutcomeCallable;
      typedef std::future<GetJourneyExecutionActivityMetricsOutcome> GetJourneyExecutionActivityMetricsOutcomeCallable;
      typedef std::future<GetJourneyExecutionMetricsOutcome> GetJourneyExecutionMetricsOutcomeCallable;
      typedef std::future<GetPushTemplateOutcome> GetPushTemplateOutcomeCallable;
      typedef std::future<GetRecommenderConfigurationOutcome> GetRecommenderConfigurationOutcomeCallable;
      typedef std::future<GetRecommenderConfigurationsOutcome> GetRecommenderConfigurationsOutcomeCallable;
      typedef std::future<GetSegmentOutcome> GetSegmentOutcomeCallable;
      typedef std::future<GetSegmentExportJobsOutcome> GetSegmentExportJobsOutcomeCallable;
      typedef std::future<GetSegmentImportJobsOutcome> GetSegmentImportJobsOutcomeCallable;
      typedef std::future<GetSegmentVersionOutcome> GetSegmentVersionOutcomeCallable;
      typedef std::future<GetSegmentVersionsOutcome> GetSegmentVersionsOutcomeCallable;
      typedef std::future<GetSegmentsOutcome> GetSegmentsOutcomeCallable;
      typedef std::future<GetSmsChannelOutcome> GetSmsChannelOutcomeCallable;
      typedef std::future<GetSmsTemplateOutcome> GetSmsTemplateOutcomeCallable;
      typedef std::future<GetUserEndpointsOutcome> GetUserEndpointsOutcomeCallable;
      typedef std::future<GetVoiceChannelOutcome> GetVoiceChannelOutcomeCallable;
      typedef std::future<GetVoiceTemplateOutcome> GetVoiceTemplateOutcomeCallable;
      typedef std::future<ListJourneysOutcome> ListJourneysOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTemplateVersionsOutcome> ListTemplateVersionsOutcomeCallable;
      typedef std::future<ListTemplatesOutcome> ListTemplatesOutcomeCallable;
      typedef std::future<PhoneNumberValidateOutcome> PhoneNumberValidateOutcomeCallable;
      typedef std::future<PutEventStreamOutcome> PutEventStreamOutcomeCallable;
      typedef std::future<PutEventsOutcome> PutEventsOutcomeCallable;
      typedef std::future<RemoveAttributesOutcome> RemoveAttributesOutcomeCallable;
      typedef std::future<SendMessagesOutcome> SendMessagesOutcomeCallable;
      typedef std::future<SendOTPMessageOutcome> SendOTPMessageOutcomeCallable;
      typedef std::future<SendUsersMessagesOutcome> SendUsersMessagesOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAdmChannelOutcome> UpdateAdmChannelOutcomeCallable;
      typedef std::future<UpdateApnsChannelOutcome> UpdateApnsChannelOutcomeCallable;
      typedef std::future<UpdateApnsSandboxChannelOutcome> UpdateApnsSandboxChannelOutcomeCallable;
      typedef std::future<UpdateApnsVoipChannelOutcome> UpdateApnsVoipChannelOutcomeCallable;
      typedef std::future<UpdateApnsVoipSandboxChannelOutcome> UpdateApnsVoipSandboxChannelOutcomeCallable;
      typedef std::future<UpdateApplicationSettingsOutcome> UpdateApplicationSettingsOutcomeCallable;
      typedef std::future<UpdateBaiduChannelOutcome> UpdateBaiduChannelOutcomeCallable;
      typedef std::future<UpdateCampaignOutcome> UpdateCampaignOutcomeCallable;
      typedef std::future<UpdateEmailChannelOutcome> UpdateEmailChannelOutcomeCallable;
      typedef std::future<UpdateEmailTemplateOutcome> UpdateEmailTemplateOutcomeCallable;
      typedef std::future<UpdateEndpointOutcome> UpdateEndpointOutcomeCallable;
      typedef std::future<UpdateEndpointsBatchOutcome> UpdateEndpointsBatchOutcomeCallable;
      typedef std::future<UpdateGcmChannelOutcome> UpdateGcmChannelOutcomeCallable;
      typedef std::future<UpdateInAppTemplateOutcome> UpdateInAppTemplateOutcomeCallable;
      typedef std::future<UpdateJourneyOutcome> UpdateJourneyOutcomeCallable;
      typedef std::future<UpdateJourneyStateOutcome> UpdateJourneyStateOutcomeCallable;
      typedef std::future<UpdatePushTemplateOutcome> UpdatePushTemplateOutcomeCallable;
      typedef std::future<UpdateRecommenderConfigurationOutcome> UpdateRecommenderConfigurationOutcomeCallable;
      typedef std::future<UpdateSegmentOutcome> UpdateSegmentOutcomeCallable;
      typedef std::future<UpdateSmsChannelOutcome> UpdateSmsChannelOutcomeCallable;
      typedef std::future<UpdateSmsTemplateOutcome> UpdateSmsTemplateOutcomeCallable;
      typedef std::future<UpdateTemplateActiveVersionOutcome> UpdateTemplateActiveVersionOutcomeCallable;
      typedef std::future<UpdateVoiceChannelOutcome> UpdateVoiceChannelOutcomeCallable;
      typedef std::future<UpdateVoiceTemplateOutcome> UpdateVoiceTemplateOutcomeCallable;
      typedef std::future<VerifyOTPMessageOutcome> VerifyOTPMessageOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class PinpointClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const PinpointClient*, const Model::CreateAppRequest&, const Model::CreateAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAppResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::CreateCampaignRequest&, const Model::CreateCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCampaignResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::CreateEmailTemplateRequest&, const Model::CreateEmailTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEmailTemplateResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::CreateExportJobRequest&, const Model::CreateExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateExportJobResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::CreateImportJobRequest&, const Model::CreateImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateImportJobResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::CreateInAppTemplateRequest&, const Model::CreateInAppTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInAppTemplateResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::CreateJourneyRequest&, const Model::CreateJourneyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJourneyResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::CreatePushTemplateRequest&, const Model::CreatePushTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePushTemplateResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::CreateRecommenderConfigurationRequest&, const Model::CreateRecommenderConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRecommenderConfigurationResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::CreateSegmentRequest&, const Model::CreateSegmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSegmentResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::CreateSmsTemplateRequest&, const Model::CreateSmsTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSmsTemplateResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::CreateVoiceTemplateRequest&, const Model::CreateVoiceTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVoiceTemplateResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteAdmChannelRequest&, const Model::DeleteAdmChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAdmChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteApnsChannelRequest&, const Model::DeleteApnsChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApnsChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteApnsSandboxChannelRequest&, const Model::DeleteApnsSandboxChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApnsSandboxChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteApnsVoipChannelRequest&, const Model::DeleteApnsVoipChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApnsVoipChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteApnsVoipSandboxChannelRequest&, const Model::DeleteApnsVoipSandboxChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApnsVoipSandboxChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteAppRequest&, const Model::DeleteAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteBaiduChannelRequest&, const Model::DeleteBaiduChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBaiduChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteCampaignRequest&, const Model::DeleteCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCampaignResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteEmailChannelRequest&, const Model::DeleteEmailChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEmailChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteEmailTemplateRequest&, const Model::DeleteEmailTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEmailTemplateResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteEndpointRequest&, const Model::DeleteEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEndpointResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteEventStreamRequest&, const Model::DeleteEventStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventStreamResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteGcmChannelRequest&, const Model::DeleteGcmChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGcmChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteInAppTemplateRequest&, const Model::DeleteInAppTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInAppTemplateResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteJourneyRequest&, const Model::DeleteJourneyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteJourneyResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeletePushTemplateRequest&, const Model::DeletePushTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePushTemplateResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteRecommenderConfigurationRequest&, const Model::DeleteRecommenderConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRecommenderConfigurationResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteSegmentRequest&, const Model::DeleteSegmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSegmentResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteSmsChannelRequest&, const Model::DeleteSmsChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSmsChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteSmsTemplateRequest&, const Model::DeleteSmsTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSmsTemplateResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteUserEndpointsRequest&, const Model::DeleteUserEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserEndpointsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteVoiceChannelRequest&, const Model::DeleteVoiceChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVoiceChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteVoiceTemplateRequest&, const Model::DeleteVoiceTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVoiceTemplateResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetAdmChannelRequest&, const Model::GetAdmChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAdmChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetApnsChannelRequest&, const Model::GetApnsChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApnsChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetApnsSandboxChannelRequest&, const Model::GetApnsSandboxChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApnsSandboxChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetApnsVoipChannelRequest&, const Model::GetApnsVoipChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApnsVoipChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetApnsVoipSandboxChannelRequest&, const Model::GetApnsVoipSandboxChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApnsVoipSandboxChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetAppRequest&, const Model::GetAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAppResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetApplicationDateRangeKpiRequest&, const Model::GetApplicationDateRangeKpiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationDateRangeKpiResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetApplicationSettingsRequest&, const Model::GetApplicationSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationSettingsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetAppsRequest&, const Model::GetAppsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAppsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetBaiduChannelRequest&, const Model::GetBaiduChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBaiduChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetCampaignRequest&, const Model::GetCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCampaignResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetCampaignActivitiesRequest&, const Model::GetCampaignActivitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCampaignActivitiesResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetCampaignDateRangeKpiRequest&, const Model::GetCampaignDateRangeKpiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCampaignDateRangeKpiResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetCampaignVersionRequest&, const Model::GetCampaignVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCampaignVersionResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetCampaignVersionsRequest&, const Model::GetCampaignVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCampaignVersionsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetCampaignsRequest&, const Model::GetCampaignsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCampaignsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetChannelsRequest&, const Model::GetChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChannelsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetEmailChannelRequest&, const Model::GetEmailChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEmailChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetEmailTemplateRequest&, const Model::GetEmailTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEmailTemplateResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetEndpointRequest&, const Model::GetEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEndpointResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetEventStreamRequest&, const Model::GetEventStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventStreamResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetExportJobRequest&, const Model::GetExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExportJobResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetExportJobsRequest&, const Model::GetExportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExportJobsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetGcmChannelRequest&, const Model::GetGcmChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGcmChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetImportJobRequest&, const Model::GetImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImportJobResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetImportJobsRequest&, const Model::GetImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImportJobsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetInAppMessagesRequest&, const Model::GetInAppMessagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInAppMessagesResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetInAppTemplateRequest&, const Model::GetInAppTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInAppTemplateResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetJourneyRequest&, const Model::GetJourneyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJourneyResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetJourneyDateRangeKpiRequest&, const Model::GetJourneyDateRangeKpiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJourneyDateRangeKpiResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetJourneyExecutionActivityMetricsRequest&, const Model::GetJourneyExecutionActivityMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJourneyExecutionActivityMetricsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetJourneyExecutionMetricsRequest&, const Model::GetJourneyExecutionMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJourneyExecutionMetricsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetPushTemplateRequest&, const Model::GetPushTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPushTemplateResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetRecommenderConfigurationRequest&, const Model::GetRecommenderConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecommenderConfigurationResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetRecommenderConfigurationsRequest&, const Model::GetRecommenderConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecommenderConfigurationsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetSegmentRequest&, const Model::GetSegmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSegmentResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetSegmentExportJobsRequest&, const Model::GetSegmentExportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSegmentExportJobsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetSegmentImportJobsRequest&, const Model::GetSegmentImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSegmentImportJobsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetSegmentVersionRequest&, const Model::GetSegmentVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSegmentVersionResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetSegmentVersionsRequest&, const Model::GetSegmentVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSegmentVersionsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetSegmentsRequest&, const Model::GetSegmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSegmentsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetSmsChannelRequest&, const Model::GetSmsChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSmsChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetSmsTemplateRequest&, const Model::GetSmsTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSmsTemplateResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetUserEndpointsRequest&, const Model::GetUserEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserEndpointsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetVoiceChannelRequest&, const Model::GetVoiceChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVoiceChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetVoiceTemplateRequest&, const Model::GetVoiceTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVoiceTemplateResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::ListJourneysRequest&, const Model::ListJourneysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJourneysResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::ListTemplateVersionsRequest&, const Model::ListTemplateVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTemplateVersionsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::ListTemplatesRequest&, const Model::ListTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTemplatesResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::PhoneNumberValidateRequest&, const Model::PhoneNumberValidateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PhoneNumberValidateResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::PutEventStreamRequest&, const Model::PutEventStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEventStreamResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::PutEventsRequest&, const Model::PutEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEventsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::RemoveAttributesRequest&, const Model::RemoveAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveAttributesResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::SendMessagesRequest&, const Model::SendMessagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendMessagesResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::SendOTPMessageRequest&, const Model::SendOTPMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendOTPMessageResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::SendUsersMessagesRequest&, const Model::SendUsersMessagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendUsersMessagesResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateAdmChannelRequest&, const Model::UpdateAdmChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAdmChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateApnsChannelRequest&, const Model::UpdateApnsChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApnsChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateApnsSandboxChannelRequest&, const Model::UpdateApnsSandboxChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApnsSandboxChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateApnsVoipChannelRequest&, const Model::UpdateApnsVoipChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApnsVoipChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateApnsVoipSandboxChannelRequest&, const Model::UpdateApnsVoipSandboxChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApnsVoipSandboxChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateApplicationSettingsRequest&, const Model::UpdateApplicationSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationSettingsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateBaiduChannelRequest&, const Model::UpdateBaiduChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBaiduChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateCampaignRequest&, const Model::UpdateCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCampaignResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateEmailChannelRequest&, const Model::UpdateEmailChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEmailChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateEmailTemplateRequest&, const Model::UpdateEmailTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEmailTemplateResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateEndpointRequest&, const Model::UpdateEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEndpointResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateEndpointsBatchRequest&, const Model::UpdateEndpointsBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEndpointsBatchResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateGcmChannelRequest&, const Model::UpdateGcmChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGcmChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateInAppTemplateRequest&, const Model::UpdateInAppTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInAppTemplateResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateJourneyRequest&, const Model::UpdateJourneyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJourneyResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateJourneyStateRequest&, const Model::UpdateJourneyStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJourneyStateResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdatePushTemplateRequest&, const Model::UpdatePushTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePushTemplateResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateRecommenderConfigurationRequest&, const Model::UpdateRecommenderConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRecommenderConfigurationResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateSegmentRequest&, const Model::UpdateSegmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSegmentResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateSmsChannelRequest&, const Model::UpdateSmsChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSmsChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateSmsTemplateRequest&, const Model::UpdateSmsTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSmsTemplateResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateTemplateActiveVersionRequest&, const Model::UpdateTemplateActiveVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTemplateActiveVersionResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateVoiceChannelRequest&, const Model::UpdateVoiceChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVoiceChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateVoiceTemplateRequest&, const Model::UpdateVoiceTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVoiceTemplateResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::VerifyOTPMessageRequest&, const Model::VerifyOTPMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VerifyOTPMessageResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Pinpoint
} // namespace Aws
