/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/sesv2/SESV2Errors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/sesv2/SESV2EndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SESV2Client header */
#include <aws/sesv2/model/BatchGetMetricDataResult.h>
#include <aws/sesv2/model/CreateConfigurationSetResult.h>
#include <aws/sesv2/model/CreateConfigurationSetEventDestinationResult.h>
#include <aws/sesv2/model/CreateContactResult.h>
#include <aws/sesv2/model/CreateContactListResult.h>
#include <aws/sesv2/model/CreateCustomVerificationEmailTemplateResult.h>
#include <aws/sesv2/model/CreateDedicatedIpPoolResult.h>
#include <aws/sesv2/model/CreateDeliverabilityTestReportResult.h>
#include <aws/sesv2/model/CreateEmailIdentityResult.h>
#include <aws/sesv2/model/CreateEmailIdentityPolicyResult.h>
#include <aws/sesv2/model/CreateEmailTemplateResult.h>
#include <aws/sesv2/model/CreateImportJobResult.h>
#include <aws/sesv2/model/DeleteConfigurationSetResult.h>
#include <aws/sesv2/model/DeleteConfigurationSetEventDestinationResult.h>
#include <aws/sesv2/model/DeleteContactResult.h>
#include <aws/sesv2/model/DeleteContactListResult.h>
#include <aws/sesv2/model/DeleteCustomVerificationEmailTemplateResult.h>
#include <aws/sesv2/model/DeleteDedicatedIpPoolResult.h>
#include <aws/sesv2/model/DeleteEmailIdentityResult.h>
#include <aws/sesv2/model/DeleteEmailIdentityPolicyResult.h>
#include <aws/sesv2/model/DeleteEmailTemplateResult.h>
#include <aws/sesv2/model/DeleteSuppressedDestinationResult.h>
#include <aws/sesv2/model/GetAccountResult.h>
#include <aws/sesv2/model/GetBlacklistReportsResult.h>
#include <aws/sesv2/model/GetConfigurationSetResult.h>
#include <aws/sesv2/model/GetConfigurationSetEventDestinationsResult.h>
#include <aws/sesv2/model/GetContactResult.h>
#include <aws/sesv2/model/GetContactListResult.h>
#include <aws/sesv2/model/GetCustomVerificationEmailTemplateResult.h>
#include <aws/sesv2/model/GetDedicatedIpResult.h>
#include <aws/sesv2/model/GetDedicatedIpPoolResult.h>
#include <aws/sesv2/model/GetDedicatedIpsResult.h>
#include <aws/sesv2/model/GetDeliverabilityDashboardOptionsResult.h>
#include <aws/sesv2/model/GetDeliverabilityTestReportResult.h>
#include <aws/sesv2/model/GetDomainDeliverabilityCampaignResult.h>
#include <aws/sesv2/model/GetDomainStatisticsReportResult.h>
#include <aws/sesv2/model/GetEmailIdentityResult.h>
#include <aws/sesv2/model/GetEmailIdentityPoliciesResult.h>
#include <aws/sesv2/model/GetEmailTemplateResult.h>
#include <aws/sesv2/model/GetImportJobResult.h>
#include <aws/sesv2/model/GetSuppressedDestinationResult.h>
#include <aws/sesv2/model/ListConfigurationSetsResult.h>
#include <aws/sesv2/model/ListContactListsResult.h>
#include <aws/sesv2/model/ListContactsResult.h>
#include <aws/sesv2/model/ListCustomVerificationEmailTemplatesResult.h>
#include <aws/sesv2/model/ListDedicatedIpPoolsResult.h>
#include <aws/sesv2/model/ListDeliverabilityTestReportsResult.h>
#include <aws/sesv2/model/ListDomainDeliverabilityCampaignsResult.h>
#include <aws/sesv2/model/ListEmailIdentitiesResult.h>
#include <aws/sesv2/model/ListEmailTemplatesResult.h>
#include <aws/sesv2/model/ListImportJobsResult.h>
#include <aws/sesv2/model/ListRecommendationsResult.h>
#include <aws/sesv2/model/ListSuppressedDestinationsResult.h>
#include <aws/sesv2/model/ListTagsForResourceResult.h>
#include <aws/sesv2/model/PutAccountDedicatedIpWarmupAttributesResult.h>
#include <aws/sesv2/model/PutAccountDetailsResult.h>
#include <aws/sesv2/model/PutAccountSendingAttributesResult.h>
#include <aws/sesv2/model/PutAccountSuppressionAttributesResult.h>
#include <aws/sesv2/model/PutAccountVdmAttributesResult.h>
#include <aws/sesv2/model/PutConfigurationSetDeliveryOptionsResult.h>
#include <aws/sesv2/model/PutConfigurationSetReputationOptionsResult.h>
#include <aws/sesv2/model/PutConfigurationSetSendingOptionsResult.h>
#include <aws/sesv2/model/PutConfigurationSetSuppressionOptionsResult.h>
#include <aws/sesv2/model/PutConfigurationSetTrackingOptionsResult.h>
#include <aws/sesv2/model/PutConfigurationSetVdmOptionsResult.h>
#include <aws/sesv2/model/PutDedicatedIpInPoolResult.h>
#include <aws/sesv2/model/PutDedicatedIpWarmupAttributesResult.h>
#include <aws/sesv2/model/PutDeliverabilityDashboardOptionResult.h>
#include <aws/sesv2/model/PutEmailIdentityConfigurationSetAttributesResult.h>
#include <aws/sesv2/model/PutEmailIdentityDkimAttributesResult.h>
#include <aws/sesv2/model/PutEmailIdentityDkimSigningAttributesResult.h>
#include <aws/sesv2/model/PutEmailIdentityFeedbackAttributesResult.h>
#include <aws/sesv2/model/PutEmailIdentityMailFromAttributesResult.h>
#include <aws/sesv2/model/PutSuppressedDestinationResult.h>
#include <aws/sesv2/model/SendBulkEmailResult.h>
#include <aws/sesv2/model/SendCustomVerificationEmailResult.h>
#include <aws/sesv2/model/SendEmailResult.h>
#include <aws/sesv2/model/TagResourceResult.h>
#include <aws/sesv2/model/TestRenderEmailTemplateResult.h>
#include <aws/sesv2/model/UntagResourceResult.h>
#include <aws/sesv2/model/UpdateConfigurationSetEventDestinationResult.h>
#include <aws/sesv2/model/UpdateContactResult.h>
#include <aws/sesv2/model/UpdateContactListResult.h>
#include <aws/sesv2/model/UpdateCustomVerificationEmailTemplateResult.h>
#include <aws/sesv2/model/UpdateEmailIdentityPolicyResult.h>
#include <aws/sesv2/model/UpdateEmailTemplateResult.h>
/* End of service model headers required in SESV2Client header */

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

  namespace SESV2
  {
    using SESV2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SESV2EndpointProviderBase = Aws::SESV2::Endpoint::SESV2EndpointProviderBase;
    using SESV2EndpointProvider = Aws::SESV2::Endpoint::SESV2EndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SESV2Client header */
      class BatchGetMetricDataRequest;
      class CreateConfigurationSetRequest;
      class CreateConfigurationSetEventDestinationRequest;
      class CreateContactRequest;
      class CreateContactListRequest;
      class CreateCustomVerificationEmailTemplateRequest;
      class CreateDedicatedIpPoolRequest;
      class CreateDeliverabilityTestReportRequest;
      class CreateEmailIdentityRequest;
      class CreateEmailIdentityPolicyRequest;
      class CreateEmailTemplateRequest;
      class CreateImportJobRequest;
      class DeleteConfigurationSetRequest;
      class DeleteConfigurationSetEventDestinationRequest;
      class DeleteContactRequest;
      class DeleteContactListRequest;
      class DeleteCustomVerificationEmailTemplateRequest;
      class DeleteDedicatedIpPoolRequest;
      class DeleteEmailIdentityRequest;
      class DeleteEmailIdentityPolicyRequest;
      class DeleteEmailTemplateRequest;
      class DeleteSuppressedDestinationRequest;
      class GetAccountRequest;
      class GetBlacklistReportsRequest;
      class GetConfigurationSetRequest;
      class GetConfigurationSetEventDestinationsRequest;
      class GetContactRequest;
      class GetContactListRequest;
      class GetCustomVerificationEmailTemplateRequest;
      class GetDedicatedIpRequest;
      class GetDedicatedIpPoolRequest;
      class GetDedicatedIpsRequest;
      class GetDeliverabilityDashboardOptionsRequest;
      class GetDeliverabilityTestReportRequest;
      class GetDomainDeliverabilityCampaignRequest;
      class GetDomainStatisticsReportRequest;
      class GetEmailIdentityRequest;
      class GetEmailIdentityPoliciesRequest;
      class GetEmailTemplateRequest;
      class GetImportJobRequest;
      class GetSuppressedDestinationRequest;
      class ListConfigurationSetsRequest;
      class ListContactListsRequest;
      class ListContactsRequest;
      class ListCustomVerificationEmailTemplatesRequest;
      class ListDedicatedIpPoolsRequest;
      class ListDeliverabilityTestReportsRequest;
      class ListDomainDeliverabilityCampaignsRequest;
      class ListEmailIdentitiesRequest;
      class ListEmailTemplatesRequest;
      class ListImportJobsRequest;
      class ListRecommendationsRequest;
      class ListSuppressedDestinationsRequest;
      class ListTagsForResourceRequest;
      class PutAccountDedicatedIpWarmupAttributesRequest;
      class PutAccountDetailsRequest;
      class PutAccountSendingAttributesRequest;
      class PutAccountSuppressionAttributesRequest;
      class PutAccountVdmAttributesRequest;
      class PutConfigurationSetDeliveryOptionsRequest;
      class PutConfigurationSetReputationOptionsRequest;
      class PutConfigurationSetSendingOptionsRequest;
      class PutConfigurationSetSuppressionOptionsRequest;
      class PutConfigurationSetTrackingOptionsRequest;
      class PutConfigurationSetVdmOptionsRequest;
      class PutDedicatedIpInPoolRequest;
      class PutDedicatedIpWarmupAttributesRequest;
      class PutDeliverabilityDashboardOptionRequest;
      class PutEmailIdentityConfigurationSetAttributesRequest;
      class PutEmailIdentityDkimAttributesRequest;
      class PutEmailIdentityDkimSigningAttributesRequest;
      class PutEmailIdentityFeedbackAttributesRequest;
      class PutEmailIdentityMailFromAttributesRequest;
      class PutSuppressedDestinationRequest;
      class SendBulkEmailRequest;
      class SendCustomVerificationEmailRequest;
      class SendEmailRequest;
      class TagResourceRequest;
      class TestRenderEmailTemplateRequest;
      class UntagResourceRequest;
      class UpdateConfigurationSetEventDestinationRequest;
      class UpdateContactRequest;
      class UpdateContactListRequest;
      class UpdateCustomVerificationEmailTemplateRequest;
      class UpdateEmailIdentityPolicyRequest;
      class UpdateEmailTemplateRequest;
      /* End of service model forward declarations required in SESV2Client header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchGetMetricDataResult, SESV2Error> BatchGetMetricDataOutcome;
      typedef Aws::Utils::Outcome<CreateConfigurationSetResult, SESV2Error> CreateConfigurationSetOutcome;
      typedef Aws::Utils::Outcome<CreateConfigurationSetEventDestinationResult, SESV2Error> CreateConfigurationSetEventDestinationOutcome;
      typedef Aws::Utils::Outcome<CreateContactResult, SESV2Error> CreateContactOutcome;
      typedef Aws::Utils::Outcome<CreateContactListResult, SESV2Error> CreateContactListOutcome;
      typedef Aws::Utils::Outcome<CreateCustomVerificationEmailTemplateResult, SESV2Error> CreateCustomVerificationEmailTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateDedicatedIpPoolResult, SESV2Error> CreateDedicatedIpPoolOutcome;
      typedef Aws::Utils::Outcome<CreateDeliverabilityTestReportResult, SESV2Error> CreateDeliverabilityTestReportOutcome;
      typedef Aws::Utils::Outcome<CreateEmailIdentityResult, SESV2Error> CreateEmailIdentityOutcome;
      typedef Aws::Utils::Outcome<CreateEmailIdentityPolicyResult, SESV2Error> CreateEmailIdentityPolicyOutcome;
      typedef Aws::Utils::Outcome<CreateEmailTemplateResult, SESV2Error> CreateEmailTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateImportJobResult, SESV2Error> CreateImportJobOutcome;
      typedef Aws::Utils::Outcome<DeleteConfigurationSetResult, SESV2Error> DeleteConfigurationSetOutcome;
      typedef Aws::Utils::Outcome<DeleteConfigurationSetEventDestinationResult, SESV2Error> DeleteConfigurationSetEventDestinationOutcome;
      typedef Aws::Utils::Outcome<DeleteContactResult, SESV2Error> DeleteContactOutcome;
      typedef Aws::Utils::Outcome<DeleteContactListResult, SESV2Error> DeleteContactListOutcome;
      typedef Aws::Utils::Outcome<DeleteCustomVerificationEmailTemplateResult, SESV2Error> DeleteCustomVerificationEmailTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteDedicatedIpPoolResult, SESV2Error> DeleteDedicatedIpPoolOutcome;
      typedef Aws::Utils::Outcome<DeleteEmailIdentityResult, SESV2Error> DeleteEmailIdentityOutcome;
      typedef Aws::Utils::Outcome<DeleteEmailIdentityPolicyResult, SESV2Error> DeleteEmailIdentityPolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteEmailTemplateResult, SESV2Error> DeleteEmailTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteSuppressedDestinationResult, SESV2Error> DeleteSuppressedDestinationOutcome;
      typedef Aws::Utils::Outcome<GetAccountResult, SESV2Error> GetAccountOutcome;
      typedef Aws::Utils::Outcome<GetBlacklistReportsResult, SESV2Error> GetBlacklistReportsOutcome;
      typedef Aws::Utils::Outcome<GetConfigurationSetResult, SESV2Error> GetConfigurationSetOutcome;
      typedef Aws::Utils::Outcome<GetConfigurationSetEventDestinationsResult, SESV2Error> GetConfigurationSetEventDestinationsOutcome;
      typedef Aws::Utils::Outcome<GetContactResult, SESV2Error> GetContactOutcome;
      typedef Aws::Utils::Outcome<GetContactListResult, SESV2Error> GetContactListOutcome;
      typedef Aws::Utils::Outcome<GetCustomVerificationEmailTemplateResult, SESV2Error> GetCustomVerificationEmailTemplateOutcome;
      typedef Aws::Utils::Outcome<GetDedicatedIpResult, SESV2Error> GetDedicatedIpOutcome;
      typedef Aws::Utils::Outcome<GetDedicatedIpPoolResult, SESV2Error> GetDedicatedIpPoolOutcome;
      typedef Aws::Utils::Outcome<GetDedicatedIpsResult, SESV2Error> GetDedicatedIpsOutcome;
      typedef Aws::Utils::Outcome<GetDeliverabilityDashboardOptionsResult, SESV2Error> GetDeliverabilityDashboardOptionsOutcome;
      typedef Aws::Utils::Outcome<GetDeliverabilityTestReportResult, SESV2Error> GetDeliverabilityTestReportOutcome;
      typedef Aws::Utils::Outcome<GetDomainDeliverabilityCampaignResult, SESV2Error> GetDomainDeliverabilityCampaignOutcome;
      typedef Aws::Utils::Outcome<GetDomainStatisticsReportResult, SESV2Error> GetDomainStatisticsReportOutcome;
      typedef Aws::Utils::Outcome<GetEmailIdentityResult, SESV2Error> GetEmailIdentityOutcome;
      typedef Aws::Utils::Outcome<GetEmailIdentityPoliciesResult, SESV2Error> GetEmailIdentityPoliciesOutcome;
      typedef Aws::Utils::Outcome<GetEmailTemplateResult, SESV2Error> GetEmailTemplateOutcome;
      typedef Aws::Utils::Outcome<GetImportJobResult, SESV2Error> GetImportJobOutcome;
      typedef Aws::Utils::Outcome<GetSuppressedDestinationResult, SESV2Error> GetSuppressedDestinationOutcome;
      typedef Aws::Utils::Outcome<ListConfigurationSetsResult, SESV2Error> ListConfigurationSetsOutcome;
      typedef Aws::Utils::Outcome<ListContactListsResult, SESV2Error> ListContactListsOutcome;
      typedef Aws::Utils::Outcome<ListContactsResult, SESV2Error> ListContactsOutcome;
      typedef Aws::Utils::Outcome<ListCustomVerificationEmailTemplatesResult, SESV2Error> ListCustomVerificationEmailTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListDedicatedIpPoolsResult, SESV2Error> ListDedicatedIpPoolsOutcome;
      typedef Aws::Utils::Outcome<ListDeliverabilityTestReportsResult, SESV2Error> ListDeliverabilityTestReportsOutcome;
      typedef Aws::Utils::Outcome<ListDomainDeliverabilityCampaignsResult, SESV2Error> ListDomainDeliverabilityCampaignsOutcome;
      typedef Aws::Utils::Outcome<ListEmailIdentitiesResult, SESV2Error> ListEmailIdentitiesOutcome;
      typedef Aws::Utils::Outcome<ListEmailTemplatesResult, SESV2Error> ListEmailTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListImportJobsResult, SESV2Error> ListImportJobsOutcome;
      typedef Aws::Utils::Outcome<ListRecommendationsResult, SESV2Error> ListRecommendationsOutcome;
      typedef Aws::Utils::Outcome<ListSuppressedDestinationsResult, SESV2Error> ListSuppressedDestinationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, SESV2Error> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutAccountDedicatedIpWarmupAttributesResult, SESV2Error> PutAccountDedicatedIpWarmupAttributesOutcome;
      typedef Aws::Utils::Outcome<PutAccountDetailsResult, SESV2Error> PutAccountDetailsOutcome;
      typedef Aws::Utils::Outcome<PutAccountSendingAttributesResult, SESV2Error> PutAccountSendingAttributesOutcome;
      typedef Aws::Utils::Outcome<PutAccountSuppressionAttributesResult, SESV2Error> PutAccountSuppressionAttributesOutcome;
      typedef Aws::Utils::Outcome<PutAccountVdmAttributesResult, SESV2Error> PutAccountVdmAttributesOutcome;
      typedef Aws::Utils::Outcome<PutConfigurationSetDeliveryOptionsResult, SESV2Error> PutConfigurationSetDeliveryOptionsOutcome;
      typedef Aws::Utils::Outcome<PutConfigurationSetReputationOptionsResult, SESV2Error> PutConfigurationSetReputationOptionsOutcome;
      typedef Aws::Utils::Outcome<PutConfigurationSetSendingOptionsResult, SESV2Error> PutConfigurationSetSendingOptionsOutcome;
      typedef Aws::Utils::Outcome<PutConfigurationSetSuppressionOptionsResult, SESV2Error> PutConfigurationSetSuppressionOptionsOutcome;
      typedef Aws::Utils::Outcome<PutConfigurationSetTrackingOptionsResult, SESV2Error> PutConfigurationSetTrackingOptionsOutcome;
      typedef Aws::Utils::Outcome<PutConfigurationSetVdmOptionsResult, SESV2Error> PutConfigurationSetVdmOptionsOutcome;
      typedef Aws::Utils::Outcome<PutDedicatedIpInPoolResult, SESV2Error> PutDedicatedIpInPoolOutcome;
      typedef Aws::Utils::Outcome<PutDedicatedIpWarmupAttributesResult, SESV2Error> PutDedicatedIpWarmupAttributesOutcome;
      typedef Aws::Utils::Outcome<PutDeliverabilityDashboardOptionResult, SESV2Error> PutDeliverabilityDashboardOptionOutcome;
      typedef Aws::Utils::Outcome<PutEmailIdentityConfigurationSetAttributesResult, SESV2Error> PutEmailIdentityConfigurationSetAttributesOutcome;
      typedef Aws::Utils::Outcome<PutEmailIdentityDkimAttributesResult, SESV2Error> PutEmailIdentityDkimAttributesOutcome;
      typedef Aws::Utils::Outcome<PutEmailIdentityDkimSigningAttributesResult, SESV2Error> PutEmailIdentityDkimSigningAttributesOutcome;
      typedef Aws::Utils::Outcome<PutEmailIdentityFeedbackAttributesResult, SESV2Error> PutEmailIdentityFeedbackAttributesOutcome;
      typedef Aws::Utils::Outcome<PutEmailIdentityMailFromAttributesResult, SESV2Error> PutEmailIdentityMailFromAttributesOutcome;
      typedef Aws::Utils::Outcome<PutSuppressedDestinationResult, SESV2Error> PutSuppressedDestinationOutcome;
      typedef Aws::Utils::Outcome<SendBulkEmailResult, SESV2Error> SendBulkEmailOutcome;
      typedef Aws::Utils::Outcome<SendCustomVerificationEmailResult, SESV2Error> SendCustomVerificationEmailOutcome;
      typedef Aws::Utils::Outcome<SendEmailResult, SESV2Error> SendEmailOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, SESV2Error> TagResourceOutcome;
      typedef Aws::Utils::Outcome<TestRenderEmailTemplateResult, SESV2Error> TestRenderEmailTemplateOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, SESV2Error> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateConfigurationSetEventDestinationResult, SESV2Error> UpdateConfigurationSetEventDestinationOutcome;
      typedef Aws::Utils::Outcome<UpdateContactResult, SESV2Error> UpdateContactOutcome;
      typedef Aws::Utils::Outcome<UpdateContactListResult, SESV2Error> UpdateContactListOutcome;
      typedef Aws::Utils::Outcome<UpdateCustomVerificationEmailTemplateResult, SESV2Error> UpdateCustomVerificationEmailTemplateOutcome;
      typedef Aws::Utils::Outcome<UpdateEmailIdentityPolicyResult, SESV2Error> UpdateEmailIdentityPolicyOutcome;
      typedef Aws::Utils::Outcome<UpdateEmailTemplateResult, SESV2Error> UpdateEmailTemplateOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchGetMetricDataOutcome> BatchGetMetricDataOutcomeCallable;
      typedef std::future<CreateConfigurationSetOutcome> CreateConfigurationSetOutcomeCallable;
      typedef std::future<CreateConfigurationSetEventDestinationOutcome> CreateConfigurationSetEventDestinationOutcomeCallable;
      typedef std::future<CreateContactOutcome> CreateContactOutcomeCallable;
      typedef std::future<CreateContactListOutcome> CreateContactListOutcomeCallable;
      typedef std::future<CreateCustomVerificationEmailTemplateOutcome> CreateCustomVerificationEmailTemplateOutcomeCallable;
      typedef std::future<CreateDedicatedIpPoolOutcome> CreateDedicatedIpPoolOutcomeCallable;
      typedef std::future<CreateDeliverabilityTestReportOutcome> CreateDeliverabilityTestReportOutcomeCallable;
      typedef std::future<CreateEmailIdentityOutcome> CreateEmailIdentityOutcomeCallable;
      typedef std::future<CreateEmailIdentityPolicyOutcome> CreateEmailIdentityPolicyOutcomeCallable;
      typedef std::future<CreateEmailTemplateOutcome> CreateEmailTemplateOutcomeCallable;
      typedef std::future<CreateImportJobOutcome> CreateImportJobOutcomeCallable;
      typedef std::future<DeleteConfigurationSetOutcome> DeleteConfigurationSetOutcomeCallable;
      typedef std::future<DeleteConfigurationSetEventDestinationOutcome> DeleteConfigurationSetEventDestinationOutcomeCallable;
      typedef std::future<DeleteContactOutcome> DeleteContactOutcomeCallable;
      typedef std::future<DeleteContactListOutcome> DeleteContactListOutcomeCallable;
      typedef std::future<DeleteCustomVerificationEmailTemplateOutcome> DeleteCustomVerificationEmailTemplateOutcomeCallable;
      typedef std::future<DeleteDedicatedIpPoolOutcome> DeleteDedicatedIpPoolOutcomeCallable;
      typedef std::future<DeleteEmailIdentityOutcome> DeleteEmailIdentityOutcomeCallable;
      typedef std::future<DeleteEmailIdentityPolicyOutcome> DeleteEmailIdentityPolicyOutcomeCallable;
      typedef std::future<DeleteEmailTemplateOutcome> DeleteEmailTemplateOutcomeCallable;
      typedef std::future<DeleteSuppressedDestinationOutcome> DeleteSuppressedDestinationOutcomeCallable;
      typedef std::future<GetAccountOutcome> GetAccountOutcomeCallable;
      typedef std::future<GetBlacklistReportsOutcome> GetBlacklistReportsOutcomeCallable;
      typedef std::future<GetConfigurationSetOutcome> GetConfigurationSetOutcomeCallable;
      typedef std::future<GetConfigurationSetEventDestinationsOutcome> GetConfigurationSetEventDestinationsOutcomeCallable;
      typedef std::future<GetContactOutcome> GetContactOutcomeCallable;
      typedef std::future<GetContactListOutcome> GetContactListOutcomeCallable;
      typedef std::future<GetCustomVerificationEmailTemplateOutcome> GetCustomVerificationEmailTemplateOutcomeCallable;
      typedef std::future<GetDedicatedIpOutcome> GetDedicatedIpOutcomeCallable;
      typedef std::future<GetDedicatedIpPoolOutcome> GetDedicatedIpPoolOutcomeCallable;
      typedef std::future<GetDedicatedIpsOutcome> GetDedicatedIpsOutcomeCallable;
      typedef std::future<GetDeliverabilityDashboardOptionsOutcome> GetDeliverabilityDashboardOptionsOutcomeCallable;
      typedef std::future<GetDeliverabilityTestReportOutcome> GetDeliverabilityTestReportOutcomeCallable;
      typedef std::future<GetDomainDeliverabilityCampaignOutcome> GetDomainDeliverabilityCampaignOutcomeCallable;
      typedef std::future<GetDomainStatisticsReportOutcome> GetDomainStatisticsReportOutcomeCallable;
      typedef std::future<GetEmailIdentityOutcome> GetEmailIdentityOutcomeCallable;
      typedef std::future<GetEmailIdentityPoliciesOutcome> GetEmailIdentityPoliciesOutcomeCallable;
      typedef std::future<GetEmailTemplateOutcome> GetEmailTemplateOutcomeCallable;
      typedef std::future<GetImportJobOutcome> GetImportJobOutcomeCallable;
      typedef std::future<GetSuppressedDestinationOutcome> GetSuppressedDestinationOutcomeCallable;
      typedef std::future<ListConfigurationSetsOutcome> ListConfigurationSetsOutcomeCallable;
      typedef std::future<ListContactListsOutcome> ListContactListsOutcomeCallable;
      typedef std::future<ListContactsOutcome> ListContactsOutcomeCallable;
      typedef std::future<ListCustomVerificationEmailTemplatesOutcome> ListCustomVerificationEmailTemplatesOutcomeCallable;
      typedef std::future<ListDedicatedIpPoolsOutcome> ListDedicatedIpPoolsOutcomeCallable;
      typedef std::future<ListDeliverabilityTestReportsOutcome> ListDeliverabilityTestReportsOutcomeCallable;
      typedef std::future<ListDomainDeliverabilityCampaignsOutcome> ListDomainDeliverabilityCampaignsOutcomeCallable;
      typedef std::future<ListEmailIdentitiesOutcome> ListEmailIdentitiesOutcomeCallable;
      typedef std::future<ListEmailTemplatesOutcome> ListEmailTemplatesOutcomeCallable;
      typedef std::future<ListImportJobsOutcome> ListImportJobsOutcomeCallable;
      typedef std::future<ListRecommendationsOutcome> ListRecommendationsOutcomeCallable;
      typedef std::future<ListSuppressedDestinationsOutcome> ListSuppressedDestinationsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutAccountDedicatedIpWarmupAttributesOutcome> PutAccountDedicatedIpWarmupAttributesOutcomeCallable;
      typedef std::future<PutAccountDetailsOutcome> PutAccountDetailsOutcomeCallable;
      typedef std::future<PutAccountSendingAttributesOutcome> PutAccountSendingAttributesOutcomeCallable;
      typedef std::future<PutAccountSuppressionAttributesOutcome> PutAccountSuppressionAttributesOutcomeCallable;
      typedef std::future<PutAccountVdmAttributesOutcome> PutAccountVdmAttributesOutcomeCallable;
      typedef std::future<PutConfigurationSetDeliveryOptionsOutcome> PutConfigurationSetDeliveryOptionsOutcomeCallable;
      typedef std::future<PutConfigurationSetReputationOptionsOutcome> PutConfigurationSetReputationOptionsOutcomeCallable;
      typedef std::future<PutConfigurationSetSendingOptionsOutcome> PutConfigurationSetSendingOptionsOutcomeCallable;
      typedef std::future<PutConfigurationSetSuppressionOptionsOutcome> PutConfigurationSetSuppressionOptionsOutcomeCallable;
      typedef std::future<PutConfigurationSetTrackingOptionsOutcome> PutConfigurationSetTrackingOptionsOutcomeCallable;
      typedef std::future<PutConfigurationSetVdmOptionsOutcome> PutConfigurationSetVdmOptionsOutcomeCallable;
      typedef std::future<PutDedicatedIpInPoolOutcome> PutDedicatedIpInPoolOutcomeCallable;
      typedef std::future<PutDedicatedIpWarmupAttributesOutcome> PutDedicatedIpWarmupAttributesOutcomeCallable;
      typedef std::future<PutDeliverabilityDashboardOptionOutcome> PutDeliverabilityDashboardOptionOutcomeCallable;
      typedef std::future<PutEmailIdentityConfigurationSetAttributesOutcome> PutEmailIdentityConfigurationSetAttributesOutcomeCallable;
      typedef std::future<PutEmailIdentityDkimAttributesOutcome> PutEmailIdentityDkimAttributesOutcomeCallable;
      typedef std::future<PutEmailIdentityDkimSigningAttributesOutcome> PutEmailIdentityDkimSigningAttributesOutcomeCallable;
      typedef std::future<PutEmailIdentityFeedbackAttributesOutcome> PutEmailIdentityFeedbackAttributesOutcomeCallable;
      typedef std::future<PutEmailIdentityMailFromAttributesOutcome> PutEmailIdentityMailFromAttributesOutcomeCallable;
      typedef std::future<PutSuppressedDestinationOutcome> PutSuppressedDestinationOutcomeCallable;
      typedef std::future<SendBulkEmailOutcome> SendBulkEmailOutcomeCallable;
      typedef std::future<SendCustomVerificationEmailOutcome> SendCustomVerificationEmailOutcomeCallable;
      typedef std::future<SendEmailOutcome> SendEmailOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<TestRenderEmailTemplateOutcome> TestRenderEmailTemplateOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateConfigurationSetEventDestinationOutcome> UpdateConfigurationSetEventDestinationOutcomeCallable;
      typedef std::future<UpdateContactOutcome> UpdateContactOutcomeCallable;
      typedef std::future<UpdateContactListOutcome> UpdateContactListOutcomeCallable;
      typedef std::future<UpdateCustomVerificationEmailTemplateOutcome> UpdateCustomVerificationEmailTemplateOutcomeCallable;
      typedef std::future<UpdateEmailIdentityPolicyOutcome> UpdateEmailIdentityPolicyOutcomeCallable;
      typedef std::future<UpdateEmailTemplateOutcome> UpdateEmailTemplateOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SESV2Client;

    /* Service model async handlers definitions */
    typedef std::function<void(const SESV2Client*, const Model::BatchGetMetricDataRequest&, const Model::BatchGetMetricDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetMetricDataResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::CreateConfigurationSetRequest&, const Model::CreateConfigurationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfigurationSetResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::CreateConfigurationSetEventDestinationRequest&, const Model::CreateConfigurationSetEventDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfigurationSetEventDestinationResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::CreateContactRequest&, const Model::CreateContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContactResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::CreateContactListRequest&, const Model::CreateContactListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContactListResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::CreateCustomVerificationEmailTemplateRequest&, const Model::CreateCustomVerificationEmailTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCustomVerificationEmailTemplateResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::CreateDedicatedIpPoolRequest&, const Model::CreateDedicatedIpPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDedicatedIpPoolResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::CreateDeliverabilityTestReportRequest&, const Model::CreateDeliverabilityTestReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeliverabilityTestReportResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::CreateEmailIdentityRequest&, const Model::CreateEmailIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEmailIdentityResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::CreateEmailIdentityPolicyRequest&, const Model::CreateEmailIdentityPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEmailIdentityPolicyResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::CreateEmailTemplateRequest&, const Model::CreateEmailTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEmailTemplateResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::CreateImportJobRequest&, const Model::CreateImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateImportJobResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::DeleteConfigurationSetRequest&, const Model::DeleteConfigurationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigurationSetResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::DeleteConfigurationSetEventDestinationRequest&, const Model::DeleteConfigurationSetEventDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigurationSetEventDestinationResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::DeleteContactRequest&, const Model::DeleteContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContactResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::DeleteContactListRequest&, const Model::DeleteContactListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContactListResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::DeleteCustomVerificationEmailTemplateRequest&, const Model::DeleteCustomVerificationEmailTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCustomVerificationEmailTemplateResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::DeleteDedicatedIpPoolRequest&, const Model::DeleteDedicatedIpPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDedicatedIpPoolResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::DeleteEmailIdentityRequest&, const Model::DeleteEmailIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEmailIdentityResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::DeleteEmailIdentityPolicyRequest&, const Model::DeleteEmailIdentityPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEmailIdentityPolicyResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::DeleteEmailTemplateRequest&, const Model::DeleteEmailTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEmailTemplateResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::DeleteSuppressedDestinationRequest&, const Model::DeleteSuppressedDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSuppressedDestinationResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetAccountRequest&, const Model::GetAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetBlacklistReportsRequest&, const Model::GetBlacklistReportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBlacklistReportsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetConfigurationSetRequest&, const Model::GetConfigurationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfigurationSetResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetConfigurationSetEventDestinationsRequest&, const Model::GetConfigurationSetEventDestinationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfigurationSetEventDestinationsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetContactRequest&, const Model::GetContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContactResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetContactListRequest&, const Model::GetContactListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContactListResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetCustomVerificationEmailTemplateRequest&, const Model::GetCustomVerificationEmailTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCustomVerificationEmailTemplateResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetDedicatedIpRequest&, const Model::GetDedicatedIpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDedicatedIpResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetDedicatedIpPoolRequest&, const Model::GetDedicatedIpPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDedicatedIpPoolResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetDedicatedIpsRequest&, const Model::GetDedicatedIpsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDedicatedIpsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetDeliverabilityDashboardOptionsRequest&, const Model::GetDeliverabilityDashboardOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeliverabilityDashboardOptionsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetDeliverabilityTestReportRequest&, const Model::GetDeliverabilityTestReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeliverabilityTestReportResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetDomainDeliverabilityCampaignRequest&, const Model::GetDomainDeliverabilityCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainDeliverabilityCampaignResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetDomainStatisticsReportRequest&, const Model::GetDomainStatisticsReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainStatisticsReportResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetEmailIdentityRequest&, const Model::GetEmailIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEmailIdentityResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetEmailIdentityPoliciesRequest&, const Model::GetEmailIdentityPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEmailIdentityPoliciesResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetEmailTemplateRequest&, const Model::GetEmailTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEmailTemplateResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetImportJobRequest&, const Model::GetImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImportJobResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetSuppressedDestinationRequest&, const Model::GetSuppressedDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSuppressedDestinationResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::ListConfigurationSetsRequest&, const Model::ListConfigurationSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfigurationSetsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::ListContactListsRequest&, const Model::ListContactListsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContactListsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::ListContactsRequest&, const Model::ListContactsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContactsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::ListCustomVerificationEmailTemplatesRequest&, const Model::ListCustomVerificationEmailTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCustomVerificationEmailTemplatesResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::ListDedicatedIpPoolsRequest&, const Model::ListDedicatedIpPoolsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDedicatedIpPoolsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::ListDeliverabilityTestReportsRequest&, const Model::ListDeliverabilityTestReportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeliverabilityTestReportsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::ListDomainDeliverabilityCampaignsRequest&, const Model::ListDomainDeliverabilityCampaignsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainDeliverabilityCampaignsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::ListEmailIdentitiesRequest&, const Model::ListEmailIdentitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEmailIdentitiesResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::ListEmailTemplatesRequest&, const Model::ListEmailTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEmailTemplatesResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::ListImportJobsRequest&, const Model::ListImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImportJobsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::ListRecommendationsRequest&, const Model::ListRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecommendationsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::ListSuppressedDestinationsRequest&, const Model::ListSuppressedDestinationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSuppressedDestinationsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutAccountDedicatedIpWarmupAttributesRequest&, const Model::PutAccountDedicatedIpWarmupAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccountDedicatedIpWarmupAttributesResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutAccountDetailsRequest&, const Model::PutAccountDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccountDetailsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutAccountSendingAttributesRequest&, const Model::PutAccountSendingAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccountSendingAttributesResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutAccountSuppressionAttributesRequest&, const Model::PutAccountSuppressionAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccountSuppressionAttributesResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutAccountVdmAttributesRequest&, const Model::PutAccountVdmAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccountVdmAttributesResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutConfigurationSetDeliveryOptionsRequest&, const Model::PutConfigurationSetDeliveryOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConfigurationSetDeliveryOptionsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutConfigurationSetReputationOptionsRequest&, const Model::PutConfigurationSetReputationOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConfigurationSetReputationOptionsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutConfigurationSetSendingOptionsRequest&, const Model::PutConfigurationSetSendingOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConfigurationSetSendingOptionsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutConfigurationSetSuppressionOptionsRequest&, const Model::PutConfigurationSetSuppressionOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConfigurationSetSuppressionOptionsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutConfigurationSetTrackingOptionsRequest&, const Model::PutConfigurationSetTrackingOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConfigurationSetTrackingOptionsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutConfigurationSetVdmOptionsRequest&, const Model::PutConfigurationSetVdmOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConfigurationSetVdmOptionsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutDedicatedIpInPoolRequest&, const Model::PutDedicatedIpInPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDedicatedIpInPoolResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutDedicatedIpWarmupAttributesRequest&, const Model::PutDedicatedIpWarmupAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDedicatedIpWarmupAttributesResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutDeliverabilityDashboardOptionRequest&, const Model::PutDeliverabilityDashboardOptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDeliverabilityDashboardOptionResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutEmailIdentityConfigurationSetAttributesRequest&, const Model::PutEmailIdentityConfigurationSetAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEmailIdentityConfigurationSetAttributesResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutEmailIdentityDkimAttributesRequest&, const Model::PutEmailIdentityDkimAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEmailIdentityDkimAttributesResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutEmailIdentityDkimSigningAttributesRequest&, const Model::PutEmailIdentityDkimSigningAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEmailIdentityDkimSigningAttributesResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutEmailIdentityFeedbackAttributesRequest&, const Model::PutEmailIdentityFeedbackAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEmailIdentityFeedbackAttributesResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutEmailIdentityMailFromAttributesRequest&, const Model::PutEmailIdentityMailFromAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEmailIdentityMailFromAttributesResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutSuppressedDestinationRequest&, const Model::PutSuppressedDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSuppressedDestinationResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::SendBulkEmailRequest&, const Model::SendBulkEmailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendBulkEmailResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::SendCustomVerificationEmailRequest&, const Model::SendCustomVerificationEmailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendCustomVerificationEmailResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::SendEmailRequest&, const Model::SendEmailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendEmailResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::TestRenderEmailTemplateRequest&, const Model::TestRenderEmailTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestRenderEmailTemplateResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::UpdateConfigurationSetEventDestinationRequest&, const Model::UpdateConfigurationSetEventDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfigurationSetEventDestinationResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::UpdateContactRequest&, const Model::UpdateContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::UpdateContactListRequest&, const Model::UpdateContactListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactListResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::UpdateCustomVerificationEmailTemplateRequest&, const Model::UpdateCustomVerificationEmailTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCustomVerificationEmailTemplateResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::UpdateEmailIdentityPolicyRequest&, const Model::UpdateEmailIdentityPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEmailIdentityPolicyResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::UpdateEmailTemplateRequest&, const Model::UpdateEmailTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEmailTemplateResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SESV2
} // namespace Aws
